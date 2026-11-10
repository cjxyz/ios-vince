/*
 * gputest: does OpenGL ES 2 draw on the Adreno 506 through Mesa's freedreno and the kernel's VinceGPU?
 *
 * Uses OSMesa the way libredwood-gl does (an ES2 context, a few pixels of "window"), clears, draws one
 * triangle with a shader, reads pixels back, and says so on the console (so it shows up in the boot log).
 * PASS needs the renderer not to be softpipe: that is the point. OSMESA_SOFTWARE=1 in the environment
 * makes Mesa skip the GPU (to compare).
 *
 * From pixellia/ios-casuarina userland/gpu/gputest.c (HackiOS lineage, MIT, see CREDITS.md). Here it may be
 * started by launchd before the kernel's VinceGPU service exists (the Adreno comes up a few seconds after the
 * touch screen), so it waits up to 60 s for the service first: without it Mesa would quietly use softpipe.
 * Every step is announced, a fatal signal is reported with the step it hit, and at the end (or after a crash
 * or the 90 s timeout) the lines said so far are printed again every 10 s for 3 minutes, so they can still
 * be read on the screen once the boot log has scrolled past them.
 */
#include <fcntl.h>
#include <signal.h>
#include <sys/ucontext.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <IOKit/IOKitLib.h>

#define W 64
#define H 64

#define GL_FALSE                0
#define GL_TRIANGLES            0x0004
#define GL_FLOAT                0x1406
#define GL_UNSIGNED_BYTE        0x1401
#define GL_RGBA                 0x1908
#define GL_COLOR_BUFFER_BIT     0x4000
#define GL_VERTEX_SHADER        0x8b31
#define GL_FRAGMENT_SHADER      0x8b30
#define GL_COMPILE_STATUS       0x8b81
#define GL_LINK_STATUS          0x8b82
#define GL_VENDOR               0x1f00
#define GL_RENDERER             0x1f01
#define GL_VERSION              0x1f02

#define OSMESA_FORMAT                   0x22
#define OSMESA_RGBA                     0x1908
#define OSMESA_DEPTH_BITS               0x30
#define OSMESA_STENCIL_BITS             0x31
#define OSMESA_PROFILE                  0x33
#define OSMESA_CONTEXT_MAJOR_VERSION    0x36
#define OSMESA_CONTEXT_MINOR_VERSION    0x37
#define OSMESA_ES_PROFILE               0x38

typedef struct osmesa_context *OSMesaContext;
extern OSMesaContext OSMesaCreateContextAttribs(const int *attributes, OSMesaContext share);
extern unsigned char OSMesaMakeCurrent(OSMesaContext context, void *buffer, unsigned type, int width, int height);
extern void (*OSMesaGetProcAddress(const char *name))(void);

static int console = -1;
static const char *step = "start";

/* what was said, for the summary printed again at the end */
#define HISTORY 24
static char history[HISTORY][120];
static int history_count;

static void
say(const char *format, ...)
{
	char line[256];
	va_list ap;
	int n;

	va_start(ap, format);
	n = vsnprintf(line, sizeof(line) - 2, format, ap);
	va_end(ap);
	if (n < 0) {
		return;
	}
	if (n > (int)sizeof(line) - 3) {
		n = (int)sizeof(line) - 3;
	}
	line[n++] = '\n';
	if (console >= 0) {
		(void)!write(console, "gputest: ", 9);
		(void)!write(console, line, (size_t)n);
	}
	(void)!write(1, line, (size_t)n);
	if (history_count < HISTORY) {
		line[n - 1] = '\0';
		snprintf(history[history_count++], sizeof(history[0]), "%s", line);
	}
}

static void
replay(void)
{
	char line[160];

	for (int i = 0; i < history_count; i++) {
		int n = snprintf(line, sizeof(line), "gputest summary %d/%d: %s\n", i + 1, history_count, history[i]);

		if (console >= 0 && n > 0) {
			(void)!write(console, line, (size_t)(n < (int)sizeof(line) ? n : (int)sizeof(line) - 1));
		}
	}
}

/* the summary every 10 s for 3 minutes, then exit */
static void __attribute__((noreturn))
finish(int code)
{
	for (int i = 0; i < 18; i++) {
		sleep(10);
		replay();
	}
	_exit(code);
}

static void
fatal(int signal, siginfo_t *info, void *context)
{
	ucontext_t *uc = context;

	/* si_code for SIGBUS: 1 BUS_ADRALN (alignment), 2 BUS_ADRERR, 3 BUS_OBJERR (the memory object failed) */
	say("FAIL: signal %d code %d at %p during step \"%s\"", signal, info->si_code, info->si_addr, step);
	if (uc != NULL && uc->uc_mcontext != NULL) {
		say("pc %#llx lr %#llx far %#llx esr %#x", (unsigned long long)uc->uc_mcontext->__ss.__pc,
		    (unsigned long long)uc->uc_mcontext->__ss.__lr, (unsigned long long)uc->uc_mcontext->__es.__far,
		    uc->uc_mcontext->__es.__esr);
	}
	finish(4);
}

#define FUNCTIONS \
	F(const unsigned char *, glGetString, (unsigned)) \
	F(unsigned, glGetError, (void)) \
	F(void, glViewport, (int, int, int, int)) \
	F(void, glClearColor, (float, float, float, float)) \
	F(void, glClear, (unsigned)) \
	F(void, glFinish, (void)) \
	F(void, glReadPixels, (int, int, int, int, unsigned, unsigned, void *)) \
	F(unsigned, glCreateShader, (unsigned)) \
	F(void, glShaderSource, (unsigned, int, const char *const *, const int *)) \
	F(void, glCompileShader, (unsigned)) \
	F(void, glGetShaderiv, (unsigned, unsigned, int *)) \
	F(void, glGetShaderInfoLog, (unsigned, int, int *, char *)) \
	F(unsigned, glCreateProgram, (void)) \
	F(void, glAttachShader, (unsigned, unsigned)) \
	F(void, glLinkProgram, (unsigned)) \
	F(void, glGetProgramiv, (unsigned, unsigned, int *)) \
	F(void, glGetProgramInfoLog, (unsigned, int, int *, char *)) \
	F(void, glUseProgram, (unsigned)) \
	F(int, glGetAttribLocation, (unsigned, const char *)) \
	F(void, glEnableVertexAttribArray, (unsigned)) \
	F(void, glVertexAttribPointer, (unsigned, int, unsigned, unsigned char, int, const void *)) \
	F(void, glDrawArrays, (unsigned, int, int))

#define F(type, name, args) static type (*name) args;
FUNCTIONS
#undef F

static int
load(void)
{
#define F(type, name, args) \
	if ((name = (type (*) args)OSMesaGetProcAddress(#name)) == NULL) { \
		say("no " #name); \
		return 0; \
	}
	FUNCTIONS
#undef F
	return 1;
}

static unsigned
shader(unsigned kind, const char *source)
{
	unsigned s = glCreateShader(kind);
	int ok = 0;
	char log[512] = "";

	glShaderSource(s, 1, &source, NULL);
	glCompileShader(s);
	glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
	if (!ok) {
		glGetShaderInfoLog(s, sizeof(log) - 1, NULL, log);
		say("shader %#x does not compile: %s", kind, log);
		return 0;
	}
	return s;
}

static void
timeout(int signal)
{
	(void)signal;
	say("FAIL: no end in 90 s, stuck in step \"%s\" (the GPU did not answer?)", step);
	finish(3);
}

int
main(void)
{
	static unsigned char window[W * H * 4];
	const int attributes[] = {
		OSMESA_FORMAT, OSMESA_RGBA, OSMESA_DEPTH_BITS, 24, OSMESA_STENCIL_BITS, 8,
		OSMESA_PROFILE, OSMESA_ES_PROFILE, OSMESA_CONTEXT_MAJOR_VERSION, 2, OSMESA_CONTEXT_MINOR_VERSION, 0,
		0
	};
	static const float triangle[] = { -1.0f, -1.0f, 3.0f, -1.0f, -1.0f, 3.0f };	/* covers the whole viewport */
	const char *renderer;
	unsigned char pixel[4];
	unsigned vs, fs, program;
	int ok = 0, location, passed = 0;
	char log[512] = "";

	console = open("/dev/console", O_WRONLY | O_NOCTTY);
	struct sigaction sa;

	memset(&sa, 0, sizeof(sa));
	sa.sa_sigaction = fatal;
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGSEGV, &sa, NULL);
	sigaction(SIGBUS, &sa, NULL);
	sigaction(SIGILL, &sa, NULL);
	sigaction(SIGABRT, &sa, NULL);
	sigaction(SIGFPE, &sa, NULL);
	say("start");
	for (int waited = 0;; waited++) {
		io_service_t gpu = IOServiceGetMatchingService(0, IOServiceMatching("VinceGPU"));

		if (gpu != 0) {
			IOObjectRelease(gpu);
			say("VinceGPU found after %d s", waited);
			break;
		}
		if (waited == 60) {
			say("FAIL: no VinceGPU service after 60 s (boot-arg gpu=1?)");
			finish(2);
		}
		sleep(1);
	}
	signal(SIGALRM, timeout);
	alarm(90);

	step = "OSMesaCreateContextAttribs";
	say("step: %s", step);
	OSMesaContext context = OSMesaCreateContextAttribs(attributes, NULL);
	if (context == NULL) {
		say("FAIL: no ES2 context");
		finish(1);
	}
	step = "OSMesaMakeCurrent";
	say("step: %s", step);
	if (!OSMesaMakeCurrent(context, window, GL_UNSIGNED_BYTE, W, H)) {
		say("FAIL: no current context");
		finish(1);
	}
	step = "load functions";
	if (!load()) {
		say("FAIL: no GL functions");
		finish(1);
	}
	step = "glGetString";
	renderer = (const char *)glGetString(GL_RENDERER);
	say("vendor %s", (const char *)glGetString(GL_VENDOR));
	say("renderer %s", renderer != NULL ? renderer : "?");
	say("version %s", (const char *)glGetString(GL_VERSION));

	glViewport(0, 0, W, H);
	step = "clear";
	say("step: %s", step);

	glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glFinish();
	glReadPixels(W / 2, H / 2, 1, 1, GL_RGBA, GL_UNSIGNED_BYTE, pixel);
	say("clear: pixel %u %u %u %u (want 255 0 0 255)", pixel[0], pixel[1], pixel[2], pixel[3]);
	if (pixel[0] == 255 && pixel[1] == 0 && pixel[2] == 0 && pixel[3] == 255) {
		passed++;
		say("clear PASS");
	} else {
		say("clear FAIL");
	}

	step = "shaders and triangle";
	say("step: %s", step);
	vs = shader(GL_VERTEX_SHADER, "attribute vec2 p; void main() { gl_Position = vec4(p, 0.0, 1.0); }");
	fs = shader(GL_FRAGMENT_SHADER, "precision mediump float; void main() { gl_FragColor = vec4(0.0, 1.0, 0.0, 1.0); }");
	if (vs != 0 && fs != 0) {
		program = glCreateProgram();
		glAttachShader(program, vs);
		glAttachShader(program, fs);
		glLinkProgram(program);
		glGetProgramiv(program, GL_LINK_STATUS, &ok);
		if (!ok) {
			glGetProgramInfoLog(program, sizeof(log) - 1, NULL, log);
			say("program does not link: %s", log);
		} else {
			glUseProgram(program);
			location = glGetAttribLocation(program, "p");
			glEnableVertexAttribArray((unsigned)location);
			glVertexAttribPointer((unsigned)location, 2, GL_FLOAT, GL_FALSE, 0, triangle);
			glDrawArrays(GL_TRIANGLES, 0, 3);
			glFinish();
			glReadPixels(W / 2, H / 2, 1, 1, GL_RGBA, GL_UNSIGNED_BYTE, pixel);
			say("triangle: pixel %u %u %u %u (want 0 255 0 255), GL error %#x",
			    pixel[0], pixel[1], pixel[2], pixel[3], glGetError());
			if (pixel[0] == 0 && pixel[1] == 255 && pixel[2] == 0 && pixel[3] == 255) {
				passed++;
				say("triangle PASS");
			} else {
				say("triangle FAIL");
			}
		}
	}

	if (renderer != NULL && (strstr(renderer, "softpipe") != NULL || strstr(renderer, "llvmpipe") != NULL)) {
		say("SOFTWARE renderer: the drawing did not go through the GPU (%d of 2 drawing checks)", passed);
		finish(2);
	}
	say("%s: %d of 2 drawing checks on the GPU", passed == 2 ? "PASS" : "FAIL", passed);
	finish(passed == 2 ? 0 : 1);
}
