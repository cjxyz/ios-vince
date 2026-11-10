/* Link-time stand-in for Mesa's libOSMesa.8.dylib (same install name): at run time the real one is loaded. */
#include <stddef.h>
void *OSMesaCreateContextAttribs(const int *a, void *s) { (void)a; (void)s; return NULL; }
unsigned char OSMesaMakeCurrent(void *c, void *b, unsigned t, int w, int h) { (void)c; (void)b; (void)t; (void)w; (void)h; return 0; }
void OSMesaDestroyContext(void *c) { (void)c; }
void (*OSMesaGetProcAddress(const char *n))(void) { (void)n; return NULL; }
const unsigned char *glGetString(unsigned n) { (void)n; return NULL; }
unsigned glGetError(void) { return 0; }
