/* eagl_gen.h: made by mkeagl.py from the stubs of iOS's OpenGLES (eagl_slots.txt) and Khronos's gl.xml. Not to be edited. */

#ifdef EAGL_GEN_DECLARATIONS
extern void (*redwood_gl_proc(const char *name))(void);

static void (*eagl_p_glActiveShaderProgramEXT)(GLuint, GLuint);
#define glActiveShaderProgramEXT eagl_p_glActiveShaderProgramEXT
static void (*eagl_p_glActiveTexture)(GLenum);
#define glActiveTexture eagl_p_glActiveTexture
static void (*eagl_p_glAlphaFunc)(GLenum, GLfloat);
#define glAlphaFunc eagl_p_glAlphaFunc
static void (*eagl_p_glAlphaFuncx)(GLenum, GLfixed);
#define glAlphaFuncx eagl_p_glAlphaFuncx
static void (*eagl_p_glAttachShader)(GLuint, GLuint);
#define glAttachShader eagl_p_glAttachShader
static void (*eagl_p_glBeginQuery)(GLenum, GLuint);
#define glBeginQuery eagl_p_glBeginQuery
static void (*eagl_p_glBeginTransformFeedback)(GLenum);
#define glBeginTransformFeedback eagl_p_glBeginTransformFeedback
static void (*eagl_p_glBindAttribLocation)(GLuint, GLuint, const GLchar *);
#define glBindAttribLocation eagl_p_glBindAttribLocation
static void (*eagl_p_glBindBuffer)(GLenum, GLuint);
#define glBindBuffer eagl_p_glBindBuffer
static void (*eagl_p_glBindBufferBase)(GLenum, GLuint, GLuint);
#define glBindBufferBase eagl_p_glBindBufferBase
static void (*eagl_p_glBindBufferRange)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr);
#define glBindBufferRange eagl_p_glBindBufferRange
static void (*eagl_p_glBindFramebuffer)(GLenum, GLuint);
#define glBindFramebuffer eagl_p_glBindFramebuffer
static void (*eagl_p_glBindProgramPipelineEXT)(GLuint);
#define glBindProgramPipelineEXT eagl_p_glBindProgramPipelineEXT
static void (*eagl_p_glBindRenderbuffer)(GLenum, GLuint);
#define glBindRenderbuffer eagl_p_glBindRenderbuffer
static void (*eagl_p_glBindSampler)(GLuint, GLuint);
#define glBindSampler eagl_p_glBindSampler
static void (*eagl_p_glBindTexture)(GLenum, GLuint);
#define glBindTexture eagl_p_glBindTexture
static void (*eagl_p_glBindTransformFeedback)(GLenum, GLuint);
#define glBindTransformFeedback eagl_p_glBindTransformFeedback
static void (*eagl_p_glBindVertexArray)(GLuint);
#define glBindVertexArray eagl_p_glBindVertexArray
static void (*eagl_p_glBlendColor)(GLfloat, GLfloat, GLfloat, GLfloat);
#define glBlendColor eagl_p_glBlendColor
static void (*eagl_p_glBlendEquation)(GLenum);
#define glBlendEquation eagl_p_glBlendEquation
static void (*eagl_p_glBlendEquationSeparate)(GLenum, GLenum);
#define glBlendEquationSeparate eagl_p_glBlendEquationSeparate
static void (*eagl_p_glBlendFunc)(GLenum, GLenum);
#define glBlendFunc eagl_p_glBlendFunc
static void (*eagl_p_glBlendFuncSeparate)(GLenum, GLenum, GLenum, GLenum);
#define glBlendFuncSeparate eagl_p_glBlendFuncSeparate
static void (*eagl_p_glBlitFramebuffer)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum);
#define glBlitFramebuffer eagl_p_glBlitFramebuffer
static void (*eagl_p_glBufferData)(GLenum, GLsizeiptr, const void *, GLenum);
#define glBufferData eagl_p_glBufferData
static void (*eagl_p_glBufferSubData)(GLenum, GLintptr, GLsizeiptr, const void *);
#define glBufferSubData eagl_p_glBufferSubData
static GLenum (*eagl_p_glCheckFramebufferStatus)(GLenum);
#define glCheckFramebufferStatus eagl_p_glCheckFramebufferStatus
static void (*eagl_p_glClear)(GLbitfield);
#define glClear eagl_p_glClear
static void (*eagl_p_glClearBufferfi)(GLenum, GLint, GLfloat, GLint);
#define glClearBufferfi eagl_p_glClearBufferfi
static void (*eagl_p_glClearBufferfv)(GLenum, GLint, const GLfloat *);
#define glClearBufferfv eagl_p_glClearBufferfv
static void (*eagl_p_glClearBufferiv)(GLenum, GLint, const GLint *);
#define glClearBufferiv eagl_p_glClearBufferiv
static void (*eagl_p_glClearBufferuiv)(GLenum, GLint, const GLuint *);
#define glClearBufferuiv eagl_p_glClearBufferuiv
static void (*eagl_p_glClearColor)(GLfloat, GLfloat, GLfloat, GLfloat);
#define glClearColor eagl_p_glClearColor
static void (*eagl_p_glClearColorx)(GLfixed, GLfixed, GLfixed, GLfixed);
#define glClearColorx eagl_p_glClearColorx
static void (*eagl_p_glClearDepthf)(GLfloat);
#define glClearDepthf eagl_p_glClearDepthf
static void (*eagl_p_glClearDepthx)(GLfixed);
#define glClearDepthx eagl_p_glClearDepthx
static void (*eagl_p_glClearStencil)(GLint);
#define glClearStencil eagl_p_glClearStencil
static void (*eagl_p_glClientActiveTexture)(GLenum);
#define glClientActiveTexture eagl_p_glClientActiveTexture
static GLenum (*eagl_p_glClientWaitSync)(GLsync, GLbitfield, GLuint64);
#define glClientWaitSync eagl_p_glClientWaitSync
static void (*eagl_p_glClipPlanef)(GLenum, const GLfloat *);
#define glClipPlanef eagl_p_glClipPlanef
static void (*eagl_p_glClipPlanex)(GLenum, const GLfixed *);
#define glClipPlanex eagl_p_glClipPlanex
static void (*eagl_p_glColor4f)(GLfloat, GLfloat, GLfloat, GLfloat);
#define glColor4f eagl_p_glColor4f
static void (*eagl_p_glColor4ub)(GLubyte, GLubyte, GLubyte, GLubyte);
#define glColor4ub eagl_p_glColor4ub
static void (*eagl_p_glColor4x)(GLfixed, GLfixed, GLfixed, GLfixed);
#define glColor4x eagl_p_glColor4x
static void (*eagl_p_glColorMask)(GLboolean, GLboolean, GLboolean, GLboolean);
#define glColorMask eagl_p_glColorMask
static void (*eagl_p_glColorPointer)(GLint, GLenum, GLsizei, const void *);
#define glColorPointer eagl_p_glColorPointer
static void (*eagl_p_glCompileShader)(GLuint);
#define glCompileShader eagl_p_glCompileShader
static void (*eagl_p_glCompressedTexImage2D)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *);
#define glCompressedTexImage2D eagl_p_glCompressedTexImage2D
static void (*eagl_p_glCompressedTexImage3D)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *);
#define glCompressedTexImage3D eagl_p_glCompressedTexImage3D
static void (*eagl_p_glCompressedTexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *);
#define glCompressedTexSubImage2D eagl_p_glCompressedTexSubImage2D
static void (*eagl_p_glCompressedTexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *);
#define glCompressedTexSubImage3D eagl_p_glCompressedTexSubImage3D
static void (*eagl_p_glCopyBufferSubData)(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr);
#define glCopyBufferSubData eagl_p_glCopyBufferSubData
static void (*eagl_p_glCopyTexImage2D)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
#define glCopyTexImage2D eagl_p_glCopyTexImage2D
static void (*eagl_p_glCopyTexSubImage2D)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
#define glCopyTexSubImage2D eagl_p_glCopyTexSubImage2D
static void (*eagl_p_glCopyTexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
#define glCopyTexSubImage3D eagl_p_glCopyTexSubImage3D
static void (*eagl_p_glCopyTextureLevelsAPPLE)(GLuint, GLuint, GLint, GLsizei);
#define glCopyTextureLevelsAPPLE eagl_p_glCopyTextureLevelsAPPLE
static GLuint (*eagl_p_glCreateProgram)(void);
#define glCreateProgram eagl_p_glCreateProgram
static GLuint (*eagl_p_glCreateShader)(GLenum);
#define glCreateShader eagl_p_glCreateShader
static GLuint (*eagl_p_glCreateShaderProgramvEXT)(GLenum, GLsizei, const GLchar *const*);
#define glCreateShaderProgramvEXT eagl_p_glCreateShaderProgramvEXT
static void (*eagl_p_glCullFace)(GLenum);
#define glCullFace eagl_p_glCullFace
static void (*eagl_p_glCurrentPaletteMatrixOES)(GLuint);
#define glCurrentPaletteMatrixOES eagl_p_glCurrentPaletteMatrixOES
static void (*eagl_p_glDeleteBuffers)(GLsizei, const GLuint *);
#define glDeleteBuffers eagl_p_glDeleteBuffers
static void (*eagl_p_glDeleteFencesAPPLE)(GLsizei, const GLuint *);
#define glDeleteFencesAPPLE eagl_p_glDeleteFencesAPPLE
static void (*eagl_p_glDeleteFramebuffers)(GLsizei, const GLuint *);
#define glDeleteFramebuffers eagl_p_glDeleteFramebuffers
static void (*eagl_p_glDeleteProgram)(GLuint);
#define glDeleteProgram eagl_p_glDeleteProgram
static void (*eagl_p_glDeleteProgramPipelinesEXT)(GLsizei, const GLuint *);
#define glDeleteProgramPipelinesEXT eagl_p_glDeleteProgramPipelinesEXT
static void (*eagl_p_glDeleteQueries)(GLsizei, const GLuint *);
#define glDeleteQueries eagl_p_glDeleteQueries
static void (*eagl_p_glDeleteRenderbuffers)(GLsizei, const GLuint *);
#define glDeleteRenderbuffers eagl_p_glDeleteRenderbuffers
static void (*eagl_p_glDeleteSamplers)(GLsizei, const GLuint *);
#define glDeleteSamplers eagl_p_glDeleteSamplers
static void (*eagl_p_glDeleteShader)(GLuint);
#define glDeleteShader eagl_p_glDeleteShader
static void (*eagl_p_glDeleteSync)(GLsync);
#define glDeleteSync eagl_p_glDeleteSync
static void (*eagl_p_glDeleteTextures)(GLsizei, const GLuint *);
#define glDeleteTextures eagl_p_glDeleteTextures
static void (*eagl_p_glDeleteTransformFeedbacks)(GLsizei, const GLuint *);
#define glDeleteTransformFeedbacks eagl_p_glDeleteTransformFeedbacks
static void (*eagl_p_glDeleteVertexArrays)(GLsizei, const GLuint *);
#define glDeleteVertexArrays eagl_p_glDeleteVertexArrays
static void (*eagl_p_glDepthFunc)(GLenum);
#define glDepthFunc eagl_p_glDepthFunc
static void (*eagl_p_glDepthMask)(GLboolean);
#define glDepthMask eagl_p_glDepthMask
static void (*eagl_p_glDepthRangef)(GLfloat, GLfloat);
#define glDepthRangef eagl_p_glDepthRangef
static void (*eagl_p_glDepthRangex)(GLfixed, GLfixed);
#define glDepthRangex eagl_p_glDepthRangex
static void (*eagl_p_glDetachShader)(GLuint, GLuint);
#define glDetachShader eagl_p_glDetachShader
static void (*eagl_p_glDisable)(GLenum);
#define glDisable eagl_p_glDisable
static void (*eagl_p_glDisableClientState)(GLenum);
#define glDisableClientState eagl_p_glDisableClientState
static void (*eagl_p_glDisableVertexAttribArray)(GLuint);
#define glDisableVertexAttribArray eagl_p_glDisableVertexAttribArray
static void (*eagl_p_glDiscardFramebufferEXT)(GLenum, GLsizei, const GLenum *);
#define glDiscardFramebufferEXT eagl_p_glDiscardFramebufferEXT
static void (*eagl_p_glDrawArrays)(GLenum, GLint, GLsizei);
#define glDrawArrays eagl_p_glDrawArrays
static void (*eagl_p_glDrawArraysInstanced)(GLenum, GLint, GLsizei, GLsizei);
#define glDrawArraysInstanced eagl_p_glDrawArraysInstanced
static void (*eagl_p_glDrawBuffers)(GLsizei, const GLenum *);
#define glDrawBuffers eagl_p_glDrawBuffers
static void (*eagl_p_glDrawElements)(GLenum, GLsizei, GLenum, const void *);
#define glDrawElements eagl_p_glDrawElements
static void (*eagl_p_glDrawElementsInstanced)(GLenum, GLsizei, GLenum, const void *, GLsizei);
#define glDrawElementsInstanced eagl_p_glDrawElementsInstanced
static void (*eagl_p_glDrawRangeElements)(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *);
#define glDrawRangeElements eagl_p_glDrawRangeElements
static void (*eagl_p_glDrawTexfOES)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
#define glDrawTexfOES eagl_p_glDrawTexfOES
static void (*eagl_p_glDrawTexfvOES)(const GLfloat *);
#define glDrawTexfvOES eagl_p_glDrawTexfvOES
static void (*eagl_p_glDrawTexiOES)(GLint, GLint, GLint, GLint, GLint);
#define glDrawTexiOES eagl_p_glDrawTexiOES
static void (*eagl_p_glDrawTexivOES)(const GLint *);
#define glDrawTexivOES eagl_p_glDrawTexivOES
static void (*eagl_p_glDrawTexsOES)(GLshort, GLshort, GLshort, GLshort, GLshort);
#define glDrawTexsOES eagl_p_glDrawTexsOES
static void (*eagl_p_glDrawTexsvOES)(const GLshort *);
#define glDrawTexsvOES eagl_p_glDrawTexsvOES
static void (*eagl_p_glDrawTexxOES)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
#define glDrawTexxOES eagl_p_glDrawTexxOES
static void (*eagl_p_glDrawTexxvOES)(const GLfixed *);
#define glDrawTexxvOES eagl_p_glDrawTexxvOES
static void (*eagl_p_glEnable)(GLenum);
#define glEnable eagl_p_glEnable
static void (*eagl_p_glEnableClientState)(GLenum);
#define glEnableClientState eagl_p_glEnableClientState
static void (*eagl_p_glEnableVertexAttribArray)(GLuint);
#define glEnableVertexAttribArray eagl_p_glEnableVertexAttribArray
static void (*eagl_p_glEndQuery)(GLenum);
#define glEndQuery eagl_p_glEndQuery
static void (*eagl_p_glEndTransformFeedback)(void);
#define glEndTransformFeedback eagl_p_glEndTransformFeedback
static GLsync (*eagl_p_glFenceSync)(GLenum, GLbitfield);
#define glFenceSync eagl_p_glFenceSync
static void (*eagl_p_glFinish)(void);
#define glFinish eagl_p_glFinish
static void (*eagl_p_glFinishFenceAPPLE)(GLuint);
#define glFinishFenceAPPLE eagl_p_glFinishFenceAPPLE
static void (*eagl_p_glFlush)(void);
#define glFlush eagl_p_glFlush
static void (*eagl_p_glFlushMappedBufferRange)(GLenum, GLintptr, GLsizeiptr);
#define glFlushMappedBufferRange eagl_p_glFlushMappedBufferRange
static void (*eagl_p_glFogf)(GLenum, GLfloat);
#define glFogf eagl_p_glFogf
static void (*eagl_p_glFogfv)(GLenum, const GLfloat *);
#define glFogfv eagl_p_glFogfv
static void (*eagl_p_glFogx)(GLenum, GLfixed);
#define glFogx eagl_p_glFogx
static void (*eagl_p_glFogxv)(GLenum, const GLfixed *);
#define glFogxv eagl_p_glFogxv
static void (*eagl_p_glFramebufferRenderbuffer)(GLenum, GLenum, GLenum, GLuint);
#define glFramebufferRenderbuffer eagl_p_glFramebufferRenderbuffer
static void (*eagl_p_glFramebufferTexture2D)(GLenum, GLenum, GLenum, GLuint, GLint);
#define glFramebufferTexture2D eagl_p_glFramebufferTexture2D
static void (*eagl_p_glFramebufferTextureLayer)(GLenum, GLenum, GLuint, GLint, GLint);
#define glFramebufferTextureLayer eagl_p_glFramebufferTextureLayer
static void (*eagl_p_glFrontFace)(GLenum);
#define glFrontFace eagl_p_glFrontFace
static void (*eagl_p_glFrustumf)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
#define glFrustumf eagl_p_glFrustumf
static void (*eagl_p_glFrustumx)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
#define glFrustumx eagl_p_glFrustumx
static void (*eagl_p_glGenBuffers)(GLsizei, GLuint *);
#define glGenBuffers eagl_p_glGenBuffers
static void (*eagl_p_glGenFencesAPPLE)(GLsizei, GLuint *);
#define glGenFencesAPPLE eagl_p_glGenFencesAPPLE
static void (*eagl_p_glGenFramebuffers)(GLsizei, GLuint *);
#define glGenFramebuffers eagl_p_glGenFramebuffers
static void (*eagl_p_glGenProgramPipelinesEXT)(GLsizei, GLuint *);
#define glGenProgramPipelinesEXT eagl_p_glGenProgramPipelinesEXT
static void (*eagl_p_glGenQueries)(GLsizei, GLuint *);
#define glGenQueries eagl_p_glGenQueries
static void (*eagl_p_glGenRenderbuffers)(GLsizei, GLuint *);
#define glGenRenderbuffers eagl_p_glGenRenderbuffers
static void (*eagl_p_glGenSamplers)(GLsizei, GLuint *);
#define glGenSamplers eagl_p_glGenSamplers
static void (*eagl_p_glGenTextures)(GLsizei, GLuint *);
#define glGenTextures eagl_p_glGenTextures
static void (*eagl_p_glGenTransformFeedbacks)(GLsizei, GLuint *);
#define glGenTransformFeedbacks eagl_p_glGenTransformFeedbacks
static void (*eagl_p_glGenVertexArrays)(GLsizei, GLuint *);
#define glGenVertexArrays eagl_p_glGenVertexArrays
static void (*eagl_p_glGenerateMipmap)(GLenum);
#define glGenerateMipmap eagl_p_glGenerateMipmap
static void (*eagl_p_glGetActiveAttrib)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *);
#define glGetActiveAttrib eagl_p_glGetActiveAttrib
static void (*eagl_p_glGetActiveUniform)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *);
#define glGetActiveUniform eagl_p_glGetActiveUniform
static void (*eagl_p_glGetActiveUniformBlockName)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *);
#define glGetActiveUniformBlockName eagl_p_glGetActiveUniformBlockName
static void (*eagl_p_glGetActiveUniformBlockiv)(GLuint, GLuint, GLenum, GLint *);
#define glGetActiveUniformBlockiv eagl_p_glGetActiveUniformBlockiv
static void (*eagl_p_glGetActiveUniformsiv)(GLuint, GLsizei, const GLuint *, GLenum, GLint *);
#define glGetActiveUniformsiv eagl_p_glGetActiveUniformsiv
static void (*eagl_p_glGetAttachedShaders)(GLuint, GLsizei, GLsizei *, GLuint *);
#define glGetAttachedShaders eagl_p_glGetAttachedShaders
static GLint (*eagl_p_glGetAttribLocation)(GLuint, const GLchar *);
#define glGetAttribLocation eagl_p_glGetAttribLocation
static void (*eagl_p_glGetBooleanv)(GLenum, GLboolean *);
#define glGetBooleanv eagl_p_glGetBooleanv
static void (*eagl_p_glGetBufferParameteri64v)(GLenum, GLenum, GLint64 *);
#define glGetBufferParameteri64v eagl_p_glGetBufferParameteri64v
static void (*eagl_p_glGetBufferParameteriv)(GLenum, GLenum, GLint *);
#define glGetBufferParameteriv eagl_p_glGetBufferParameteriv
static void (*eagl_p_glGetBufferPointerv)(GLenum, GLenum, void **);
#define glGetBufferPointerv eagl_p_glGetBufferPointerv
static void (*eagl_p_glGetClipPlanef)(GLenum, GLfloat *);
#define glGetClipPlanef eagl_p_glGetClipPlanef
static void (*eagl_p_glGetClipPlanex)(GLenum, GLfixed *);
#define glGetClipPlanex eagl_p_glGetClipPlanex
static GLenum (*eagl_p_glGetError)(void);
#define glGetError eagl_p_glGetError
static void (*eagl_p_glGetFixedv)(GLenum, GLfixed *);
#define glGetFixedv eagl_p_glGetFixedv
static void (*eagl_p_glGetFloatv)(GLenum, GLfloat *);
#define glGetFloatv eagl_p_glGetFloatv
static GLint (*eagl_p_glGetFragDataLocation)(GLuint, const GLchar *);
#define glGetFragDataLocation eagl_p_glGetFragDataLocation
static void (*eagl_p_glGetFramebufferAttachmentParameteriv)(GLenum, GLenum, GLenum, GLint *);
#define glGetFramebufferAttachmentParameteriv eagl_p_glGetFramebufferAttachmentParameteriv
static void (*eagl_p_glGetInteger64i_v)(GLenum, GLuint, GLint64 *);
#define glGetInteger64i_v eagl_p_glGetInteger64i_v
static void (*eagl_p_glGetInteger64v)(GLenum, GLint64 *);
#define glGetInteger64v eagl_p_glGetInteger64v
static void (*eagl_p_glGetIntegeri_v)(GLenum, GLuint, GLint *);
#define glGetIntegeri_v eagl_p_glGetIntegeri_v
static void (*eagl_p_glGetIntegerv)(GLenum, GLint *);
#define glGetIntegerv eagl_p_glGetIntegerv
static void (*eagl_p_glGetInternalformativ)(GLenum, GLenum, GLenum, GLsizei, GLint *);
#define glGetInternalformativ eagl_p_glGetInternalformativ
static void (*eagl_p_glGetLightfv)(GLenum, GLenum, GLfloat *);
#define glGetLightfv eagl_p_glGetLightfv
static void (*eagl_p_glGetLightxv)(GLenum, GLenum, GLfixed *);
#define glGetLightxv eagl_p_glGetLightxv
static void (*eagl_p_glGetMaterialfv)(GLenum, GLenum, GLfloat *);
#define glGetMaterialfv eagl_p_glGetMaterialfv
static void (*eagl_p_glGetMaterialxv)(GLenum, GLenum, GLfixed *);
#define glGetMaterialxv eagl_p_glGetMaterialxv
static void (*eagl_p_glGetObjectLabelEXT)(GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
#define glGetObjectLabelEXT eagl_p_glGetObjectLabelEXT
static void (*eagl_p_glGetPointerv)(GLenum, void **);
#define glGetPointerv eagl_p_glGetPointerv
static void (*eagl_p_glGetProgramBinary)(GLuint, GLsizei, GLsizei *, GLenum *, void *);
#define glGetProgramBinary eagl_p_glGetProgramBinary
static void (*eagl_p_glGetProgramInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *);
#define glGetProgramInfoLog eagl_p_glGetProgramInfoLog
static void (*eagl_p_glGetProgramPipelineInfoLogEXT)(GLuint, GLsizei, GLsizei *, GLchar *);
#define glGetProgramPipelineInfoLogEXT eagl_p_glGetProgramPipelineInfoLogEXT
static void (*eagl_p_glGetProgramPipelineivEXT)(GLuint, GLenum, GLint *);
#define glGetProgramPipelineivEXT eagl_p_glGetProgramPipelineivEXT
static void (*eagl_p_glGetProgramiv)(GLuint, GLenum, GLint *);
#define glGetProgramiv eagl_p_glGetProgramiv
static void (*eagl_p_glGetQueryObjectivEXT)(GLuint, GLenum, GLint *);
#define glGetQueryObjectivEXT eagl_p_glGetQueryObjectivEXT
static void (*eagl_p_glGetQueryObjectuiv)(GLuint, GLenum, GLuint *);
#define glGetQueryObjectuiv eagl_p_glGetQueryObjectuiv
static void (*eagl_p_glGetQueryiv)(GLenum, GLenum, GLint *);
#define glGetQueryiv eagl_p_glGetQueryiv
static void (*eagl_p_glGetRenderbufferParameteriv)(GLenum, GLenum, GLint *);
#define glGetRenderbufferParameteriv eagl_p_glGetRenderbufferParameteriv
static void (*eagl_p_glGetSamplerParameterfv)(GLuint, GLenum, GLfloat *);
#define glGetSamplerParameterfv eagl_p_glGetSamplerParameterfv
static void (*eagl_p_glGetSamplerParameteriv)(GLuint, GLenum, GLint *);
#define glGetSamplerParameteriv eagl_p_glGetSamplerParameteriv
static void (*eagl_p_glGetShaderInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *);
#define glGetShaderInfoLog eagl_p_glGetShaderInfoLog
static void (*eagl_p_glGetShaderPrecisionFormat)(GLenum, GLenum, GLint *, GLint *);
#define glGetShaderPrecisionFormat eagl_p_glGetShaderPrecisionFormat
static void (*eagl_p_glGetShaderSource)(GLuint, GLsizei, GLsizei *, GLchar *);
#define glGetShaderSource eagl_p_glGetShaderSource
static void (*eagl_p_glGetShaderiv)(GLuint, GLenum, GLint *);
#define glGetShaderiv eagl_p_glGetShaderiv
static const GLubyte * (*eagl_p_glGetString)(GLenum);
#define glGetString eagl_p_glGetString
static const GLubyte * (*eagl_p_glGetStringi)(GLenum, GLuint);
#define glGetStringi eagl_p_glGetStringi
static void (*eagl_p_glGetSynciv)(GLsync, GLenum, GLsizei, GLsizei *, GLint *);
#define glGetSynciv eagl_p_glGetSynciv
static void (*eagl_p_glGetTexEnvfv)(GLenum, GLenum, GLfloat *);
#define glGetTexEnvfv eagl_p_glGetTexEnvfv
static void (*eagl_p_glGetTexEnviv)(GLenum, GLenum, GLint *);
#define glGetTexEnviv eagl_p_glGetTexEnviv
static void (*eagl_p_glGetTexEnvxv)(GLenum, GLenum, GLfixed *);
#define glGetTexEnvxv eagl_p_glGetTexEnvxv
static void (*eagl_p_glGetTexImage)(GLenum, GLint, GLenum, GLenum, void *);
#define glGetTexImage eagl_p_glGetTexImage
static void (*eagl_p_glGetTexLevelParameterfv)(GLenum, GLint, GLenum, GLfloat *);
#define glGetTexLevelParameterfv eagl_p_glGetTexLevelParameterfv
static void (*eagl_p_glGetTexLevelParameteriv)(GLenum, GLint, GLenum, GLint *);
#define glGetTexLevelParameteriv eagl_p_glGetTexLevelParameteriv
static void (*eagl_p_glGetTexParameterfv)(GLenum, GLenum, GLfloat *);
#define glGetTexParameterfv eagl_p_glGetTexParameterfv
static void (*eagl_p_glGetTexParameteriv)(GLenum, GLenum, GLint *);
#define glGetTexParameteriv eagl_p_glGetTexParameteriv
static void (*eagl_p_glGetTexParameterxv)(GLenum, GLenum, GLfixed *);
#define glGetTexParameterxv eagl_p_glGetTexParameterxv
static void (*eagl_p_glGetTransformFeedbackVarying)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *);
#define glGetTransformFeedbackVarying eagl_p_glGetTransformFeedbackVarying
static GLuint (*eagl_p_glGetUniformBlockIndex)(GLuint, const GLchar *);
#define glGetUniformBlockIndex eagl_p_glGetUniformBlockIndex
static void (*eagl_p_glGetUniformIndices)(GLuint, GLsizei, const GLchar *const*, GLuint *);
#define glGetUniformIndices eagl_p_glGetUniformIndices
static GLint (*eagl_p_glGetUniformLocation)(GLuint, const GLchar *);
#define glGetUniformLocation eagl_p_glGetUniformLocation
static void (*eagl_p_glGetUniformfv)(GLuint, GLint, GLfloat *);
#define glGetUniformfv eagl_p_glGetUniformfv
static void (*eagl_p_glGetUniformiv)(GLuint, GLint, GLint *);
#define glGetUniformiv eagl_p_glGetUniformiv
static void (*eagl_p_glGetUniformuiv)(GLuint, GLint, GLuint *);
#define glGetUniformuiv eagl_p_glGetUniformuiv
static void (*eagl_p_glGetVertexAttribIiv)(GLuint, GLenum, GLint *);
#define glGetVertexAttribIiv eagl_p_glGetVertexAttribIiv
static void (*eagl_p_glGetVertexAttribIuiv)(GLuint, GLenum, GLuint *);
#define glGetVertexAttribIuiv eagl_p_glGetVertexAttribIuiv
static void (*eagl_p_glGetVertexAttribPointerv)(GLuint, GLenum, void **);
#define glGetVertexAttribPointerv eagl_p_glGetVertexAttribPointerv
static void (*eagl_p_glGetVertexAttribfv)(GLuint, GLenum, GLfloat *);
#define glGetVertexAttribfv eagl_p_glGetVertexAttribfv
static void (*eagl_p_glGetVertexAttribiv)(GLuint, GLenum, GLint *);
#define glGetVertexAttribiv eagl_p_glGetVertexAttribiv
static void (*eagl_p_glHint)(GLenum, GLenum);
#define glHint eagl_p_glHint
static void (*eagl_p_glInvalidateSubFramebuffer)(GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei);
#define glInvalidateSubFramebuffer eagl_p_glInvalidateSubFramebuffer
static GLboolean (*eagl_p_glIsBuffer)(GLuint);
#define glIsBuffer eagl_p_glIsBuffer
static GLboolean (*eagl_p_glIsEnabled)(GLenum);
#define glIsEnabled eagl_p_glIsEnabled
static GLboolean (*eagl_p_glIsFenceAPPLE)(GLuint);
#define glIsFenceAPPLE eagl_p_glIsFenceAPPLE
static GLboolean (*eagl_p_glIsFramebuffer)(GLuint);
#define glIsFramebuffer eagl_p_glIsFramebuffer
static GLboolean (*eagl_p_glIsProgram)(GLuint);
#define glIsProgram eagl_p_glIsProgram
static GLboolean (*eagl_p_glIsProgramPipelineEXT)(GLuint);
#define glIsProgramPipelineEXT eagl_p_glIsProgramPipelineEXT
static GLboolean (*eagl_p_glIsQuery)(GLuint);
#define glIsQuery eagl_p_glIsQuery
static GLboolean (*eagl_p_glIsRenderbuffer)(GLuint);
#define glIsRenderbuffer eagl_p_glIsRenderbuffer
static GLboolean (*eagl_p_glIsSampler)(GLuint);
#define glIsSampler eagl_p_glIsSampler
static GLboolean (*eagl_p_glIsShader)(GLuint);
#define glIsShader eagl_p_glIsShader
static GLboolean (*eagl_p_glIsSync)(GLsync);
#define glIsSync eagl_p_glIsSync
static GLboolean (*eagl_p_glIsTexture)(GLuint);
#define glIsTexture eagl_p_glIsTexture
static GLboolean (*eagl_p_glIsTransformFeedback)(GLuint);
#define glIsTransformFeedback eagl_p_glIsTransformFeedback
static GLboolean (*eagl_p_glIsVertexArray)(GLuint);
#define glIsVertexArray eagl_p_glIsVertexArray
static void (*eagl_p_glLabelObjectEXT)(GLenum, GLuint, GLsizei, const GLchar *);
#define glLabelObjectEXT eagl_p_glLabelObjectEXT
static void (*eagl_p_glLightModelf)(GLenum, GLfloat);
#define glLightModelf eagl_p_glLightModelf
static void (*eagl_p_glLightModelfv)(GLenum, const GLfloat *);
#define glLightModelfv eagl_p_glLightModelfv
static void (*eagl_p_glLightModelx)(GLenum, GLfixed);
#define glLightModelx eagl_p_glLightModelx
static void (*eagl_p_glLightModelxv)(GLenum, const GLfixed *);
#define glLightModelxv eagl_p_glLightModelxv
static void (*eagl_p_glLightf)(GLenum, GLenum, GLfloat);
#define glLightf eagl_p_glLightf
static void (*eagl_p_glLightfv)(GLenum, GLenum, const GLfloat *);
#define glLightfv eagl_p_glLightfv
static void (*eagl_p_glLightx)(GLenum, GLenum, GLfixed);
#define glLightx eagl_p_glLightx
static void (*eagl_p_glLightxv)(GLenum, GLenum, const GLfixed *);
#define glLightxv eagl_p_glLightxv
static void (*eagl_p_glLineWidth)(GLfloat);
#define glLineWidth eagl_p_glLineWidth
static void (*eagl_p_glLineWidthx)(GLfixed);
#define glLineWidthx eagl_p_glLineWidthx
static void (*eagl_p_glLinkProgram)(GLuint);
#define glLinkProgram eagl_p_glLinkProgram
static void (*eagl_p_glLoadIdentity)(void);
#define glLoadIdentity eagl_p_glLoadIdentity
static void (*eagl_p_glLoadMatrixf)(const GLfloat *);
#define glLoadMatrixf eagl_p_glLoadMatrixf
static void (*eagl_p_glLoadMatrixx)(const GLfixed *);
#define glLoadMatrixx eagl_p_glLoadMatrixx
static void (*eagl_p_glLoadPaletteFromModelViewMatrixOES)(void);
#define glLoadPaletteFromModelViewMatrixOES eagl_p_glLoadPaletteFromModelViewMatrixOES
static void (*eagl_p_glLogicOp)(GLenum);
#define glLogicOp eagl_p_glLogicOp
static void * (*eagl_p_glMapBufferOES)(GLenum, GLenum);
#define glMapBufferOES eagl_p_glMapBufferOES
static void * (*eagl_p_glMapBufferRange)(GLenum, GLintptr, GLsizeiptr, GLbitfield);
#define glMapBufferRange eagl_p_glMapBufferRange
static void (*eagl_p_glMaterialf)(GLenum, GLenum, GLfloat);
#define glMaterialf eagl_p_glMaterialf
static void (*eagl_p_glMaterialfv)(GLenum, GLenum, const GLfloat *);
#define glMaterialfv eagl_p_glMaterialfv
static void (*eagl_p_glMaterialx)(GLenum, GLenum, GLfixed);
#define glMaterialx eagl_p_glMaterialx
static void (*eagl_p_glMaterialxv)(GLenum, GLenum, const GLfixed *);
#define glMaterialxv eagl_p_glMaterialxv
static void (*eagl_p_glMatrixIndexPointerOES)(GLint, GLenum, GLsizei, const void *);
#define glMatrixIndexPointerOES eagl_p_glMatrixIndexPointerOES
static void (*eagl_p_glMatrixMode)(GLenum);
#define glMatrixMode eagl_p_glMatrixMode
static void (*eagl_p_glMultMatrixf)(const GLfloat *);
#define glMultMatrixf eagl_p_glMultMatrixf
static void (*eagl_p_glMultMatrixx)(const GLfixed *);
#define glMultMatrixx eagl_p_glMultMatrixx
static void (*eagl_p_glMultiTexCoord4f)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
#define glMultiTexCoord4f eagl_p_glMultiTexCoord4f
static void (*eagl_p_glMultiTexCoord4x)(GLenum, GLfixed, GLfixed, GLfixed, GLfixed);
#define glMultiTexCoord4x eagl_p_glMultiTexCoord4x
static void (*eagl_p_glNormal3f)(GLfloat, GLfloat, GLfloat);
#define glNormal3f eagl_p_glNormal3f
static void (*eagl_p_glNormal3x)(GLfixed, GLfixed, GLfixed);
#define glNormal3x eagl_p_glNormal3x
static void (*eagl_p_glNormalPointer)(GLenum, GLsizei, const void *);
#define glNormalPointer eagl_p_glNormalPointer
static void (*eagl_p_glOrthof)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
#define glOrthof eagl_p_glOrthof
static void (*eagl_p_glOrthox)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
#define glOrthox eagl_p_glOrthox
static void (*eagl_p_glPauseTransformFeedback)(void);
#define glPauseTransformFeedback eagl_p_glPauseTransformFeedback
static void (*eagl_p_glPixelStorei)(GLenum, GLint);
#define glPixelStorei eagl_p_glPixelStorei
static void (*eagl_p_glPointParameterf)(GLenum, GLfloat);
#define glPointParameterf eagl_p_glPointParameterf
static void (*eagl_p_glPointParameterfv)(GLenum, const GLfloat *);
#define glPointParameterfv eagl_p_glPointParameterfv
static void (*eagl_p_glPointParameterx)(GLenum, GLfixed);
#define glPointParameterx eagl_p_glPointParameterx
static void (*eagl_p_glPointParameterxv)(GLenum, const GLfixed *);
#define glPointParameterxv eagl_p_glPointParameterxv
static void (*eagl_p_glPointSize)(GLfloat);
#define glPointSize eagl_p_glPointSize
static void (*eagl_p_glPointSizePointerOES)(GLenum, GLsizei, const void *);
#define glPointSizePointerOES eagl_p_glPointSizePointerOES
static void (*eagl_p_glPointSizex)(GLfixed);
#define glPointSizex eagl_p_glPointSizex
static void (*eagl_p_glPolygonOffset)(GLfloat, GLfloat);
#define glPolygonOffset eagl_p_glPolygonOffset
static void (*eagl_p_glPolygonOffsetx)(GLfixed, GLfixed);
#define glPolygonOffsetx eagl_p_glPolygonOffsetx
static void (*eagl_p_glPopMatrix)(void);
#define glPopMatrix eagl_p_glPopMatrix
static void (*eagl_p_glProgramBinary)(GLuint, GLenum, const void *, GLsizei);
#define glProgramBinary eagl_p_glProgramBinary
static void (*eagl_p_glProgramParameteri)(GLuint, GLenum, GLint);
#define glProgramParameteri eagl_p_glProgramParameteri
static void (*eagl_p_glProgramUniform1fEXT)(GLuint, GLint, GLfloat);
#define glProgramUniform1fEXT eagl_p_glProgramUniform1fEXT
static void (*eagl_p_glProgramUniform1fvEXT)(GLuint, GLint, GLsizei, const GLfloat *);
#define glProgramUniform1fvEXT eagl_p_glProgramUniform1fvEXT
static void (*eagl_p_glProgramUniform1iEXT)(GLuint, GLint, GLint);
#define glProgramUniform1iEXT eagl_p_glProgramUniform1iEXT
static void (*eagl_p_glProgramUniform1ivEXT)(GLuint, GLint, GLsizei, const GLint *);
#define glProgramUniform1ivEXT eagl_p_glProgramUniform1ivEXT
static void (*eagl_p_glProgramUniform1uiEXT)(GLuint, GLint, GLuint);
#define glProgramUniform1uiEXT eagl_p_glProgramUniform1uiEXT
static void (*eagl_p_glProgramUniform1uivEXT)(GLuint, GLint, GLsizei, const GLuint *);
#define glProgramUniform1uivEXT eagl_p_glProgramUniform1uivEXT
static void (*eagl_p_glProgramUniform2fEXT)(GLuint, GLint, GLfloat, GLfloat);
#define glProgramUniform2fEXT eagl_p_glProgramUniform2fEXT
static void (*eagl_p_glProgramUniform2fvEXT)(GLuint, GLint, GLsizei, const GLfloat *);
#define glProgramUniform2fvEXT eagl_p_glProgramUniform2fvEXT
static void (*eagl_p_glProgramUniform2iEXT)(GLuint, GLint, GLint, GLint);
#define glProgramUniform2iEXT eagl_p_glProgramUniform2iEXT
static void (*eagl_p_glProgramUniform2ivEXT)(GLuint, GLint, GLsizei, const GLint *);
#define glProgramUniform2ivEXT eagl_p_glProgramUniform2ivEXT
static void (*eagl_p_glProgramUniform2uiEXT)(GLuint, GLint, GLuint, GLuint);
#define glProgramUniform2uiEXT eagl_p_glProgramUniform2uiEXT
static void (*eagl_p_glProgramUniform2uivEXT)(GLuint, GLint, GLsizei, const GLuint *);
#define glProgramUniform2uivEXT eagl_p_glProgramUniform2uivEXT
static void (*eagl_p_glProgramUniform3fEXT)(GLuint, GLint, GLfloat, GLfloat, GLfloat);
#define glProgramUniform3fEXT eagl_p_glProgramUniform3fEXT
static void (*eagl_p_glProgramUniform3fvEXT)(GLuint, GLint, GLsizei, const GLfloat *);
#define glProgramUniform3fvEXT eagl_p_glProgramUniform3fvEXT
static void (*eagl_p_glProgramUniform3iEXT)(GLuint, GLint, GLint, GLint, GLint);
#define glProgramUniform3iEXT eagl_p_glProgramUniform3iEXT
static void (*eagl_p_glProgramUniform3ivEXT)(GLuint, GLint, GLsizei, const GLint *);
#define glProgramUniform3ivEXT eagl_p_glProgramUniform3ivEXT
static void (*eagl_p_glProgramUniform3uiEXT)(GLuint, GLint, GLuint, GLuint, GLuint);
#define glProgramUniform3uiEXT eagl_p_glProgramUniform3uiEXT
static void (*eagl_p_glProgramUniform3uivEXT)(GLuint, GLint, GLsizei, const GLuint *);
#define glProgramUniform3uivEXT eagl_p_glProgramUniform3uivEXT
static void (*eagl_p_glProgramUniform4fEXT)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat);
#define glProgramUniform4fEXT eagl_p_glProgramUniform4fEXT
static void (*eagl_p_glProgramUniform4fvEXT)(GLuint, GLint, GLsizei, const GLfloat *);
#define glProgramUniform4fvEXT eagl_p_glProgramUniform4fvEXT
static void (*eagl_p_glProgramUniform4iEXT)(GLuint, GLint, GLint, GLint, GLint, GLint);
#define glProgramUniform4iEXT eagl_p_glProgramUniform4iEXT
static void (*eagl_p_glProgramUniform4ivEXT)(GLuint, GLint, GLsizei, const GLint *);
#define glProgramUniform4ivEXT eagl_p_glProgramUniform4ivEXT
static void (*eagl_p_glProgramUniform4uiEXT)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint);
#define glProgramUniform4uiEXT eagl_p_glProgramUniform4uiEXT
static void (*eagl_p_glProgramUniform4uivEXT)(GLuint, GLint, GLsizei, const GLuint *);
#define glProgramUniform4uivEXT eagl_p_glProgramUniform4uivEXT
static void (*eagl_p_glProgramUniformMatrix2fvEXT)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix2fvEXT eagl_p_glProgramUniformMatrix2fvEXT
static void (*eagl_p_glProgramUniformMatrix2x3fvEXT)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix2x3fvEXT eagl_p_glProgramUniformMatrix2x3fvEXT
static void (*eagl_p_glProgramUniformMatrix2x4fvEXT)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix2x4fvEXT eagl_p_glProgramUniformMatrix2x4fvEXT
static void (*eagl_p_glProgramUniformMatrix3fvEXT)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix3fvEXT eagl_p_glProgramUniformMatrix3fvEXT
static void (*eagl_p_glProgramUniformMatrix3x2fvEXT)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix3x2fvEXT eagl_p_glProgramUniformMatrix3x2fvEXT
static void (*eagl_p_glProgramUniformMatrix3x4fvEXT)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix3x4fvEXT eagl_p_glProgramUniformMatrix3x4fvEXT
static void (*eagl_p_glProgramUniformMatrix4fvEXT)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix4fvEXT eagl_p_glProgramUniformMatrix4fvEXT
static void (*eagl_p_glProgramUniformMatrix4x2fvEXT)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix4x2fvEXT eagl_p_glProgramUniformMatrix4x2fvEXT
static void (*eagl_p_glProgramUniformMatrix4x3fvEXT)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix4x3fvEXT eagl_p_glProgramUniformMatrix4x3fvEXT
static void (*eagl_p_glPushMatrix)(void);
#define glPushMatrix eagl_p_glPushMatrix
static void (*eagl_p_glReadBuffer)(GLenum);
#define glReadBuffer eagl_p_glReadBuffer
static void (*eagl_p_glReadPixels)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *);
#define glReadPixels eagl_p_glReadPixels
static void (*eagl_p_glReleaseShaderCompiler)(void);
#define glReleaseShaderCompiler eagl_p_glReleaseShaderCompiler
static void (*eagl_p_glRenderbufferStorage)(GLenum, GLenum, GLsizei, GLsizei);
#define glRenderbufferStorage eagl_p_glRenderbufferStorage
static void (*eagl_p_glRenderbufferStorageMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
#define glRenderbufferStorageMultisample eagl_p_glRenderbufferStorageMultisample
static void (*eagl_p_glResolveMultisampleFramebufferAPPLE)(void);
#define glResolveMultisampleFramebufferAPPLE eagl_p_glResolveMultisampleFramebufferAPPLE
static void (*eagl_p_glResumeTransformFeedback)(void);
#define glResumeTransformFeedback eagl_p_glResumeTransformFeedback
static void (*eagl_p_glRotatef)(GLfloat, GLfloat, GLfloat, GLfloat);
#define glRotatef eagl_p_glRotatef
static void (*eagl_p_glRotatex)(GLfixed, GLfixed, GLfixed, GLfixed);
#define glRotatex eagl_p_glRotatex
static void (*eagl_p_glSampleCoverage)(GLfloat, GLboolean);
#define glSampleCoverage eagl_p_glSampleCoverage
static void (*eagl_p_glSampleCoveragex)(GLclampx, GLboolean);
#define glSampleCoveragex eagl_p_glSampleCoveragex
static void (*eagl_p_glSamplerParameterf)(GLuint, GLenum, GLfloat);
#define glSamplerParameterf eagl_p_glSamplerParameterf
static void (*eagl_p_glSamplerParameterfv)(GLuint, GLenum, const GLfloat *);
#define glSamplerParameterfv eagl_p_glSamplerParameterfv
static void (*eagl_p_glSamplerParameteri)(GLuint, GLenum, GLint);
#define glSamplerParameteri eagl_p_glSamplerParameteri
static void (*eagl_p_glSamplerParameteriv)(GLuint, GLenum, const GLint *);
#define glSamplerParameteriv eagl_p_glSamplerParameteriv
static void (*eagl_p_glScalef)(GLfloat, GLfloat, GLfloat);
#define glScalef eagl_p_glScalef
static void (*eagl_p_glScalex)(GLfixed, GLfixed, GLfixed);
#define glScalex eagl_p_glScalex
static void (*eagl_p_glScissor)(GLint, GLint, GLsizei, GLsizei);
#define glScissor eagl_p_glScissor
static void (*eagl_p_glSetFenceAPPLE)(GLuint);
#define glSetFenceAPPLE eagl_p_glSetFenceAPPLE
static void (*eagl_p_glShadeModel)(GLenum);
#define glShadeModel eagl_p_glShadeModel
static void (*eagl_p_glShaderBinary)(GLsizei, const GLuint *, GLenum, const void *, GLsizei);
#define glShaderBinary eagl_p_glShaderBinary
static void (*eagl_p_glShaderSource)(GLuint, GLsizei, const GLchar *const*, const GLint *);
#define glShaderSource eagl_p_glShaderSource
static void (*eagl_p_glStencilFunc)(GLenum, GLint, GLuint);
#define glStencilFunc eagl_p_glStencilFunc
static void (*eagl_p_glStencilFuncSeparate)(GLenum, GLenum, GLint, GLuint);
#define glStencilFuncSeparate eagl_p_glStencilFuncSeparate
static void (*eagl_p_glStencilMask)(GLuint);
#define glStencilMask eagl_p_glStencilMask
static void (*eagl_p_glStencilMaskSeparate)(GLenum, GLuint);
#define glStencilMaskSeparate eagl_p_glStencilMaskSeparate
static void (*eagl_p_glStencilOp)(GLenum, GLenum, GLenum);
#define glStencilOp eagl_p_glStencilOp
static void (*eagl_p_glStencilOpSeparate)(GLenum, GLenum, GLenum, GLenum);
#define glStencilOpSeparate eagl_p_glStencilOpSeparate
static GLboolean (*eagl_p_glTestFenceAPPLE)(GLuint);
#define glTestFenceAPPLE eagl_p_glTestFenceAPPLE
static GLboolean (*eagl_p_glTestObjectAPPLE)(GLenum, GLuint);
#define glTestObjectAPPLE eagl_p_glTestObjectAPPLE
static void (*eagl_p_glTexCoordPointer)(GLint, GLenum, GLsizei, const void *);
#define glTexCoordPointer eagl_p_glTexCoordPointer
static void (*eagl_p_glTexEnvf)(GLenum, GLenum, GLfloat);
#define glTexEnvf eagl_p_glTexEnvf
static void (*eagl_p_glTexEnvfv)(GLenum, GLenum, const GLfloat *);
#define glTexEnvfv eagl_p_glTexEnvfv
static void (*eagl_p_glTexEnvi)(GLenum, GLenum, GLint);
#define glTexEnvi eagl_p_glTexEnvi
static void (*eagl_p_glTexEnviv)(GLenum, GLenum, const GLint *);
#define glTexEnviv eagl_p_glTexEnviv
static void (*eagl_p_glTexEnvx)(GLenum, GLenum, GLfixed);
#define glTexEnvx eagl_p_glTexEnvx
static void (*eagl_p_glTexEnvxv)(GLenum, GLenum, const GLfixed *);
#define glTexEnvxv eagl_p_glTexEnvxv
static void (*eagl_p_glTexImage2D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *);
#define glTexImage2D eagl_p_glTexImage2D
static void (*eagl_p_glTexImage3D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *);
#define glTexImage3D eagl_p_glTexImage3D
static void (*eagl_p_glTexParameterf)(GLenum, GLenum, GLfloat);
#define glTexParameterf eagl_p_glTexParameterf
static void (*eagl_p_glTexParameterfv)(GLenum, GLenum, const GLfloat *);
#define glTexParameterfv eagl_p_glTexParameterfv
static void (*eagl_p_glTexParameteri)(GLenum, GLenum, GLint);
#define glTexParameteri eagl_p_glTexParameteri
static void (*eagl_p_glTexParameteriv)(GLenum, GLenum, const GLint *);
#define glTexParameteriv eagl_p_glTexParameteriv
static void (*eagl_p_glTexParameterx)(GLenum, GLenum, GLfixed);
#define glTexParameterx eagl_p_glTexParameterx
static void (*eagl_p_glTexParameterxv)(GLenum, GLenum, const GLfixed *);
#define glTexParameterxv eagl_p_glTexParameterxv
static void (*eagl_p_glTexStorage2D)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
#define glTexStorage2D eagl_p_glTexStorage2D
static void (*eagl_p_glTexStorage3D)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei);
#define glTexStorage3D eagl_p_glTexStorage3D
static void (*eagl_p_glTexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *);
#define glTexSubImage2D eagl_p_glTexSubImage2D
static void (*eagl_p_glTexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *);
#define glTexSubImage3D eagl_p_glTexSubImage3D
static void (*eagl_p_glTransformFeedbackVaryings)(GLuint, GLsizei, const GLchar *const*, GLenum);
#define glTransformFeedbackVaryings eagl_p_glTransformFeedbackVaryings
static void (*eagl_p_glTranslatef)(GLfloat, GLfloat, GLfloat);
#define glTranslatef eagl_p_glTranslatef
static void (*eagl_p_glTranslatex)(GLfixed, GLfixed, GLfixed);
#define glTranslatex eagl_p_glTranslatex
static void (*eagl_p_glUniform1f)(GLint, GLfloat);
#define glUniform1f eagl_p_glUniform1f
static void (*eagl_p_glUniform1fv)(GLint, GLsizei, const GLfloat *);
#define glUniform1fv eagl_p_glUniform1fv
static void (*eagl_p_glUniform1i)(GLint, GLint);
#define glUniform1i eagl_p_glUniform1i
static void (*eagl_p_glUniform1iv)(GLint, GLsizei, const GLint *);
#define glUniform1iv eagl_p_glUniform1iv
static void (*eagl_p_glUniform1ui)(GLint, GLuint);
#define glUniform1ui eagl_p_glUniform1ui
static void (*eagl_p_glUniform1uiv)(GLint, GLsizei, const GLuint *);
#define glUniform1uiv eagl_p_glUniform1uiv
static void (*eagl_p_glUniform2f)(GLint, GLfloat, GLfloat);
#define glUniform2f eagl_p_glUniform2f
static void (*eagl_p_glUniform2fv)(GLint, GLsizei, const GLfloat *);
#define glUniform2fv eagl_p_glUniform2fv
static void (*eagl_p_glUniform2i)(GLint, GLint, GLint);
#define glUniform2i eagl_p_glUniform2i
static void (*eagl_p_glUniform2iv)(GLint, GLsizei, const GLint *);
#define glUniform2iv eagl_p_glUniform2iv
static void (*eagl_p_glUniform2ui)(GLint, GLuint, GLuint);
#define glUniform2ui eagl_p_glUniform2ui
static void (*eagl_p_glUniform2uiv)(GLint, GLsizei, const GLuint *);
#define glUniform2uiv eagl_p_glUniform2uiv
static void (*eagl_p_glUniform3f)(GLint, GLfloat, GLfloat, GLfloat);
#define glUniform3f eagl_p_glUniform3f
static void (*eagl_p_glUniform3fv)(GLint, GLsizei, const GLfloat *);
#define glUniform3fv eagl_p_glUniform3fv
static void (*eagl_p_glUniform3i)(GLint, GLint, GLint, GLint);
#define glUniform3i eagl_p_glUniform3i
static void (*eagl_p_glUniform3iv)(GLint, GLsizei, const GLint *);
#define glUniform3iv eagl_p_glUniform3iv
static void (*eagl_p_glUniform3ui)(GLint, GLuint, GLuint, GLuint);
#define glUniform3ui eagl_p_glUniform3ui
static void (*eagl_p_glUniform3uiv)(GLint, GLsizei, const GLuint *);
#define glUniform3uiv eagl_p_glUniform3uiv
static void (*eagl_p_glUniform4f)(GLint, GLfloat, GLfloat, GLfloat, GLfloat);
#define glUniform4f eagl_p_glUniform4f
static void (*eagl_p_glUniform4fv)(GLint, GLsizei, const GLfloat *);
#define glUniform4fv eagl_p_glUniform4fv
static void (*eagl_p_glUniform4i)(GLint, GLint, GLint, GLint, GLint);
#define glUniform4i eagl_p_glUniform4i
static void (*eagl_p_glUniform4iv)(GLint, GLsizei, const GLint *);
#define glUniform4iv eagl_p_glUniform4iv
static void (*eagl_p_glUniform4ui)(GLint, GLuint, GLuint, GLuint, GLuint);
#define glUniform4ui eagl_p_glUniform4ui
static void (*eagl_p_glUniform4uiv)(GLint, GLsizei, const GLuint *);
#define glUniform4uiv eagl_p_glUniform4uiv
static void (*eagl_p_glUniformBlockBinding)(GLuint, GLuint, GLuint);
#define glUniformBlockBinding eagl_p_glUniformBlockBinding
static void (*eagl_p_glUniformMatrix2fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define glUniformMatrix2fv eagl_p_glUniformMatrix2fv
static void (*eagl_p_glUniformMatrix2x3fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define glUniformMatrix2x3fv eagl_p_glUniformMatrix2x3fv
static void (*eagl_p_glUniformMatrix2x4fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define glUniformMatrix2x4fv eagl_p_glUniformMatrix2x4fv
static void (*eagl_p_glUniformMatrix3fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define glUniformMatrix3fv eagl_p_glUniformMatrix3fv
static void (*eagl_p_glUniformMatrix3x2fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define glUniformMatrix3x2fv eagl_p_glUniformMatrix3x2fv
static void (*eagl_p_glUniformMatrix3x4fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define glUniformMatrix3x4fv eagl_p_glUniformMatrix3x4fv
static void (*eagl_p_glUniformMatrix4fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define glUniformMatrix4fv eagl_p_glUniformMatrix4fv
static void (*eagl_p_glUniformMatrix4x2fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define glUniformMatrix4x2fv eagl_p_glUniformMatrix4x2fv
static void (*eagl_p_glUniformMatrix4x3fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define glUniformMatrix4x3fv eagl_p_glUniformMatrix4x3fv
static GLboolean (*eagl_p_glUnmapBuffer)(GLenum);
#define glUnmapBuffer eagl_p_glUnmapBuffer
static void (*eagl_p_glUseProgram)(GLuint);
#define glUseProgram eagl_p_glUseProgram
static void (*eagl_p_glUseProgramStagesEXT)(GLuint, GLbitfield, GLuint);
#define glUseProgramStagesEXT eagl_p_glUseProgramStagesEXT
static void (*eagl_p_glValidateProgram)(GLuint);
#define glValidateProgram eagl_p_glValidateProgram
static void (*eagl_p_glValidateProgramPipelineEXT)(GLuint);
#define glValidateProgramPipelineEXT eagl_p_glValidateProgramPipelineEXT
static void (*eagl_p_glVertexAttrib1f)(GLuint, GLfloat);
#define glVertexAttrib1f eagl_p_glVertexAttrib1f
static void (*eagl_p_glVertexAttrib1fv)(GLuint, const GLfloat *);
#define glVertexAttrib1fv eagl_p_glVertexAttrib1fv
static void (*eagl_p_glVertexAttrib2f)(GLuint, GLfloat, GLfloat);
#define glVertexAttrib2f eagl_p_glVertexAttrib2f
static void (*eagl_p_glVertexAttrib2fv)(GLuint, const GLfloat *);
#define glVertexAttrib2fv eagl_p_glVertexAttrib2fv
static void (*eagl_p_glVertexAttrib3f)(GLuint, GLfloat, GLfloat, GLfloat);
#define glVertexAttrib3f eagl_p_glVertexAttrib3f
static void (*eagl_p_glVertexAttrib3fv)(GLuint, const GLfloat *);
#define glVertexAttrib3fv eagl_p_glVertexAttrib3fv
static void (*eagl_p_glVertexAttrib4f)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
#define glVertexAttrib4f eagl_p_glVertexAttrib4f
static void (*eagl_p_glVertexAttrib4fv)(GLuint, const GLfloat *);
#define glVertexAttrib4fv eagl_p_glVertexAttrib4fv
static void (*eagl_p_glVertexAttribDivisor)(GLuint, GLuint);
#define glVertexAttribDivisor eagl_p_glVertexAttribDivisor
static void (*eagl_p_glVertexAttribI4i)(GLuint, GLint, GLint, GLint, GLint);
#define glVertexAttribI4i eagl_p_glVertexAttribI4i
static void (*eagl_p_glVertexAttribI4iv)(GLuint, const GLint *);
#define glVertexAttribI4iv eagl_p_glVertexAttribI4iv
static void (*eagl_p_glVertexAttribI4ui)(GLuint, GLuint, GLuint, GLuint, GLuint);
#define glVertexAttribI4ui eagl_p_glVertexAttribI4ui
static void (*eagl_p_glVertexAttribI4uiv)(GLuint, const GLuint *);
#define glVertexAttribI4uiv eagl_p_glVertexAttribI4uiv
static void (*eagl_p_glVertexAttribIPointer)(GLuint, GLint, GLenum, GLsizei, const void *);
#define glVertexAttribIPointer eagl_p_glVertexAttribIPointer
static void (*eagl_p_glVertexAttribPointer)(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *);
#define glVertexAttribPointer eagl_p_glVertexAttribPointer
static void (*eagl_p_glVertexPointer)(GLint, GLenum, GLsizei, const void *);
#define glVertexPointer eagl_p_glVertexPointer
static void (*eagl_p_glViewport)(GLint, GLint, GLsizei, GLsizei);
#define glViewport eagl_p_glViewport
static void (*eagl_p_glWaitSync)(GLsync, GLbitfield, GLuint64);
#define glWaitSync eagl_p_glWaitSync
static void (*eagl_p_glWeightPointerOES)(GLint, GLenum, GLsizei, const void *);
#define glWeightPointerOES eagl_p_glWeightPointerOES

static void
eagl_load_functions(void)
{
	eagl_p_glActiveShaderProgramEXT = (void (*)(GLuint, GLuint))redwood_gl_proc("glActiveShaderProgramEXT");
	eagl_p_glActiveTexture = (void (*)(GLenum))redwood_gl_proc("glActiveTexture");
	eagl_p_glAlphaFunc = (void (*)(GLenum, GLfloat))redwood_gl_proc("glAlphaFunc");
	eagl_p_glAlphaFuncx = (void (*)(GLenum, GLfixed))redwood_gl_proc("glAlphaFuncx");
	eagl_p_glAttachShader = (void (*)(GLuint, GLuint))redwood_gl_proc("glAttachShader");
	eagl_p_glBeginQuery = (void (*)(GLenum, GLuint))redwood_gl_proc("glBeginQuery");
	eagl_p_glBeginTransformFeedback = (void (*)(GLenum))redwood_gl_proc("glBeginTransformFeedback");
	eagl_p_glBindAttribLocation = (void (*)(GLuint, GLuint, const GLchar *))redwood_gl_proc("glBindAttribLocation");
	eagl_p_glBindBuffer = (void (*)(GLenum, GLuint))redwood_gl_proc("glBindBuffer");
	eagl_p_glBindBufferBase = (void (*)(GLenum, GLuint, GLuint))redwood_gl_proc("glBindBufferBase");
	eagl_p_glBindBufferRange = (void (*)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr))redwood_gl_proc("glBindBufferRange");
	eagl_p_glBindFramebuffer = (void (*)(GLenum, GLuint))redwood_gl_proc("glBindFramebuffer");
	eagl_p_glBindProgramPipelineEXT = (void (*)(GLuint))redwood_gl_proc("glBindProgramPipelineEXT");
	eagl_p_glBindRenderbuffer = (void (*)(GLenum, GLuint))redwood_gl_proc("glBindRenderbuffer");
	eagl_p_glBindSampler = (void (*)(GLuint, GLuint))redwood_gl_proc("glBindSampler");
	eagl_p_glBindTexture = (void (*)(GLenum, GLuint))redwood_gl_proc("glBindTexture");
	eagl_p_glBindTransformFeedback = (void (*)(GLenum, GLuint))redwood_gl_proc("glBindTransformFeedback");
	eagl_p_glBindVertexArray = (void (*)(GLuint))redwood_gl_proc("glBindVertexArray");
	eagl_p_glBlendColor = (void (*)(GLfloat, GLfloat, GLfloat, GLfloat))redwood_gl_proc("glBlendColor");
	eagl_p_glBlendEquation = (void (*)(GLenum))redwood_gl_proc("glBlendEquation");
	eagl_p_glBlendEquationSeparate = (void (*)(GLenum, GLenum))redwood_gl_proc("glBlendEquationSeparate");
	eagl_p_glBlendFunc = (void (*)(GLenum, GLenum))redwood_gl_proc("glBlendFunc");
	eagl_p_glBlendFuncSeparate = (void (*)(GLenum, GLenum, GLenum, GLenum))redwood_gl_proc("glBlendFuncSeparate");
	eagl_p_glBlitFramebuffer = (void (*)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum))redwood_gl_proc("glBlitFramebuffer");
	eagl_p_glBufferData = (void (*)(GLenum, GLsizeiptr, const void *, GLenum))redwood_gl_proc("glBufferData");
	eagl_p_glBufferSubData = (void (*)(GLenum, GLintptr, GLsizeiptr, const void *))redwood_gl_proc("glBufferSubData");
	eagl_p_glCheckFramebufferStatus = (GLenum (*)(GLenum))redwood_gl_proc("glCheckFramebufferStatus");
	eagl_p_glClear = (void (*)(GLbitfield))redwood_gl_proc("glClear");
	eagl_p_glClearBufferfi = (void (*)(GLenum, GLint, GLfloat, GLint))redwood_gl_proc("glClearBufferfi");
	eagl_p_glClearBufferfv = (void (*)(GLenum, GLint, const GLfloat *))redwood_gl_proc("glClearBufferfv");
	eagl_p_glClearBufferiv = (void (*)(GLenum, GLint, const GLint *))redwood_gl_proc("glClearBufferiv");
	eagl_p_glClearBufferuiv = (void (*)(GLenum, GLint, const GLuint *))redwood_gl_proc("glClearBufferuiv");
	eagl_p_glClearColor = (void (*)(GLfloat, GLfloat, GLfloat, GLfloat))redwood_gl_proc("glClearColor");
	eagl_p_glClearColorx = (void (*)(GLfixed, GLfixed, GLfixed, GLfixed))redwood_gl_proc("glClearColorx");
	eagl_p_glClearDepthf = (void (*)(GLfloat))redwood_gl_proc("glClearDepthf");
	eagl_p_glClearDepthx = (void (*)(GLfixed))redwood_gl_proc("glClearDepthx");
	eagl_p_glClearStencil = (void (*)(GLint))redwood_gl_proc("glClearStencil");
	eagl_p_glClientActiveTexture = (void (*)(GLenum))redwood_gl_proc("glClientActiveTexture");
	eagl_p_glClientWaitSync = (GLenum (*)(GLsync, GLbitfield, GLuint64))redwood_gl_proc("glClientWaitSync");
	eagl_p_glClipPlanef = (void (*)(GLenum, const GLfloat *))redwood_gl_proc("glClipPlanef");
	eagl_p_glClipPlanex = (void (*)(GLenum, const GLfixed *))redwood_gl_proc("glClipPlanex");
	eagl_p_glColor4f = (void (*)(GLfloat, GLfloat, GLfloat, GLfloat))redwood_gl_proc("glColor4f");
	eagl_p_glColor4ub = (void (*)(GLubyte, GLubyte, GLubyte, GLubyte))redwood_gl_proc("glColor4ub");
	eagl_p_glColor4x = (void (*)(GLfixed, GLfixed, GLfixed, GLfixed))redwood_gl_proc("glColor4x");
	eagl_p_glColorMask = (void (*)(GLboolean, GLboolean, GLboolean, GLboolean))redwood_gl_proc("glColorMask");
	eagl_p_glColorPointer = (void (*)(GLint, GLenum, GLsizei, const void *))redwood_gl_proc("glColorPointer");
	eagl_p_glCompileShader = (void (*)(GLuint))redwood_gl_proc("glCompileShader");
	eagl_p_glCompressedTexImage2D = (void (*)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *))redwood_gl_proc("glCompressedTexImage2D");
	eagl_p_glCompressedTexImage3D = (void (*)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *))redwood_gl_proc("glCompressedTexImage3D");
	eagl_p_glCompressedTexSubImage2D = (void (*)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *))redwood_gl_proc("glCompressedTexSubImage2D");
	eagl_p_glCompressedTexSubImage3D = (void (*)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *))redwood_gl_proc("glCompressedTexSubImage3D");
	eagl_p_glCopyBufferSubData = (void (*)(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr))redwood_gl_proc("glCopyBufferSubData");
	eagl_p_glCopyTexImage2D = (void (*)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint))redwood_gl_proc("glCopyTexImage2D");
	eagl_p_glCopyTexSubImage2D = (void (*)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei))redwood_gl_proc("glCopyTexSubImage2D");
	eagl_p_glCopyTexSubImage3D = (void (*)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei))redwood_gl_proc("glCopyTexSubImage3D");
	eagl_p_glCopyTextureLevelsAPPLE = (void (*)(GLuint, GLuint, GLint, GLsizei))redwood_gl_proc("glCopyTextureLevelsAPPLE");
	eagl_p_glCreateProgram = (GLuint (*)(void))redwood_gl_proc("glCreateProgram");
	eagl_p_glCreateShader = (GLuint (*)(GLenum))redwood_gl_proc("glCreateShader");
	eagl_p_glCreateShaderProgramvEXT = (GLuint (*)(GLenum, GLsizei, const GLchar *const*))redwood_gl_proc("glCreateShaderProgramvEXT");
	eagl_p_glCullFace = (void (*)(GLenum))redwood_gl_proc("glCullFace");
	eagl_p_glCurrentPaletteMatrixOES = (void (*)(GLuint))redwood_gl_proc("glCurrentPaletteMatrixOES");
	eagl_p_glDeleteBuffers = (void (*)(GLsizei, const GLuint *))redwood_gl_proc("glDeleteBuffers");
	eagl_p_glDeleteFencesAPPLE = (void (*)(GLsizei, const GLuint *))redwood_gl_proc("glDeleteFencesAPPLE");
	eagl_p_glDeleteFramebuffers = (void (*)(GLsizei, const GLuint *))redwood_gl_proc("glDeleteFramebuffers");
	eagl_p_glDeleteProgram = (void (*)(GLuint))redwood_gl_proc("glDeleteProgram");
	eagl_p_glDeleteProgramPipelinesEXT = (void (*)(GLsizei, const GLuint *))redwood_gl_proc("glDeleteProgramPipelinesEXT");
	eagl_p_glDeleteQueries = (void (*)(GLsizei, const GLuint *))redwood_gl_proc("glDeleteQueries");
	eagl_p_glDeleteRenderbuffers = (void (*)(GLsizei, const GLuint *))redwood_gl_proc("glDeleteRenderbuffers");
	eagl_p_glDeleteSamplers = (void (*)(GLsizei, const GLuint *))redwood_gl_proc("glDeleteSamplers");
	eagl_p_glDeleteShader = (void (*)(GLuint))redwood_gl_proc("glDeleteShader");
	eagl_p_glDeleteSync = (void (*)(GLsync))redwood_gl_proc("glDeleteSync");
	eagl_p_glDeleteTextures = (void (*)(GLsizei, const GLuint *))redwood_gl_proc("glDeleteTextures");
	eagl_p_glDeleteTransformFeedbacks = (void (*)(GLsizei, const GLuint *))redwood_gl_proc("glDeleteTransformFeedbacks");
	eagl_p_glDeleteVertexArrays = (void (*)(GLsizei, const GLuint *))redwood_gl_proc("glDeleteVertexArrays");
	eagl_p_glDepthFunc = (void (*)(GLenum))redwood_gl_proc("glDepthFunc");
	eagl_p_glDepthMask = (void (*)(GLboolean))redwood_gl_proc("glDepthMask");
	eagl_p_glDepthRangef = (void (*)(GLfloat, GLfloat))redwood_gl_proc("glDepthRangef");
	eagl_p_glDepthRangex = (void (*)(GLfixed, GLfixed))redwood_gl_proc("glDepthRangex");
	eagl_p_glDetachShader = (void (*)(GLuint, GLuint))redwood_gl_proc("glDetachShader");
	eagl_p_glDisable = (void (*)(GLenum))redwood_gl_proc("glDisable");
	eagl_p_glDisableClientState = (void (*)(GLenum))redwood_gl_proc("glDisableClientState");
	eagl_p_glDisableVertexAttribArray = (void (*)(GLuint))redwood_gl_proc("glDisableVertexAttribArray");
	eagl_p_glDiscardFramebufferEXT = (void (*)(GLenum, GLsizei, const GLenum *))redwood_gl_proc("glDiscardFramebufferEXT");
	eagl_p_glDrawArrays = (void (*)(GLenum, GLint, GLsizei))redwood_gl_proc("glDrawArrays");
	eagl_p_glDrawArraysInstanced = (void (*)(GLenum, GLint, GLsizei, GLsizei))redwood_gl_proc("glDrawArraysInstanced");
	eagl_p_glDrawBuffers = (void (*)(GLsizei, const GLenum *))redwood_gl_proc("glDrawBuffers");
	eagl_p_glDrawElements = (void (*)(GLenum, GLsizei, GLenum, const void *))redwood_gl_proc("glDrawElements");
	eagl_p_glDrawElementsInstanced = (void (*)(GLenum, GLsizei, GLenum, const void *, GLsizei))redwood_gl_proc("glDrawElementsInstanced");
	eagl_p_glDrawRangeElements = (void (*)(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *))redwood_gl_proc("glDrawRangeElements");
	eagl_p_glDrawTexfOES = (void (*)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))redwood_gl_proc("glDrawTexfOES");
	eagl_p_glDrawTexfvOES = (void (*)(const GLfloat *))redwood_gl_proc("glDrawTexfvOES");
	eagl_p_glDrawTexiOES = (void (*)(GLint, GLint, GLint, GLint, GLint))redwood_gl_proc("glDrawTexiOES");
	eagl_p_glDrawTexivOES = (void (*)(const GLint *))redwood_gl_proc("glDrawTexivOES");
	eagl_p_glDrawTexsOES = (void (*)(GLshort, GLshort, GLshort, GLshort, GLshort))redwood_gl_proc("glDrawTexsOES");
	eagl_p_glDrawTexsvOES = (void (*)(const GLshort *))redwood_gl_proc("glDrawTexsvOES");
	eagl_p_glDrawTexxOES = (void (*)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed))redwood_gl_proc("glDrawTexxOES");
	eagl_p_glDrawTexxvOES = (void (*)(const GLfixed *))redwood_gl_proc("glDrawTexxvOES");
	eagl_p_glEnable = (void (*)(GLenum))redwood_gl_proc("glEnable");
	eagl_p_glEnableClientState = (void (*)(GLenum))redwood_gl_proc("glEnableClientState");
	eagl_p_glEnableVertexAttribArray = (void (*)(GLuint))redwood_gl_proc("glEnableVertexAttribArray");
	eagl_p_glEndQuery = (void (*)(GLenum))redwood_gl_proc("glEndQuery");
	eagl_p_glEndTransformFeedback = (void (*)(void))redwood_gl_proc("glEndTransformFeedback");
	eagl_p_glFenceSync = (GLsync (*)(GLenum, GLbitfield))redwood_gl_proc("glFenceSync");
	eagl_p_glFinish = (void (*)(void))redwood_gl_proc("glFinish");
	eagl_p_glFinishFenceAPPLE = (void (*)(GLuint))redwood_gl_proc("glFinishFenceAPPLE");
	eagl_p_glFlush = (void (*)(void))redwood_gl_proc("glFlush");
	eagl_p_glFlushMappedBufferRange = (void (*)(GLenum, GLintptr, GLsizeiptr))redwood_gl_proc("glFlushMappedBufferRange");
	eagl_p_glFogf = (void (*)(GLenum, GLfloat))redwood_gl_proc("glFogf");
	eagl_p_glFogfv = (void (*)(GLenum, const GLfloat *))redwood_gl_proc("glFogfv");
	eagl_p_glFogx = (void (*)(GLenum, GLfixed))redwood_gl_proc("glFogx");
	eagl_p_glFogxv = (void (*)(GLenum, const GLfixed *))redwood_gl_proc("glFogxv");
	eagl_p_glFramebufferRenderbuffer = (void (*)(GLenum, GLenum, GLenum, GLuint))redwood_gl_proc("glFramebufferRenderbuffer");
	eagl_p_glFramebufferTexture2D = (void (*)(GLenum, GLenum, GLenum, GLuint, GLint))redwood_gl_proc("glFramebufferTexture2D");
	eagl_p_glFramebufferTextureLayer = (void (*)(GLenum, GLenum, GLuint, GLint, GLint))redwood_gl_proc("glFramebufferTextureLayer");
	eagl_p_glFrontFace = (void (*)(GLenum))redwood_gl_proc("glFrontFace");
	eagl_p_glFrustumf = (void (*)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))redwood_gl_proc("glFrustumf");
	eagl_p_glFrustumx = (void (*)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed))redwood_gl_proc("glFrustumx");
	eagl_p_glGenBuffers = (void (*)(GLsizei, GLuint *))redwood_gl_proc("glGenBuffers");
	eagl_p_glGenFencesAPPLE = (void (*)(GLsizei, GLuint *))redwood_gl_proc("glGenFencesAPPLE");
	eagl_p_glGenFramebuffers = (void (*)(GLsizei, GLuint *))redwood_gl_proc("glGenFramebuffers");
	eagl_p_glGenProgramPipelinesEXT = (void (*)(GLsizei, GLuint *))redwood_gl_proc("glGenProgramPipelinesEXT");
	eagl_p_glGenQueries = (void (*)(GLsizei, GLuint *))redwood_gl_proc("glGenQueries");
	eagl_p_glGenRenderbuffers = (void (*)(GLsizei, GLuint *))redwood_gl_proc("glGenRenderbuffers");
	eagl_p_glGenSamplers = (void (*)(GLsizei, GLuint *))redwood_gl_proc("glGenSamplers");
	eagl_p_glGenTextures = (void (*)(GLsizei, GLuint *))redwood_gl_proc("glGenTextures");
	eagl_p_glGenTransformFeedbacks = (void (*)(GLsizei, GLuint *))redwood_gl_proc("glGenTransformFeedbacks");
	eagl_p_glGenVertexArrays = (void (*)(GLsizei, GLuint *))redwood_gl_proc("glGenVertexArrays");
	eagl_p_glGenerateMipmap = (void (*)(GLenum))redwood_gl_proc("glGenerateMipmap");
	eagl_p_glGetActiveAttrib = (void (*)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *))redwood_gl_proc("glGetActiveAttrib");
	eagl_p_glGetActiveUniform = (void (*)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *))redwood_gl_proc("glGetActiveUniform");
	eagl_p_glGetActiveUniformBlockName = (void (*)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *))redwood_gl_proc("glGetActiveUniformBlockName");
	eagl_p_glGetActiveUniformBlockiv = (void (*)(GLuint, GLuint, GLenum, GLint *))redwood_gl_proc("glGetActiveUniformBlockiv");
	eagl_p_glGetActiveUniformsiv = (void (*)(GLuint, GLsizei, const GLuint *, GLenum, GLint *))redwood_gl_proc("glGetActiveUniformsiv");
	eagl_p_glGetAttachedShaders = (void (*)(GLuint, GLsizei, GLsizei *, GLuint *))redwood_gl_proc("glGetAttachedShaders");
	eagl_p_glGetAttribLocation = (GLint (*)(GLuint, const GLchar *))redwood_gl_proc("glGetAttribLocation");
	eagl_p_glGetBooleanv = (void (*)(GLenum, GLboolean *))redwood_gl_proc("glGetBooleanv");
	eagl_p_glGetBufferParameteri64v = (void (*)(GLenum, GLenum, GLint64 *))redwood_gl_proc("glGetBufferParameteri64v");
	eagl_p_glGetBufferParameteriv = (void (*)(GLenum, GLenum, GLint *))redwood_gl_proc("glGetBufferParameteriv");
	eagl_p_glGetBufferPointerv = (void (*)(GLenum, GLenum, void **))redwood_gl_proc("glGetBufferPointerv");
	eagl_p_glGetClipPlanef = (void (*)(GLenum, GLfloat *))redwood_gl_proc("glGetClipPlanef");
	eagl_p_glGetClipPlanex = (void (*)(GLenum, GLfixed *))redwood_gl_proc("glGetClipPlanex");
	eagl_p_glGetError = (GLenum (*)(void))redwood_gl_proc("glGetError");
	eagl_p_glGetFixedv = (void (*)(GLenum, GLfixed *))redwood_gl_proc("glGetFixedv");
	eagl_p_glGetFloatv = (void (*)(GLenum, GLfloat *))redwood_gl_proc("glGetFloatv");
	eagl_p_glGetFragDataLocation = (GLint (*)(GLuint, const GLchar *))redwood_gl_proc("glGetFragDataLocation");
	eagl_p_glGetFramebufferAttachmentParameteriv = (void (*)(GLenum, GLenum, GLenum, GLint *))redwood_gl_proc("glGetFramebufferAttachmentParameteriv");
	eagl_p_glGetInteger64i_v = (void (*)(GLenum, GLuint, GLint64 *))redwood_gl_proc("glGetInteger64i_v");
	eagl_p_glGetInteger64v = (void (*)(GLenum, GLint64 *))redwood_gl_proc("glGetInteger64v");
	eagl_p_glGetIntegeri_v = (void (*)(GLenum, GLuint, GLint *))redwood_gl_proc("glGetIntegeri_v");
	eagl_p_glGetIntegerv = (void (*)(GLenum, GLint *))redwood_gl_proc("glGetIntegerv");
	eagl_p_glGetInternalformativ = (void (*)(GLenum, GLenum, GLenum, GLsizei, GLint *))redwood_gl_proc("glGetInternalformativ");
	eagl_p_glGetLightfv = (void (*)(GLenum, GLenum, GLfloat *))redwood_gl_proc("glGetLightfv");
	eagl_p_glGetLightxv = (void (*)(GLenum, GLenum, GLfixed *))redwood_gl_proc("glGetLightxv");
	eagl_p_glGetMaterialfv = (void (*)(GLenum, GLenum, GLfloat *))redwood_gl_proc("glGetMaterialfv");
	eagl_p_glGetMaterialxv = (void (*)(GLenum, GLenum, GLfixed *))redwood_gl_proc("glGetMaterialxv");
	eagl_p_glGetObjectLabelEXT = (void (*)(GLenum, GLuint, GLsizei, GLsizei *, GLchar *))redwood_gl_proc("glGetObjectLabelEXT");
	eagl_p_glGetPointerv = (void (*)(GLenum, void **))redwood_gl_proc("glGetPointerv");
	eagl_p_glGetProgramBinary = (void (*)(GLuint, GLsizei, GLsizei *, GLenum *, void *))redwood_gl_proc("glGetProgramBinary");
	eagl_p_glGetProgramInfoLog = (void (*)(GLuint, GLsizei, GLsizei *, GLchar *))redwood_gl_proc("glGetProgramInfoLog");
	eagl_p_glGetProgramPipelineInfoLogEXT = (void (*)(GLuint, GLsizei, GLsizei *, GLchar *))redwood_gl_proc("glGetProgramPipelineInfoLogEXT");
	eagl_p_glGetProgramPipelineivEXT = (void (*)(GLuint, GLenum, GLint *))redwood_gl_proc("glGetProgramPipelineivEXT");
	eagl_p_glGetProgramiv = (void (*)(GLuint, GLenum, GLint *))redwood_gl_proc("glGetProgramiv");
	eagl_p_glGetQueryObjectivEXT = (void (*)(GLuint, GLenum, GLint *))redwood_gl_proc("glGetQueryObjectivEXT");
	eagl_p_glGetQueryObjectuiv = (void (*)(GLuint, GLenum, GLuint *))redwood_gl_proc("glGetQueryObjectuiv");
	eagl_p_glGetQueryiv = (void (*)(GLenum, GLenum, GLint *))redwood_gl_proc("glGetQueryiv");
	eagl_p_glGetRenderbufferParameteriv = (void (*)(GLenum, GLenum, GLint *))redwood_gl_proc("glGetRenderbufferParameteriv");
	eagl_p_glGetSamplerParameterfv = (void (*)(GLuint, GLenum, GLfloat *))redwood_gl_proc("glGetSamplerParameterfv");
	eagl_p_glGetSamplerParameteriv = (void (*)(GLuint, GLenum, GLint *))redwood_gl_proc("glGetSamplerParameteriv");
	eagl_p_glGetShaderInfoLog = (void (*)(GLuint, GLsizei, GLsizei *, GLchar *))redwood_gl_proc("glGetShaderInfoLog");
	eagl_p_glGetShaderPrecisionFormat = (void (*)(GLenum, GLenum, GLint *, GLint *))redwood_gl_proc("glGetShaderPrecisionFormat");
	eagl_p_glGetShaderSource = (void (*)(GLuint, GLsizei, GLsizei *, GLchar *))redwood_gl_proc("glGetShaderSource");
	eagl_p_glGetShaderiv = (void (*)(GLuint, GLenum, GLint *))redwood_gl_proc("glGetShaderiv");
	eagl_p_glGetString = (const GLubyte * (*)(GLenum))redwood_gl_proc("glGetString");
	eagl_p_glGetStringi = (const GLubyte * (*)(GLenum, GLuint))redwood_gl_proc("glGetStringi");
	eagl_p_glGetSynciv = (void (*)(GLsync, GLenum, GLsizei, GLsizei *, GLint *))redwood_gl_proc("glGetSynciv");
	eagl_p_glGetTexEnvfv = (void (*)(GLenum, GLenum, GLfloat *))redwood_gl_proc("glGetTexEnvfv");
	eagl_p_glGetTexEnviv = (void (*)(GLenum, GLenum, GLint *))redwood_gl_proc("glGetTexEnviv");
	eagl_p_glGetTexEnvxv = (void (*)(GLenum, GLenum, GLfixed *))redwood_gl_proc("glGetTexEnvxv");
	eagl_p_glGetTexImage = (void (*)(GLenum, GLint, GLenum, GLenum, void *))redwood_gl_proc("glGetTexImage");
	eagl_p_glGetTexLevelParameterfv = (void (*)(GLenum, GLint, GLenum, GLfloat *))redwood_gl_proc("glGetTexLevelParameterfv");
	eagl_p_glGetTexLevelParameteriv = (void (*)(GLenum, GLint, GLenum, GLint *))redwood_gl_proc("glGetTexLevelParameteriv");
	eagl_p_glGetTexParameterfv = (void (*)(GLenum, GLenum, GLfloat *))redwood_gl_proc("glGetTexParameterfv");
	eagl_p_glGetTexParameteriv = (void (*)(GLenum, GLenum, GLint *))redwood_gl_proc("glGetTexParameteriv");
	eagl_p_glGetTexParameterxv = (void (*)(GLenum, GLenum, GLfixed *))redwood_gl_proc("glGetTexParameterxv");
	eagl_p_glGetTransformFeedbackVarying = (void (*)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *))redwood_gl_proc("glGetTransformFeedbackVarying");
	eagl_p_glGetUniformBlockIndex = (GLuint (*)(GLuint, const GLchar *))redwood_gl_proc("glGetUniformBlockIndex");
	eagl_p_glGetUniformIndices = (void (*)(GLuint, GLsizei, const GLchar *const*, GLuint *))redwood_gl_proc("glGetUniformIndices");
	eagl_p_glGetUniformLocation = (GLint (*)(GLuint, const GLchar *))redwood_gl_proc("glGetUniformLocation");
	eagl_p_glGetUniformfv = (void (*)(GLuint, GLint, GLfloat *))redwood_gl_proc("glGetUniformfv");
	eagl_p_glGetUniformiv = (void (*)(GLuint, GLint, GLint *))redwood_gl_proc("glGetUniformiv");
	eagl_p_glGetUniformuiv = (void (*)(GLuint, GLint, GLuint *))redwood_gl_proc("glGetUniformuiv");
	eagl_p_glGetVertexAttribIiv = (void (*)(GLuint, GLenum, GLint *))redwood_gl_proc("glGetVertexAttribIiv");
	eagl_p_glGetVertexAttribIuiv = (void (*)(GLuint, GLenum, GLuint *))redwood_gl_proc("glGetVertexAttribIuiv");
	eagl_p_glGetVertexAttribPointerv = (void (*)(GLuint, GLenum, void **))redwood_gl_proc("glGetVertexAttribPointerv");
	eagl_p_glGetVertexAttribfv = (void (*)(GLuint, GLenum, GLfloat *))redwood_gl_proc("glGetVertexAttribfv");
	eagl_p_glGetVertexAttribiv = (void (*)(GLuint, GLenum, GLint *))redwood_gl_proc("glGetVertexAttribiv");
	eagl_p_glHint = (void (*)(GLenum, GLenum))redwood_gl_proc("glHint");
	eagl_p_glInvalidateSubFramebuffer = (void (*)(GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei))redwood_gl_proc("glInvalidateSubFramebuffer");
	eagl_p_glIsBuffer = (GLboolean (*)(GLuint))redwood_gl_proc("glIsBuffer");
	eagl_p_glIsEnabled = (GLboolean (*)(GLenum))redwood_gl_proc("glIsEnabled");
	eagl_p_glIsFenceAPPLE = (GLboolean (*)(GLuint))redwood_gl_proc("glIsFenceAPPLE");
	eagl_p_glIsFramebuffer = (GLboolean (*)(GLuint))redwood_gl_proc("glIsFramebuffer");
	eagl_p_glIsProgram = (GLboolean (*)(GLuint))redwood_gl_proc("glIsProgram");
	eagl_p_glIsProgramPipelineEXT = (GLboolean (*)(GLuint))redwood_gl_proc("glIsProgramPipelineEXT");
	eagl_p_glIsQuery = (GLboolean (*)(GLuint))redwood_gl_proc("glIsQuery");
	eagl_p_glIsRenderbuffer = (GLboolean (*)(GLuint))redwood_gl_proc("glIsRenderbuffer");
	eagl_p_glIsSampler = (GLboolean (*)(GLuint))redwood_gl_proc("glIsSampler");
	eagl_p_glIsShader = (GLboolean (*)(GLuint))redwood_gl_proc("glIsShader");
	eagl_p_glIsSync = (GLboolean (*)(GLsync))redwood_gl_proc("glIsSync");
	eagl_p_glIsTexture = (GLboolean (*)(GLuint))redwood_gl_proc("glIsTexture");
	eagl_p_glIsTransformFeedback = (GLboolean (*)(GLuint))redwood_gl_proc("glIsTransformFeedback");
	eagl_p_glIsVertexArray = (GLboolean (*)(GLuint))redwood_gl_proc("glIsVertexArray");
	eagl_p_glLabelObjectEXT = (void (*)(GLenum, GLuint, GLsizei, const GLchar *))redwood_gl_proc("glLabelObjectEXT");
	eagl_p_glLightModelf = (void (*)(GLenum, GLfloat))redwood_gl_proc("glLightModelf");
	eagl_p_glLightModelfv = (void (*)(GLenum, const GLfloat *))redwood_gl_proc("glLightModelfv");
	eagl_p_glLightModelx = (void (*)(GLenum, GLfixed))redwood_gl_proc("glLightModelx");
	eagl_p_glLightModelxv = (void (*)(GLenum, const GLfixed *))redwood_gl_proc("glLightModelxv");
	eagl_p_glLightf = (void (*)(GLenum, GLenum, GLfloat))redwood_gl_proc("glLightf");
	eagl_p_glLightfv = (void (*)(GLenum, GLenum, const GLfloat *))redwood_gl_proc("glLightfv");
	eagl_p_glLightx = (void (*)(GLenum, GLenum, GLfixed))redwood_gl_proc("glLightx");
	eagl_p_glLightxv = (void (*)(GLenum, GLenum, const GLfixed *))redwood_gl_proc("glLightxv");
	eagl_p_glLineWidth = (void (*)(GLfloat))redwood_gl_proc("glLineWidth");
	eagl_p_glLineWidthx = (void (*)(GLfixed))redwood_gl_proc("glLineWidthx");
	eagl_p_glLinkProgram = (void (*)(GLuint))redwood_gl_proc("glLinkProgram");
	eagl_p_glLoadIdentity = (void (*)(void))redwood_gl_proc("glLoadIdentity");
	eagl_p_glLoadMatrixf = (void (*)(const GLfloat *))redwood_gl_proc("glLoadMatrixf");
	eagl_p_glLoadMatrixx = (void (*)(const GLfixed *))redwood_gl_proc("glLoadMatrixx");
	eagl_p_glLoadPaletteFromModelViewMatrixOES = (void (*)(void))redwood_gl_proc("glLoadPaletteFromModelViewMatrixOES");
	eagl_p_glLogicOp = (void (*)(GLenum))redwood_gl_proc("glLogicOp");
	eagl_p_glMapBufferOES = (void * (*)(GLenum, GLenum))redwood_gl_proc("glMapBufferOES");
	eagl_p_glMapBufferRange = (void * (*)(GLenum, GLintptr, GLsizeiptr, GLbitfield))redwood_gl_proc("glMapBufferRange");
	eagl_p_glMaterialf = (void (*)(GLenum, GLenum, GLfloat))redwood_gl_proc("glMaterialf");
	eagl_p_glMaterialfv = (void (*)(GLenum, GLenum, const GLfloat *))redwood_gl_proc("glMaterialfv");
	eagl_p_glMaterialx = (void (*)(GLenum, GLenum, GLfixed))redwood_gl_proc("glMaterialx");
	eagl_p_glMaterialxv = (void (*)(GLenum, GLenum, const GLfixed *))redwood_gl_proc("glMaterialxv");
	eagl_p_glMatrixIndexPointerOES = (void (*)(GLint, GLenum, GLsizei, const void *))redwood_gl_proc("glMatrixIndexPointerOES");
	eagl_p_glMatrixMode = (void (*)(GLenum))redwood_gl_proc("glMatrixMode");
	eagl_p_glMultMatrixf = (void (*)(const GLfloat *))redwood_gl_proc("glMultMatrixf");
	eagl_p_glMultMatrixx = (void (*)(const GLfixed *))redwood_gl_proc("glMultMatrixx");
	eagl_p_glMultiTexCoord4f = (void (*)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat))redwood_gl_proc("glMultiTexCoord4f");
	eagl_p_glMultiTexCoord4x = (void (*)(GLenum, GLfixed, GLfixed, GLfixed, GLfixed))redwood_gl_proc("glMultiTexCoord4x");
	eagl_p_glNormal3f = (void (*)(GLfloat, GLfloat, GLfloat))redwood_gl_proc("glNormal3f");
	eagl_p_glNormal3x = (void (*)(GLfixed, GLfixed, GLfixed))redwood_gl_proc("glNormal3x");
	eagl_p_glNormalPointer = (void (*)(GLenum, GLsizei, const void *))redwood_gl_proc("glNormalPointer");
	eagl_p_glOrthof = (void (*)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))redwood_gl_proc("glOrthof");
	eagl_p_glOrthox = (void (*)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed))redwood_gl_proc("glOrthox");
	eagl_p_glPauseTransformFeedback = (void (*)(void))redwood_gl_proc("glPauseTransformFeedback");
	eagl_p_glPixelStorei = (void (*)(GLenum, GLint))redwood_gl_proc("glPixelStorei");
	eagl_p_glPointParameterf = (void (*)(GLenum, GLfloat))redwood_gl_proc("glPointParameterf");
	eagl_p_glPointParameterfv = (void (*)(GLenum, const GLfloat *))redwood_gl_proc("glPointParameterfv");
	eagl_p_glPointParameterx = (void (*)(GLenum, GLfixed))redwood_gl_proc("glPointParameterx");
	eagl_p_glPointParameterxv = (void (*)(GLenum, const GLfixed *))redwood_gl_proc("glPointParameterxv");
	eagl_p_glPointSize = (void (*)(GLfloat))redwood_gl_proc("glPointSize");
	eagl_p_glPointSizePointerOES = (void (*)(GLenum, GLsizei, const void *))redwood_gl_proc("glPointSizePointerOES");
	eagl_p_glPointSizex = (void (*)(GLfixed))redwood_gl_proc("glPointSizex");
	eagl_p_glPolygonOffset = (void (*)(GLfloat, GLfloat))redwood_gl_proc("glPolygonOffset");
	eagl_p_glPolygonOffsetx = (void (*)(GLfixed, GLfixed))redwood_gl_proc("glPolygonOffsetx");
	eagl_p_glPopMatrix = (void (*)(void))redwood_gl_proc("glPopMatrix");
	eagl_p_glProgramBinary = (void (*)(GLuint, GLenum, const void *, GLsizei))redwood_gl_proc("glProgramBinary");
	eagl_p_glProgramParameteri = (void (*)(GLuint, GLenum, GLint))redwood_gl_proc("glProgramParameteri");
	eagl_p_glProgramUniform1fEXT = (void (*)(GLuint, GLint, GLfloat))redwood_gl_proc("glProgramUniform1fEXT");
	eagl_p_glProgramUniform1fvEXT = (void (*)(GLuint, GLint, GLsizei, const GLfloat *))redwood_gl_proc("glProgramUniform1fvEXT");
	eagl_p_glProgramUniform1iEXT = (void (*)(GLuint, GLint, GLint))redwood_gl_proc("glProgramUniform1iEXT");
	eagl_p_glProgramUniform1ivEXT = (void (*)(GLuint, GLint, GLsizei, const GLint *))redwood_gl_proc("glProgramUniform1ivEXT");
	eagl_p_glProgramUniform1uiEXT = (void (*)(GLuint, GLint, GLuint))redwood_gl_proc("glProgramUniform1uiEXT");
	eagl_p_glProgramUniform1uivEXT = (void (*)(GLuint, GLint, GLsizei, const GLuint *))redwood_gl_proc("glProgramUniform1uivEXT");
	eagl_p_glProgramUniform2fEXT = (void (*)(GLuint, GLint, GLfloat, GLfloat))redwood_gl_proc("glProgramUniform2fEXT");
	eagl_p_glProgramUniform2fvEXT = (void (*)(GLuint, GLint, GLsizei, const GLfloat *))redwood_gl_proc("glProgramUniform2fvEXT");
	eagl_p_glProgramUniform2iEXT = (void (*)(GLuint, GLint, GLint, GLint))redwood_gl_proc("glProgramUniform2iEXT");
	eagl_p_glProgramUniform2ivEXT = (void (*)(GLuint, GLint, GLsizei, const GLint *))redwood_gl_proc("glProgramUniform2ivEXT");
	eagl_p_glProgramUniform2uiEXT = (void (*)(GLuint, GLint, GLuint, GLuint))redwood_gl_proc("glProgramUniform2uiEXT");
	eagl_p_glProgramUniform2uivEXT = (void (*)(GLuint, GLint, GLsizei, const GLuint *))redwood_gl_proc("glProgramUniform2uivEXT");
	eagl_p_glProgramUniform3fEXT = (void (*)(GLuint, GLint, GLfloat, GLfloat, GLfloat))redwood_gl_proc("glProgramUniform3fEXT");
	eagl_p_glProgramUniform3fvEXT = (void (*)(GLuint, GLint, GLsizei, const GLfloat *))redwood_gl_proc("glProgramUniform3fvEXT");
	eagl_p_glProgramUniform3iEXT = (void (*)(GLuint, GLint, GLint, GLint, GLint))redwood_gl_proc("glProgramUniform3iEXT");
	eagl_p_glProgramUniform3ivEXT = (void (*)(GLuint, GLint, GLsizei, const GLint *))redwood_gl_proc("glProgramUniform3ivEXT");
	eagl_p_glProgramUniform3uiEXT = (void (*)(GLuint, GLint, GLuint, GLuint, GLuint))redwood_gl_proc("glProgramUniform3uiEXT");
	eagl_p_glProgramUniform3uivEXT = (void (*)(GLuint, GLint, GLsizei, const GLuint *))redwood_gl_proc("glProgramUniform3uivEXT");
	eagl_p_glProgramUniform4fEXT = (void (*)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat))redwood_gl_proc("glProgramUniform4fEXT");
	eagl_p_glProgramUniform4fvEXT = (void (*)(GLuint, GLint, GLsizei, const GLfloat *))redwood_gl_proc("glProgramUniform4fvEXT");
	eagl_p_glProgramUniform4iEXT = (void (*)(GLuint, GLint, GLint, GLint, GLint, GLint))redwood_gl_proc("glProgramUniform4iEXT");
	eagl_p_glProgramUniform4ivEXT = (void (*)(GLuint, GLint, GLsizei, const GLint *))redwood_gl_proc("glProgramUniform4ivEXT");
	eagl_p_glProgramUniform4uiEXT = (void (*)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint))redwood_gl_proc("glProgramUniform4uiEXT");
	eagl_p_glProgramUniform4uivEXT = (void (*)(GLuint, GLint, GLsizei, const GLuint *))redwood_gl_proc("glProgramUniform4uivEXT");
	eagl_p_glProgramUniformMatrix2fvEXT = (void (*)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glProgramUniformMatrix2fvEXT");
	eagl_p_glProgramUniformMatrix2x3fvEXT = (void (*)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glProgramUniformMatrix2x3fvEXT");
	eagl_p_glProgramUniformMatrix2x4fvEXT = (void (*)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glProgramUniformMatrix2x4fvEXT");
	eagl_p_glProgramUniformMatrix3fvEXT = (void (*)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glProgramUniformMatrix3fvEXT");
	eagl_p_glProgramUniformMatrix3x2fvEXT = (void (*)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glProgramUniformMatrix3x2fvEXT");
	eagl_p_glProgramUniformMatrix3x4fvEXT = (void (*)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glProgramUniformMatrix3x4fvEXT");
	eagl_p_glProgramUniformMatrix4fvEXT = (void (*)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glProgramUniformMatrix4fvEXT");
	eagl_p_glProgramUniformMatrix4x2fvEXT = (void (*)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glProgramUniformMatrix4x2fvEXT");
	eagl_p_glProgramUniformMatrix4x3fvEXT = (void (*)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glProgramUniformMatrix4x3fvEXT");
	eagl_p_glPushMatrix = (void (*)(void))redwood_gl_proc("glPushMatrix");
	eagl_p_glReadBuffer = (void (*)(GLenum))redwood_gl_proc("glReadBuffer");
	eagl_p_glReadPixels = (void (*)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *))redwood_gl_proc("glReadPixels");
	eagl_p_glReleaseShaderCompiler = (void (*)(void))redwood_gl_proc("glReleaseShaderCompiler");
	eagl_p_glRenderbufferStorage = (void (*)(GLenum, GLenum, GLsizei, GLsizei))redwood_gl_proc("glRenderbufferStorage");
	eagl_p_glRenderbufferStorageMultisample = (void (*)(GLenum, GLsizei, GLenum, GLsizei, GLsizei))redwood_gl_proc("glRenderbufferStorageMultisample");
	eagl_p_glResolveMultisampleFramebufferAPPLE = (void (*)(void))redwood_gl_proc("glResolveMultisampleFramebufferAPPLE");
	eagl_p_glResumeTransformFeedback = (void (*)(void))redwood_gl_proc("glResumeTransformFeedback");
	eagl_p_glRotatef = (void (*)(GLfloat, GLfloat, GLfloat, GLfloat))redwood_gl_proc("glRotatef");
	eagl_p_glRotatex = (void (*)(GLfixed, GLfixed, GLfixed, GLfixed))redwood_gl_proc("glRotatex");
	eagl_p_glSampleCoverage = (void (*)(GLfloat, GLboolean))redwood_gl_proc("glSampleCoverage");
	eagl_p_glSampleCoveragex = (void (*)(GLclampx, GLboolean))redwood_gl_proc("glSampleCoveragex");
	eagl_p_glSamplerParameterf = (void (*)(GLuint, GLenum, GLfloat))redwood_gl_proc("glSamplerParameterf");
	eagl_p_glSamplerParameterfv = (void (*)(GLuint, GLenum, const GLfloat *))redwood_gl_proc("glSamplerParameterfv");
	eagl_p_glSamplerParameteri = (void (*)(GLuint, GLenum, GLint))redwood_gl_proc("glSamplerParameteri");
	eagl_p_glSamplerParameteriv = (void (*)(GLuint, GLenum, const GLint *))redwood_gl_proc("glSamplerParameteriv");
	eagl_p_glScalef = (void (*)(GLfloat, GLfloat, GLfloat))redwood_gl_proc("glScalef");
	eagl_p_glScalex = (void (*)(GLfixed, GLfixed, GLfixed))redwood_gl_proc("glScalex");
	eagl_p_glScissor = (void (*)(GLint, GLint, GLsizei, GLsizei))redwood_gl_proc("glScissor");
	eagl_p_glSetFenceAPPLE = (void (*)(GLuint))redwood_gl_proc("glSetFenceAPPLE");
	eagl_p_glShadeModel = (void (*)(GLenum))redwood_gl_proc("glShadeModel");
	eagl_p_glShaderBinary = (void (*)(GLsizei, const GLuint *, GLenum, const void *, GLsizei))redwood_gl_proc("glShaderBinary");
	eagl_p_glShaderSource = (void (*)(GLuint, GLsizei, const GLchar *const*, const GLint *))redwood_gl_proc("glShaderSource");
	eagl_p_glStencilFunc = (void (*)(GLenum, GLint, GLuint))redwood_gl_proc("glStencilFunc");
	eagl_p_glStencilFuncSeparate = (void (*)(GLenum, GLenum, GLint, GLuint))redwood_gl_proc("glStencilFuncSeparate");
	eagl_p_glStencilMask = (void (*)(GLuint))redwood_gl_proc("glStencilMask");
	eagl_p_glStencilMaskSeparate = (void (*)(GLenum, GLuint))redwood_gl_proc("glStencilMaskSeparate");
	eagl_p_glStencilOp = (void (*)(GLenum, GLenum, GLenum))redwood_gl_proc("glStencilOp");
	eagl_p_glStencilOpSeparate = (void (*)(GLenum, GLenum, GLenum, GLenum))redwood_gl_proc("glStencilOpSeparate");
	eagl_p_glTestFenceAPPLE = (GLboolean (*)(GLuint))redwood_gl_proc("glTestFenceAPPLE");
	eagl_p_glTestObjectAPPLE = (GLboolean (*)(GLenum, GLuint))redwood_gl_proc("glTestObjectAPPLE");
	eagl_p_glTexCoordPointer = (void (*)(GLint, GLenum, GLsizei, const void *))redwood_gl_proc("glTexCoordPointer");
	eagl_p_glTexEnvf = (void (*)(GLenum, GLenum, GLfloat))redwood_gl_proc("glTexEnvf");
	eagl_p_glTexEnvfv = (void (*)(GLenum, GLenum, const GLfloat *))redwood_gl_proc("glTexEnvfv");
	eagl_p_glTexEnvi = (void (*)(GLenum, GLenum, GLint))redwood_gl_proc("glTexEnvi");
	eagl_p_glTexEnviv = (void (*)(GLenum, GLenum, const GLint *))redwood_gl_proc("glTexEnviv");
	eagl_p_glTexEnvx = (void (*)(GLenum, GLenum, GLfixed))redwood_gl_proc("glTexEnvx");
	eagl_p_glTexEnvxv = (void (*)(GLenum, GLenum, const GLfixed *))redwood_gl_proc("glTexEnvxv");
	eagl_p_glTexImage2D = (void (*)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *))redwood_gl_proc("glTexImage2D");
	eagl_p_glTexImage3D = (void (*)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *))redwood_gl_proc("glTexImage3D");
	eagl_p_glTexParameterf = (void (*)(GLenum, GLenum, GLfloat))redwood_gl_proc("glTexParameterf");
	eagl_p_glTexParameterfv = (void (*)(GLenum, GLenum, const GLfloat *))redwood_gl_proc("glTexParameterfv");
	eagl_p_glTexParameteri = (void (*)(GLenum, GLenum, GLint))redwood_gl_proc("glTexParameteri");
	eagl_p_glTexParameteriv = (void (*)(GLenum, GLenum, const GLint *))redwood_gl_proc("glTexParameteriv");
	eagl_p_glTexParameterx = (void (*)(GLenum, GLenum, GLfixed))redwood_gl_proc("glTexParameterx");
	eagl_p_glTexParameterxv = (void (*)(GLenum, GLenum, const GLfixed *))redwood_gl_proc("glTexParameterxv");
	eagl_p_glTexStorage2D = (void (*)(GLenum, GLsizei, GLenum, GLsizei, GLsizei))redwood_gl_proc("glTexStorage2D");
	eagl_p_glTexStorage3D = (void (*)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei))redwood_gl_proc("glTexStorage3D");
	eagl_p_glTexSubImage2D = (void (*)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *))redwood_gl_proc("glTexSubImage2D");
	eagl_p_glTexSubImage3D = (void (*)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *))redwood_gl_proc("glTexSubImage3D");
	eagl_p_glTransformFeedbackVaryings = (void (*)(GLuint, GLsizei, const GLchar *const*, GLenum))redwood_gl_proc("glTransformFeedbackVaryings");
	eagl_p_glTranslatef = (void (*)(GLfloat, GLfloat, GLfloat))redwood_gl_proc("glTranslatef");
	eagl_p_glTranslatex = (void (*)(GLfixed, GLfixed, GLfixed))redwood_gl_proc("glTranslatex");
	eagl_p_glUniform1f = (void (*)(GLint, GLfloat))redwood_gl_proc("glUniform1f");
	eagl_p_glUniform1fv = (void (*)(GLint, GLsizei, const GLfloat *))redwood_gl_proc("glUniform1fv");
	eagl_p_glUniform1i = (void (*)(GLint, GLint))redwood_gl_proc("glUniform1i");
	eagl_p_glUniform1iv = (void (*)(GLint, GLsizei, const GLint *))redwood_gl_proc("glUniform1iv");
	eagl_p_glUniform1ui = (void (*)(GLint, GLuint))redwood_gl_proc("glUniform1ui");
	eagl_p_glUniform1uiv = (void (*)(GLint, GLsizei, const GLuint *))redwood_gl_proc("glUniform1uiv");
	eagl_p_glUniform2f = (void (*)(GLint, GLfloat, GLfloat))redwood_gl_proc("glUniform2f");
	eagl_p_glUniform2fv = (void (*)(GLint, GLsizei, const GLfloat *))redwood_gl_proc("glUniform2fv");
	eagl_p_glUniform2i = (void (*)(GLint, GLint, GLint))redwood_gl_proc("glUniform2i");
	eagl_p_glUniform2iv = (void (*)(GLint, GLsizei, const GLint *))redwood_gl_proc("glUniform2iv");
	eagl_p_glUniform2ui = (void (*)(GLint, GLuint, GLuint))redwood_gl_proc("glUniform2ui");
	eagl_p_glUniform2uiv = (void (*)(GLint, GLsizei, const GLuint *))redwood_gl_proc("glUniform2uiv");
	eagl_p_glUniform3f = (void (*)(GLint, GLfloat, GLfloat, GLfloat))redwood_gl_proc("glUniform3f");
	eagl_p_glUniform3fv = (void (*)(GLint, GLsizei, const GLfloat *))redwood_gl_proc("glUniform3fv");
	eagl_p_glUniform3i = (void (*)(GLint, GLint, GLint, GLint))redwood_gl_proc("glUniform3i");
	eagl_p_glUniform3iv = (void (*)(GLint, GLsizei, const GLint *))redwood_gl_proc("glUniform3iv");
	eagl_p_glUniform3ui = (void (*)(GLint, GLuint, GLuint, GLuint))redwood_gl_proc("glUniform3ui");
	eagl_p_glUniform3uiv = (void (*)(GLint, GLsizei, const GLuint *))redwood_gl_proc("glUniform3uiv");
	eagl_p_glUniform4f = (void (*)(GLint, GLfloat, GLfloat, GLfloat, GLfloat))redwood_gl_proc("glUniform4f");
	eagl_p_glUniform4fv = (void (*)(GLint, GLsizei, const GLfloat *))redwood_gl_proc("glUniform4fv");
	eagl_p_glUniform4i = (void (*)(GLint, GLint, GLint, GLint, GLint))redwood_gl_proc("glUniform4i");
	eagl_p_glUniform4iv = (void (*)(GLint, GLsizei, const GLint *))redwood_gl_proc("glUniform4iv");
	eagl_p_glUniform4ui = (void (*)(GLint, GLuint, GLuint, GLuint, GLuint))redwood_gl_proc("glUniform4ui");
	eagl_p_glUniform4uiv = (void (*)(GLint, GLsizei, const GLuint *))redwood_gl_proc("glUniform4uiv");
	eagl_p_glUniformBlockBinding = (void (*)(GLuint, GLuint, GLuint))redwood_gl_proc("glUniformBlockBinding");
	eagl_p_glUniformMatrix2fv = (void (*)(GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glUniformMatrix2fv");
	eagl_p_glUniformMatrix2x3fv = (void (*)(GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glUniformMatrix2x3fv");
	eagl_p_glUniformMatrix2x4fv = (void (*)(GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glUniformMatrix2x4fv");
	eagl_p_glUniformMatrix3fv = (void (*)(GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glUniformMatrix3fv");
	eagl_p_glUniformMatrix3x2fv = (void (*)(GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glUniformMatrix3x2fv");
	eagl_p_glUniformMatrix3x4fv = (void (*)(GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glUniformMatrix3x4fv");
	eagl_p_glUniformMatrix4fv = (void (*)(GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glUniformMatrix4fv");
	eagl_p_glUniformMatrix4x2fv = (void (*)(GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glUniformMatrix4x2fv");
	eagl_p_glUniformMatrix4x3fv = (void (*)(GLint, GLsizei, GLboolean, const GLfloat *))redwood_gl_proc("glUniformMatrix4x3fv");
	eagl_p_glUnmapBuffer = (GLboolean (*)(GLenum))redwood_gl_proc("glUnmapBuffer");
	eagl_p_glUseProgram = (void (*)(GLuint))redwood_gl_proc("glUseProgram");
	eagl_p_glUseProgramStagesEXT = (void (*)(GLuint, GLbitfield, GLuint))redwood_gl_proc("glUseProgramStagesEXT");
	eagl_p_glValidateProgram = (void (*)(GLuint))redwood_gl_proc("glValidateProgram");
	eagl_p_glValidateProgramPipelineEXT = (void (*)(GLuint))redwood_gl_proc("glValidateProgramPipelineEXT");
	eagl_p_glVertexAttrib1f = (void (*)(GLuint, GLfloat))redwood_gl_proc("glVertexAttrib1f");
	eagl_p_glVertexAttrib1fv = (void (*)(GLuint, const GLfloat *))redwood_gl_proc("glVertexAttrib1fv");
	eagl_p_glVertexAttrib2f = (void (*)(GLuint, GLfloat, GLfloat))redwood_gl_proc("glVertexAttrib2f");
	eagl_p_glVertexAttrib2fv = (void (*)(GLuint, const GLfloat *))redwood_gl_proc("glVertexAttrib2fv");
	eagl_p_glVertexAttrib3f = (void (*)(GLuint, GLfloat, GLfloat, GLfloat))redwood_gl_proc("glVertexAttrib3f");
	eagl_p_glVertexAttrib3fv = (void (*)(GLuint, const GLfloat *))redwood_gl_proc("glVertexAttrib3fv");
	eagl_p_glVertexAttrib4f = (void (*)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat))redwood_gl_proc("glVertexAttrib4f");
	eagl_p_glVertexAttrib4fv = (void (*)(GLuint, const GLfloat *))redwood_gl_proc("glVertexAttrib4fv");
	eagl_p_glVertexAttribDivisor = (void (*)(GLuint, GLuint))redwood_gl_proc("glVertexAttribDivisor");
	eagl_p_glVertexAttribI4i = (void (*)(GLuint, GLint, GLint, GLint, GLint))redwood_gl_proc("glVertexAttribI4i");
	eagl_p_glVertexAttribI4iv = (void (*)(GLuint, const GLint *))redwood_gl_proc("glVertexAttribI4iv");
	eagl_p_glVertexAttribI4ui = (void (*)(GLuint, GLuint, GLuint, GLuint, GLuint))redwood_gl_proc("glVertexAttribI4ui");
	eagl_p_glVertexAttribI4uiv = (void (*)(GLuint, const GLuint *))redwood_gl_proc("glVertexAttribI4uiv");
	eagl_p_glVertexAttribIPointer = (void (*)(GLuint, GLint, GLenum, GLsizei, const void *))redwood_gl_proc("glVertexAttribIPointer");
	eagl_p_glVertexAttribPointer = (void (*)(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *))redwood_gl_proc("glVertexAttribPointer");
	eagl_p_glVertexPointer = (void (*)(GLint, GLenum, GLsizei, const void *))redwood_gl_proc("glVertexPointer");
	eagl_p_glViewport = (void (*)(GLint, GLint, GLsizei, GLsizei))redwood_gl_proc("glViewport");
	eagl_p_glWaitSync = (void (*)(GLsync, GLbitfield, GLuint64))redwood_gl_proc("glWaitSync");
	eagl_p_glWeightPointerOES = (void (*)(GLint, GLenum, GLsizei, const void *))redwood_gl_proc("glWeightPointerOES");
}
#endif /* EAGL_GEN_DECLARATIONS */

#ifdef EAGL_GEN_TABLE
static void
eagl_gen_glAlphaFunc(void *context, GLenum a0, GLfloat a1)
{
	struct eagl *e = context;
	if (eagl_p_glAlphaFunc == NULL) {
		(void)eagl_missing(context, 0x10);
		return;
	}
	EAGL_ENTER(e, 0x10);
	eagl_p_glAlphaFunc(a0, a1);
	EAGL_LEAVE(e, 0x10);
}

static void
eagl_gen_glBlendFunc(void *context, GLenum a0, GLenum a1)
{
	struct eagl *e = context;
	if (eagl_p_glBlendFunc == NULL) {
		(void)eagl_missing(context, 0x40);
		return;
	}
	EAGL_ENTER(e, 0x40);
	eagl_p_glBlendFunc(a0, a1);
	EAGL_LEAVE(e, 0x40);
}

static void
eagl_gen_glClearColor(void *context, GLfloat a0, GLfloat a1, GLfloat a2, GLfloat a3)
{
	struct eagl *e = context;
	if (eagl_p_glClearColor == NULL) {
		(void)eagl_missing(context, 0x68);
		return;
	}
	EAGL_ENTER(e, 0x68);
	eagl_p_glClearColor(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x68);
}

static void
eagl_gen_glClearStencil(void *context, GLint a0)
{
	struct eagl *e = context;
	if (eagl_p_glClearStencil == NULL) {
		(void)eagl_missing(context, 0x80);
		return;
	}
	EAGL_ENTER(e, 0x80);
	eagl_p_glClearStencil(a0);
	EAGL_LEAVE(e, 0x80);
}

static void
eagl_gen_glColor4f(void *context, GLfloat a0, GLfloat a1, GLfloat a2, GLfloat a3)
{
	struct eagl *e = context;
	if (eagl_p_glColor4f == NULL) {
		(void)eagl_missing(context, 0x130);
		return;
	}
	EAGL_ENTER(e, 0x130);
	eagl_p_glColor4f(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x130);
}

static void
eagl_gen_glColor4ub(void *context, GLubyte a0, GLubyte a1, GLubyte a2, GLubyte a3)
{
	struct eagl *e = context;
	if (eagl_p_glColor4ub == NULL) {
		(void)eagl_missing(context, 0x160);
		return;
	}
	EAGL_ENTER(e, 0x160);
	eagl_p_glColor4ub(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x160);
}

static void
eagl_gen_glColorMask(void *context, GLboolean a0, GLboolean a1, GLboolean a2, GLboolean a3)
{
	struct eagl *e = context;
	if (eagl_p_glColorMask == NULL) {
		(void)eagl_missing(context, 0x190);
		return;
	}
	EAGL_ENTER(e, 0x190);
	eagl_p_glColorMask(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x190);
}

static void
eagl_gen_glColorPointer(void *context, GLint a0, GLenum a1, GLsizei a2, const void * a3)
{
	struct eagl *e = context;
	if (eagl_p_glColorPointer == NULL) {
		(void)eagl_missing(context, 0x1a0);
		return;
	}
	EAGL_ENTER(e, 0x1a0);
	eagl_p_glColorPointer(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1a0);
}

static void
eagl_gen_glCopyTexImage2D(void *context, GLenum a0, GLint a1, GLenum a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6, GLint a7)
{
	struct eagl *e = context;
	if (eagl_p_glCopyTexImage2D == NULL) {
		(void)eagl_missing(context, 0x1b8);
		return;
	}
	EAGL_ENTER(e, 0x1b8);
	eagl_p_glCopyTexImage2D(a0, a1, a2, a3, a4, a5, a6, a7);
	EAGL_LEAVE(e, 0x1b8);
}

static void
eagl_gen_glCullFace(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glCullFace == NULL) {
		(void)eagl_missing(context, 0x1d0);
		return;
	}
	EAGL_ENTER(e, 0x1d0);
	eagl_p_glCullFace(a0);
	EAGL_LEAVE(e, 0x1d0);
}

static void
eagl_gen_glDepthFunc(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glDepthFunc == NULL) {
		(void)eagl_missing(context, 0x1e8);
		return;
	}
	EAGL_ENTER(e, 0x1e8);
	eagl_p_glDepthFunc(a0);
	EAGL_LEAVE(e, 0x1e8);
}

static void
eagl_gen_glDepthMask(void *context, GLboolean a0)
{
	struct eagl *e = context;
	if (eagl_p_glDepthMask == NULL) {
		(void)eagl_missing(context, 0x1f0);
		return;
	}
	EAGL_ENTER(e, 0x1f0);
	eagl_p_glDepthMask(a0);
	EAGL_LEAVE(e, 0x1f0);
}

static void
eagl_gen_glDisable(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glDisable == NULL) {
		(void)eagl_missing(context, 0x200);
		return;
	}
	EAGL_ENTER(e, 0x200);
	eagl_p_glDisable(a0);
	EAGL_LEAVE(e, 0x200);
}

static void
eagl_gen_glDisableClientState(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glDisableClientState == NULL) {
		(void)eagl_missing(context, 0x208);
		return;
	}
	EAGL_ENTER(e, 0x208);
	eagl_p_glDisableClientState(a0);
	EAGL_LEAVE(e, 0x208);
}

static void
eagl_gen_glEnable(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glEnable == NULL) {
		(void)eagl_missing(context, 0x248);
		return;
	}
	EAGL_ENTER(e, 0x248);
	eagl_p_glEnable(a0);
	EAGL_LEAVE(e, 0x248);
}

static void
eagl_gen_glEnableClientState(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glEnableClientState == NULL) {
		(void)eagl_missing(context, 0x250);
		return;
	}
	EAGL_ENTER(e, 0x250);
	eagl_p_glEnableClientState(a0);
	EAGL_LEAVE(e, 0x250);
}

static void
eagl_gen_glFogf(void *context, GLenum a0, GLfloat a1)
{
	struct eagl *e = context;
	if (eagl_p_glFogf == NULL) {
		(void)eagl_missing(context, 0x2e0);
		return;
	}
	EAGL_ENTER(e, 0x2e0);
	eagl_p_glFogf(a0, a1);
	EAGL_LEAVE(e, 0x2e0);
}

static void
eagl_gen_glFogfv(void *context, GLenum a0, const GLfloat * a1)
{
	struct eagl *e = context;
	if (eagl_p_glFogfv == NULL) {
		(void)eagl_missing(context, 0x2e8);
		return;
	}
	EAGL_ENTER(e, 0x2e8);
	eagl_p_glFogfv(a0, a1);
	EAGL_LEAVE(e, 0x2e8);
}

static void
eagl_gen_glFrontFace(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glFrontFace == NULL) {
		(void)eagl_missing(context, 0x300);
		return;
	}
	EAGL_ENTER(e, 0x300);
	eagl_p_glFrontFace(a0);
	EAGL_LEAVE(e, 0x300);
}

static void
eagl_gen_glGenTextures(void *context, GLsizei a0, GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGenTextures == NULL) {
		(void)eagl_missing(context, 0x318);
		return;
	}
	EAGL_ENTER(e, 0x318);
	eagl_p_glGenTextures(a0, a1);
	EAGL_LEAVE(e, 0x318);
}

static void
eagl_gen_glGetBooleanv(void *context, GLenum a0, GLboolean * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGetBooleanv == NULL) {
		(void)eagl_missing(context, 0x320);
		return;
	}
	EAGL_ENTER(e, 0x320);
	eagl_p_glGetBooleanv(a0, a1);
	EAGL_LEAVE(e, 0x320);
}

static GLenum
eagl_gen_glGetError(void *context)
{
	struct eagl *e = context;
	GLenum result;
	if (eagl_p_glGetError == NULL) {
		(void)eagl_missing(context, 0x338);
		return (GLenum)0;
	}
	EAGL_ENTER(e, 0x338);
	result = eagl_p_glGetError();
	EAGL_LEAVE(e, 0x338);
	return result;
}

static void
eagl_gen_glGetFloatv(void *context, GLenum a0, GLfloat * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGetFloatv == NULL) {
		(void)eagl_missing(context, 0x340);
		return;
	}
	EAGL_ENTER(e, 0x340);
	eagl_p_glGetFloatv(a0, a1);
	EAGL_LEAVE(e, 0x340);
}

static void
eagl_gen_glGetLightfv(void *context, GLenum a0, GLenum a1, GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetLightfv == NULL) {
		(void)eagl_missing(context, 0x350);
		return;
	}
	EAGL_ENTER(e, 0x350);
	eagl_p_glGetLightfv(a0, a1, a2);
	EAGL_LEAVE(e, 0x350);
}

static void
eagl_gen_glGetMaterialfv(void *context, GLenum a0, GLenum a1, GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetMaterialfv == NULL) {
		(void)eagl_missing(context, 0x378);
		return;
	}
	EAGL_ENTER(e, 0x378);
	eagl_p_glGetMaterialfv(a0, a1, a2);
	EAGL_LEAVE(e, 0x378);
}

static void
eagl_gen_glGetPointerv(void *context, GLenum a0, void ** a1)
{
	struct eagl *e = context;
	if (eagl_p_glGetPointerv == NULL) {
		(void)eagl_missing(context, 0x3a0);
		return;
	}
	EAGL_ENTER(e, 0x3a0);
	eagl_p_glGetPointerv(a0, a1);
	EAGL_LEAVE(e, 0x3a0);
}

static void
eagl_gen_glGetTexEnvfv(void *context, GLenum a0, GLenum a1, GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetTexEnvfv == NULL) {
		(void)eagl_missing(context, 0x3b8);
		return;
	}
	EAGL_ENTER(e, 0x3b8);
	eagl_p_glGetTexEnvfv(a0, a1, a2);
	EAGL_LEAVE(e, 0x3b8);
}

static void
eagl_gen_glGetTexEnviv(void *context, GLenum a0, GLenum a1, GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetTexEnviv == NULL) {
		(void)eagl_missing(context, 0x3c0);
		return;
	}
	EAGL_ENTER(e, 0x3c0);
	eagl_p_glGetTexEnviv(a0, a1, a2);
	EAGL_LEAVE(e, 0x3c0);
}

static void
eagl_gen_glGetTexImage(void *context, GLenum a0, GLint a1, GLenum a2, GLenum a3, void * a4)
{
	struct eagl *e = context;
	if (eagl_p_glGetTexImage == NULL) {
		(void)eagl_missing(context, 0x3e0);
		return;
	}
	EAGL_ENTER(e, 0x3e0);
	eagl_p_glGetTexImage(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x3e0);
}

static void
eagl_gen_glGetTexLevelParameterfv(void *context, GLenum a0, GLint a1, GLenum a2, GLfloat * a3)
{
	struct eagl *e = context;
	if (eagl_p_glGetTexLevelParameterfv == NULL) {
		(void)eagl_missing(context, 0x3e8);
		return;
	}
	EAGL_ENTER(e, 0x3e8);
	eagl_p_glGetTexLevelParameterfv(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x3e8);
}

static void
eagl_gen_glGetTexLevelParameteriv(void *context, GLenum a0, GLint a1, GLenum a2, GLint * a3)
{
	struct eagl *e = context;
	if (eagl_p_glGetTexLevelParameteriv == NULL) {
		(void)eagl_missing(context, 0x3f0);
		return;
	}
	EAGL_ENTER(e, 0x3f0);
	eagl_p_glGetTexLevelParameteriv(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x3f0);
}

static void
eagl_gen_glGetTexParameterfv(void *context, GLenum a0, GLenum a1, GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetTexParameterfv == NULL) {
		(void)eagl_missing(context, 0x3f8);
		return;
	}
	EAGL_ENTER(e, 0x3f8);
	eagl_p_glGetTexParameterfv(a0, a1, a2);
	EAGL_LEAVE(e, 0x3f8);
}

static void
eagl_gen_glGetTexParameteriv(void *context, GLenum a0, GLenum a1, GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetTexParameteriv == NULL) {
		(void)eagl_missing(context, 0x400);
		return;
	}
	EAGL_ENTER(e, 0x400);
	eagl_p_glGetTexParameteriv(a0, a1, a2);
	EAGL_LEAVE(e, 0x400);
}

static void
eagl_gen_glHint(void *context, GLenum a0, GLenum a1)
{
	struct eagl *e = context;
	if (eagl_p_glHint == NULL) {
		(void)eagl_missing(context, 0x408);
		return;
	}
	EAGL_ENTER(e, 0x408);
	eagl_p_glHint(a0, a1);
	EAGL_LEAVE(e, 0x408);
}

static GLboolean
eagl_gen_glIsEnabled(void *context, GLenum a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glIsEnabled == NULL) {
		(void)eagl_missing(context, 0x480);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0x480);
	result = eagl_p_glIsEnabled(a0);
	EAGL_LEAVE(e, 0x480);
	return result;
}

static GLboolean
eagl_gen_glIsTexture(void *context, GLuint a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glIsTexture == NULL) {
		(void)eagl_missing(context, 0x490);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0x490);
	result = eagl_p_glIsTexture(a0);
	EAGL_LEAVE(e, 0x490);
	return result;
}

static void
eagl_gen_glLightModelf(void *context, GLenum a0, GLfloat a1)
{
	struct eagl *e = context;
	if (eagl_p_glLightModelf == NULL) {
		(void)eagl_missing(context, 0x498);
		return;
	}
	EAGL_ENTER(e, 0x498);
	eagl_p_glLightModelf(a0, a1);
	EAGL_LEAVE(e, 0x498);
}

static void
eagl_gen_glLightModelfv(void *context, GLenum a0, const GLfloat * a1)
{
	struct eagl *e = context;
	if (eagl_p_glLightModelfv == NULL) {
		(void)eagl_missing(context, 0x4a0);
		return;
	}
	EAGL_ENTER(e, 0x4a0);
	eagl_p_glLightModelfv(a0, a1);
	EAGL_LEAVE(e, 0x4a0);
}

static void
eagl_gen_glLightf(void *context, GLenum a0, GLenum a1, GLfloat a2)
{
	struct eagl *e = context;
	if (eagl_p_glLightf == NULL) {
		(void)eagl_missing(context, 0x4b8);
		return;
	}
	EAGL_ENTER(e, 0x4b8);
	eagl_p_glLightf(a0, a1, a2);
	EAGL_LEAVE(e, 0x4b8);
}

static void
eagl_gen_glLightfv(void *context, GLenum a0, GLenum a1, const GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glLightfv == NULL) {
		(void)eagl_missing(context, 0x4c0);
		return;
	}
	EAGL_ENTER(e, 0x4c0);
	eagl_p_glLightfv(a0, a1, a2);
	EAGL_LEAVE(e, 0x4c0);
}

static void
eagl_gen_glLineWidth(void *context, GLfloat a0)
{
	struct eagl *e = context;
	if (eagl_p_glLineWidth == NULL) {
		(void)eagl_missing(context, 0x4e0);
		return;
	}
	EAGL_ENTER(e, 0x4e0);
	eagl_p_glLineWidth(a0);
	EAGL_LEAVE(e, 0x4e0);
}

static void
eagl_gen_glLoadIdentity(void *context)
{
	struct eagl *e = context;
	if (eagl_p_glLoadIdentity == NULL) {
		(void)eagl_missing(context, 0x4f0);
		return;
	}
	EAGL_ENTER(e, 0x4f0);
	eagl_p_glLoadIdentity();
	EAGL_LEAVE(e, 0x4f0);
}

static void
eagl_gen_glLoadMatrixf(void *context, const GLfloat * a0)
{
	struct eagl *e = context;
	if (eagl_p_glLoadMatrixf == NULL) {
		(void)eagl_missing(context, 0x500);
		return;
	}
	EAGL_ENTER(e, 0x500);
	eagl_p_glLoadMatrixf(a0);
	EAGL_LEAVE(e, 0x500);
}

static void
eagl_gen_glLogicOp(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glLogicOp == NULL) {
		(void)eagl_missing(context, 0x510);
		return;
	}
	EAGL_ENTER(e, 0x510);
	eagl_p_glLogicOp(a0);
	EAGL_LEAVE(e, 0x510);
}

static void
eagl_gen_glMaterialf(void *context, GLenum a0, GLenum a1, GLfloat a2)
{
	struct eagl *e = context;
	if (eagl_p_glMaterialf == NULL) {
		(void)eagl_missing(context, 0x558);
		return;
	}
	EAGL_ENTER(e, 0x558);
	eagl_p_glMaterialf(a0, a1, a2);
	EAGL_LEAVE(e, 0x558);
}

static void
eagl_gen_glMaterialfv(void *context, GLenum a0, GLenum a1, const GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glMaterialfv == NULL) {
		(void)eagl_missing(context, 0x560);
		return;
	}
	EAGL_ENTER(e, 0x560);
	eagl_p_glMaterialfv(a0, a1, a2);
	EAGL_LEAVE(e, 0x560);
}

static void
eagl_gen_glMatrixMode(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glMatrixMode == NULL) {
		(void)eagl_missing(context, 0x578);
		return;
	}
	EAGL_ENTER(e, 0x578);
	eagl_p_glMatrixMode(a0);
	EAGL_LEAVE(e, 0x578);
}

static void
eagl_gen_glMultMatrixf(void *context, const GLfloat * a0)
{
	struct eagl *e = context;
	if (eagl_p_glMultMatrixf == NULL) {
		(void)eagl_missing(context, 0x588);
		return;
	}
	EAGL_ENTER(e, 0x588);
	eagl_p_glMultMatrixf(a0);
	EAGL_LEAVE(e, 0x588);
}

static void
eagl_gen_glNormal3f(void *context, GLfloat a0, GLfloat a1, GLfloat a2)
{
	struct eagl *e = context;
	if (eagl_p_glNormal3f == NULL) {
		(void)eagl_missing(context, 0x5b8);
		return;
	}
	EAGL_ENTER(e, 0x5b8);
	eagl_p_glNormal3f(a0, a1, a2);
	EAGL_LEAVE(e, 0x5b8);
}

static void
eagl_gen_glNormalPointer(void *context, GLenum a0, GLsizei a1, const void * a2)
{
	struct eagl *e = context;
	if (eagl_p_glNormalPointer == NULL) {
		(void)eagl_missing(context, 0x5e8);
		return;
	}
	EAGL_ENTER(e, 0x5e8);
	eagl_p_glNormalPointer(a0, a1, a2);
	EAGL_LEAVE(e, 0x5e8);
}

static void
eagl_gen_glPixelStorei(void *context, GLenum a0, GLint a1)
{
	struct eagl *e = context;
	if (eagl_p_glPixelStorei == NULL) {
		(void)eagl_missing(context, 0x620);
		return;
	}
	EAGL_ENTER(e, 0x620);
	eagl_p_glPixelStorei(a0, a1);
	EAGL_LEAVE(e, 0x620);
}

static void
eagl_gen_glPointSize(void *context, GLfloat a0)
{
	struct eagl *e = context;
	if (eagl_p_glPointSize == NULL) {
		(void)eagl_missing(context, 0x640);
		return;
	}
	EAGL_ENTER(e, 0x640);
	eagl_p_glPointSize(a0);
	EAGL_LEAVE(e, 0x640);
}

static void
eagl_gen_glPolygonOffset(void *context, GLfloat a0, GLfloat a1)
{
	struct eagl *e = context;
	if (eagl_p_glPolygonOffset == NULL) {
		(void)eagl_missing(context, 0x650);
		return;
	}
	EAGL_ENTER(e, 0x650);
	eagl_p_glPolygonOffset(a0, a1);
	EAGL_LEAVE(e, 0x650);
}

static void
eagl_gen_glPopMatrix(void *context)
{
	struct eagl *e = context;
	if (eagl_p_glPopMatrix == NULL) {
		(void)eagl_missing(context, 0x670);
		return;
	}
	EAGL_ENTER(e, 0x670);
	eagl_p_glPopMatrix();
	EAGL_LEAVE(e, 0x670);
}

static void
eagl_gen_glPushMatrix(void *context)
{
	struct eagl *e = context;
	if (eagl_p_glPushMatrix == NULL) {
		(void)eagl_missing(context, 0x698);
		return;
	}
	EAGL_ENTER(e, 0x698);
	eagl_p_glPushMatrix();
	EAGL_LEAVE(e, 0x698);
}

static void
eagl_gen_glReadBuffer(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glReadBuffer == NULL) {
		(void)eagl_missing(context, 0x768);
		return;
	}
	EAGL_ENTER(e, 0x768);
	eagl_p_glReadBuffer(a0);
	EAGL_LEAVE(e, 0x768);
}

static void
eagl_gen_glReadPixels(void *context, GLint a0, GLint a1, GLsizei a2, GLsizei a3, GLenum a4, GLenum a5, void * a6)
{
	struct eagl *e = context;
	if (eagl_p_glReadPixels == NULL) {
		(void)eagl_missing(context, 0x770);
		return;
	}
	EAGL_ENTER(e, 0x770);
	eagl_p_glReadPixels(a0, a1, a2, a3, a4, a5, a6);
	EAGL_LEAVE(e, 0x770);
}

static void
eagl_gen_glRotatef(void *context, GLfloat a0, GLfloat a1, GLfloat a2, GLfloat a3)
{
	struct eagl *e = context;
	if (eagl_p_glRotatef == NULL) {
		(void)eagl_missing(context, 0x7c8);
		return;
	}
	EAGL_ENTER(e, 0x7c8);
	eagl_p_glRotatef(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x7c8);
}

static void
eagl_gen_glScalef(void *context, GLfloat a0, GLfloat a1, GLfloat a2)
{
	struct eagl *e = context;
	if (eagl_p_glScalef == NULL) {
		(void)eagl_missing(context, 0x7d8);
		return;
	}
	EAGL_ENTER(e, 0x7d8);
	eagl_p_glScalef(a0, a1, a2);
	EAGL_LEAVE(e, 0x7d8);
}

static void
eagl_gen_glScissor(void *context, GLint a0, GLint a1, GLsizei a2, GLsizei a3)
{
	struct eagl *e = context;
	if (eagl_p_glScissor == NULL) {
		(void)eagl_missing(context, 0x7e0);
		return;
	}
	EAGL_ENTER(e, 0x7e0);
	eagl_p_glScissor(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x7e0);
}

static void
eagl_gen_glShadeModel(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glShadeModel == NULL) {
		(void)eagl_missing(context, 0x7f0);
		return;
	}
	EAGL_ENTER(e, 0x7f0);
	eagl_p_glShadeModel(a0);
	EAGL_LEAVE(e, 0x7f0);
}

static void
eagl_gen_glStencilFunc(void *context, GLenum a0, GLint a1, GLuint a2)
{
	struct eagl *e = context;
	if (eagl_p_glStencilFunc == NULL) {
		(void)eagl_missing(context, 0x7f8);
		return;
	}
	EAGL_ENTER(e, 0x7f8);
	eagl_p_glStencilFunc(a0, a1, a2);
	EAGL_LEAVE(e, 0x7f8);
}

static void
eagl_gen_glStencilMask(void *context, GLuint a0)
{
	struct eagl *e = context;
	if (eagl_p_glStencilMask == NULL) {
		(void)eagl_missing(context, 0x800);
		return;
	}
	EAGL_ENTER(e, 0x800);
	eagl_p_glStencilMask(a0);
	EAGL_LEAVE(e, 0x800);
}

static void
eagl_gen_glStencilOp(void *context, GLenum a0, GLenum a1, GLenum a2)
{
	struct eagl *e = context;
	if (eagl_p_glStencilOp == NULL) {
		(void)eagl_missing(context, 0x808);
		return;
	}
	EAGL_ENTER(e, 0x808);
	eagl_p_glStencilOp(a0, a1, a2);
	EAGL_LEAVE(e, 0x808);
}

static void
eagl_gen_glTexCoordPointer(void *context, GLint a0, GLenum a1, GLsizei a2, const void * a3)
{
	struct eagl *e = context;
	if (eagl_p_glTexCoordPointer == NULL) {
		(void)eagl_missing(context, 0x910);
		return;
	}
	EAGL_ENTER(e, 0x910);
	eagl_p_glTexCoordPointer(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x910);
}

static void
eagl_gen_glTexEnvf(void *context, GLenum a0, GLenum a1, GLfloat a2)
{
	struct eagl *e = context;
	if (eagl_p_glTexEnvf == NULL) {
		(void)eagl_missing(context, 0x918);
		return;
	}
	EAGL_ENTER(e, 0x918);
	eagl_p_glTexEnvf(a0, a1, a2);
	EAGL_LEAVE(e, 0x918);
}

static void
eagl_gen_glTexEnvfv(void *context, GLenum a0, GLenum a1, const GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glTexEnvfv == NULL) {
		(void)eagl_missing(context, 0x920);
		return;
	}
	EAGL_ENTER(e, 0x920);
	eagl_p_glTexEnvfv(a0, a1, a2);
	EAGL_LEAVE(e, 0x920);
}

static void
eagl_gen_glTexEnvi(void *context, GLenum a0, GLenum a1, GLint a2)
{
	struct eagl *e = context;
	if (eagl_p_glTexEnvi == NULL) {
		(void)eagl_missing(context, 0x928);
		return;
	}
	EAGL_ENTER(e, 0x928);
	eagl_p_glTexEnvi(a0, a1, a2);
	EAGL_LEAVE(e, 0x928);
}

static void
eagl_gen_glTexEnviv(void *context, GLenum a0, GLenum a1, const GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glTexEnviv == NULL) {
		(void)eagl_missing(context, 0x930);
		return;
	}
	EAGL_ENTER(e, 0x930);
	eagl_p_glTexEnviv(a0, a1, a2);
	EAGL_LEAVE(e, 0x930);
}

static void
eagl_gen_glTexParameterf(void *context, GLenum a0, GLenum a1, GLfloat a2)
{
	struct eagl *e = context;
	if (eagl_p_glTexParameterf == NULL) {
		(void)eagl_missing(context, 0x978);
		return;
	}
	EAGL_ENTER(e, 0x978);
	eagl_p_glTexParameterf(a0, a1, a2);
	EAGL_LEAVE(e, 0x978);
}

static void
eagl_gen_glTexParameterfv(void *context, GLenum a0, GLenum a1, const GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glTexParameterfv == NULL) {
		(void)eagl_missing(context, 0x980);
		return;
	}
	EAGL_ENTER(e, 0x980);
	eagl_p_glTexParameterfv(a0, a1, a2);
	EAGL_LEAVE(e, 0x980);
}

static void
eagl_gen_glTexParameteri(void *context, GLenum a0, GLenum a1, GLint a2)
{
	struct eagl *e = context;
	if (eagl_p_glTexParameteri == NULL) {
		(void)eagl_missing(context, 0x988);
		return;
	}
	EAGL_ENTER(e, 0x988);
	eagl_p_glTexParameteri(a0, a1, a2);
	EAGL_LEAVE(e, 0x988);
}

static void
eagl_gen_glTexParameteriv(void *context, GLenum a0, GLenum a1, const GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glTexParameteriv == NULL) {
		(void)eagl_missing(context, 0x990);
		return;
	}
	EAGL_ENTER(e, 0x990);
	eagl_p_glTexParameteriv(a0, a1, a2);
	EAGL_LEAVE(e, 0x990);
}

static void
eagl_gen_glTranslatef(void *context, GLfloat a0, GLfloat a1, GLfloat a2)
{
	struct eagl *e = context;
	if (eagl_p_glTranslatef == NULL) {
		(void)eagl_missing(context, 0x9b0);
		return;
	}
	EAGL_ENTER(e, 0x9b0);
	eagl_p_glTranslatef(a0, a1, a2);
	EAGL_LEAVE(e, 0x9b0);
}

static void
eagl_gen_glVertexPointer(void *context, GLint a0, GLenum a1, GLsizei a2, const void * a3)
{
	struct eagl *e = context;
	if (eagl_p_glVertexPointer == NULL) {
		(void)eagl_missing(context, 0xa78);
		return;
	}
	EAGL_ENTER(e, 0xa78);
	eagl_p_glVertexPointer(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0xa78);
}

static void
eagl_gen_glViewport(void *context, GLint a0, GLint a1, GLsizei a2, GLsizei a3)
{
	struct eagl *e = context;
	if (eagl_p_glViewport == NULL) {
		(void)eagl_missing(context, 0xa80);
		return;
	}
	EAGL_ENTER(e, 0xa80);
	eagl_p_glViewport(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0xa80);
}

static void
eagl_gen_glBlendFuncSeparate(void *context, GLenum a0, GLenum a1, GLenum a2, GLenum a3)
{
	struct eagl *e = context;
	if (eagl_p_glBlendFuncSeparate == NULL) {
		(void)eagl_missing(context, 0xa88);
		return;
	}
	EAGL_ENTER(e, 0xa88);
	eagl_p_glBlendFuncSeparate(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0xa88);
}

static void
eagl_gen_glBlendColor(void *context, GLfloat a0, GLfloat a1, GLfloat a2, GLfloat a3)
{
	struct eagl *e = context;
	if (eagl_p_glBlendColor == NULL) {
		(void)eagl_missing(context, 0xa90);
		return;
	}
	EAGL_ENTER(e, 0xa90);
	eagl_p_glBlendColor(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0xa90);
}

static void
eagl_gen_glBlendEquation(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glBlendEquation == NULL) {
		(void)eagl_missing(context, 0xa98);
		return;
	}
	EAGL_ENTER(e, 0xa98);
	eagl_p_glBlendEquation(a0);
	EAGL_LEAVE(e, 0xa98);
}

static void
eagl_gen_glClientActiveTexture(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glClientActiveTexture == NULL) {
		(void)eagl_missing(context, 0xab0);
		return;
	}
	EAGL_ENTER(e, 0xab0);
	eagl_p_glClientActiveTexture(a0);
	EAGL_LEAVE(e, 0xab0);
}

static void
eagl_gen_glMultiTexCoord4f(void *context, GLenum a0, GLfloat a1, GLfloat a2, GLfloat a3, GLfloat a4)
{
	struct eagl *e = context;
	if (eagl_p_glMultiTexCoord4f == NULL) {
		(void)eagl_missing(context, 0xb90);
		return;
	}
	EAGL_ENTER(e, 0xb90);
	eagl_p_glMultiTexCoord4f(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0xb90);
}

static void
eagl_gen_glCompressedTexImage3D(void *context, GLenum a0, GLint a1, GLenum a2, GLsizei a3, GLsizei a4, GLsizei a5, GLint a6, GLsizei a7, const void * a8)
{
	struct eagl *e = context;
	if (eagl_p_glCompressedTexImage3D == NULL) {
		(void)eagl_missing(context, 0xbe0);
		return;
	}
	EAGL_ENTER(e, 0xbe0);
	eagl_p_glCompressedTexImage3D(a0, a1, a2, a3, a4, a5, a6, a7, a8);
	EAGL_LEAVE(e, 0xbe0);
}

static void
eagl_gen_glCompressedTexSubImage3D(void *context, GLenum a0, GLint a1, GLint a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6, GLsizei a7, GLenum a8, GLsizei a9, const void * a10)
{
	struct eagl *e = context;
	if (eagl_p_glCompressedTexSubImage3D == NULL) {
		(void)eagl_missing(context, 0xbf8);
		return;
	}
	EAGL_ENTER(e, 0xbf8);
	eagl_p_glCompressedTexSubImage3D(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	EAGL_LEAVE(e, 0xbf8);
}

static void
eagl_gen_glCompressedTexSubImage2D(void *context, GLenum a0, GLint a1, GLint a2, GLint a3, GLsizei a4, GLsizei a5, GLenum a6, GLsizei a7, const void * a8)
{
	struct eagl *e = context;
	if (eagl_p_glCompressedTexSubImage2D == NULL) {
		(void)eagl_missing(context, 0xc00);
		return;
	}
	EAGL_ENTER(e, 0xc00);
	eagl_p_glCompressedTexSubImage2D(a0, a1, a2, a3, a4, a5, a6, a7, a8);
	EAGL_LEAVE(e, 0xc00);
}

static void
eagl_gen_glDrawRangeElements(void *context, GLenum a0, GLuint a1, GLuint a2, GLsizei a3, GLenum a4, const void * a5)
{
	struct eagl *e = context;
	if (eagl_p_glDrawRangeElements == NULL) {
		(void)eagl_missing(context, 0xcb0);
		return;
	}
	EAGL_ENTER(e, 0xcb0);
	eagl_p_glDrawRangeElements(a0, a1, a2, a3, a4, a5);
	EAGL_LEAVE(e, 0xcb0);
}

static void
eagl_gen_glTexImage3D(void *context, GLenum a0, GLint a1, GLint a2, GLsizei a3, GLsizei a4, GLsizei a5, GLint a6, GLenum a7, GLenum a8, const void * a9)
{
	struct eagl *e = context;
	if (eagl_p_glTexImage3D == NULL) {
		(void)eagl_missing(context, 0xdb8);
		return;
	}
	EAGL_ENTER(e, 0xdb8);
	eagl_p_glTexImage3D(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	EAGL_LEAVE(e, 0xdb8);
}

static void
eagl_gen_glTexSubImage3D(void *context, GLenum a0, GLint a1, GLint a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6, GLsizei a7, GLenum a8, GLenum a9, const void * a10)
{
	struct eagl *e = context;
	if (eagl_p_glTexSubImage3D == NULL) {
		(void)eagl_missing(context, 0xdc0);
		return;
	}
	EAGL_ENTER(e, 0xdc0);
	eagl_p_glTexSubImage3D(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	EAGL_LEAVE(e, 0xdc0);
}

static void
eagl_gen_glCopyTexSubImage3D(void *context, GLenum a0, GLint a1, GLint a2, GLint a3, GLint a4, GLint a5, GLint a6, GLsizei a7, GLsizei a8)
{
	struct eagl *e = context;
	if (eagl_p_glCopyTexSubImage3D == NULL) {
		(void)eagl_missing(context, 0xdc8);
		return;
	}
	EAGL_ENTER(e, 0xdc8);
	eagl_p_glCopyTexSubImage3D(a0, a1, a2, a3, a4, a5, a6, a7, a8);
	EAGL_LEAVE(e, 0xdc8);
}

static void
eagl_gen_glGetUniformIndices(void *context, GLuint a0, GLsizei a1, const GLchar *const* a2, GLuint * a3)
{
	struct eagl *e = context;
	if (eagl_p_glGetUniformIndices == NULL) {
		(void)eagl_missing(context, 0xdd0);
		return;
	}
	EAGL_ENTER(e, 0xdd0);
	eagl_p_glGetUniformIndices(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0xdd0);
}

static void
eagl_gen_glGetActiveUniformsiv(void *context, GLuint a0, GLsizei a1, const GLuint * a2, GLenum a3, GLint * a4)
{
	struct eagl *e = context;
	if (eagl_p_glGetActiveUniformsiv == NULL) {
		(void)eagl_missing(context, 0xdd8);
		return;
	}
	EAGL_ENTER(e, 0xdd8);
	eagl_p_glGetActiveUniformsiv(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0xdd8);
}

static GLuint
eagl_gen_glGetUniformBlockIndex(void *context, GLuint a0, const GLchar * a1)
{
	struct eagl *e = context;
	GLuint result;
	if (eagl_p_glGetUniformBlockIndex == NULL) {
		(void)eagl_missing(context, 0xde8);
		return (GLuint)0;
	}
	EAGL_ENTER(e, 0xde8);
	result = eagl_p_glGetUniformBlockIndex(a0, a1);
	EAGL_LEAVE(e, 0xde8);
	return result;
}

static void
eagl_gen_glGetActiveUniformBlockiv(void *context, GLuint a0, GLuint a1, GLenum a2, GLint * a3)
{
	struct eagl *e = context;
	if (eagl_p_glGetActiveUniformBlockiv == NULL) {
		(void)eagl_missing(context, 0xdf0);
		return;
	}
	EAGL_ENTER(e, 0xdf0);
	eagl_p_glGetActiveUniformBlockiv(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0xdf0);
}

static void
eagl_gen_glGetActiveUniformBlockName(void *context, GLuint a0, GLuint a1, GLsizei a2, GLsizei * a3, GLchar * a4)
{
	struct eagl *e = context;
	if (eagl_p_glGetActiveUniformBlockName == NULL) {
		(void)eagl_missing(context, 0xdf8);
		return;
	}
	EAGL_ENTER(e, 0xdf8);
	eagl_p_glGetActiveUniformBlockName(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0xdf8);
}

static void
eagl_gen_glUniformBlockBinding(void *context, GLuint a0, GLuint a1, GLuint a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniformBlockBinding == NULL) {
		(void)eagl_missing(context, 0xe00);
		return;
	}
	EAGL_ENTER(e, 0xe00);
	eagl_p_glUniformBlockBinding(a0, a1, a2);
	EAGL_LEAVE(e, 0xe00);
}

static void
eagl_gen_glBlendEquationSeparate(void *context, GLenum a0, GLenum a1)
{
	struct eagl *e = context;
	if (eagl_p_glBlendEquationSeparate == NULL) {
		(void)eagl_missing(context, 0xe58);
		return;
	}
	EAGL_ENTER(e, 0xe58);
	eagl_p_glBlendEquationSeparate(a0, a1);
	EAGL_LEAVE(e, 0xe58);
}

static void
eagl_gen_glSampleCoverage(void *context, GLfloat a0, GLboolean a1)
{
	struct eagl *e = context;
	if (eagl_p_glSampleCoverage == NULL) {
		(void)eagl_missing(context, 0xe60);
		return;
	}
	EAGL_ENTER(e, 0xe60);
	eagl_p_glSampleCoverage(a0, a1);
	EAGL_LEAVE(e, 0xe60);
}

static void
eagl_gen_glGenFencesAPPLE(void *context, GLsizei a0, GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGenFencesAPPLE == NULL) {
		(void)eagl_missing(context, 0xe80);
		return;
	}
	EAGL_ENTER(e, 0xe80);
	eagl_p_glGenFencesAPPLE(a0, a1);
	EAGL_LEAVE(e, 0xe80);
}

static void
eagl_gen_glDeleteFencesAPPLE(void *context, GLsizei a0, const GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glDeleteFencesAPPLE == NULL) {
		(void)eagl_missing(context, 0xe88);
		return;
	}
	EAGL_ENTER(e, 0xe88);
	eagl_p_glDeleteFencesAPPLE(a0, a1);
	EAGL_LEAVE(e, 0xe88);
}

static void
eagl_gen_glSetFenceAPPLE(void *context, GLuint a0)
{
	struct eagl *e = context;
	if (eagl_p_glSetFenceAPPLE == NULL) {
		(void)eagl_missing(context, 0xe90);
		return;
	}
	EAGL_ENTER(e, 0xe90);
	eagl_p_glSetFenceAPPLE(a0);
	EAGL_LEAVE(e, 0xe90);
}

static GLboolean
eagl_gen_glIsFenceAPPLE(void *context, GLuint a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glIsFenceAPPLE == NULL) {
		(void)eagl_missing(context, 0xe98);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0xe98);
	result = eagl_p_glIsFenceAPPLE(a0);
	EAGL_LEAVE(e, 0xe98);
	return result;
}

static GLboolean
eagl_gen_glTestFenceAPPLE(void *context, GLuint a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glTestFenceAPPLE == NULL) {
		(void)eagl_missing(context, 0xea0);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0xea0);
	result = eagl_p_glTestFenceAPPLE(a0);
	EAGL_LEAVE(e, 0xea0);
	return result;
}

static void
eagl_gen_glFinishFenceAPPLE(void *context, GLuint a0)
{
	struct eagl *e = context;
	if (eagl_p_glFinishFenceAPPLE == NULL) {
		(void)eagl_missing(context, 0xea8);
		return;
	}
	EAGL_ENTER(e, 0xea8);
	eagl_p_glFinishFenceAPPLE(a0);
	EAGL_LEAVE(e, 0xea8);
}

static GLboolean
eagl_gen_glTestObjectAPPLE(void *context, GLenum a0, GLuint a1)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glTestObjectAPPLE == NULL) {
		(void)eagl_missing(context, 0xeb0);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0xeb0);
	result = eagl_p_glTestObjectAPPLE(a0, a1);
	EAGL_LEAVE(e, 0xeb0);
	return result;
}

static void
eagl_gen_glVertexAttrib1f(void *context, GLuint a0, GLfloat a1)
{
	struct eagl *e = context;
	if (eagl_p_glVertexAttrib1f == NULL) {
		(void)eagl_missing(context, 0xee8);
		return;
	}
	EAGL_ENTER(e, 0xee8);
	eagl_p_glVertexAttrib1f(a0, a1);
	EAGL_LEAVE(e, 0xee8);
}

static void
eagl_gen_glVertexAttrib2f(void *context, GLuint a0, GLfloat a1, GLfloat a2)
{
	struct eagl *e = context;
	if (eagl_p_glVertexAttrib2f == NULL) {
		(void)eagl_missing(context, 0xf00);
		return;
	}
	EAGL_ENTER(e, 0xf00);
	eagl_p_glVertexAttrib2f(a0, a1, a2);
	EAGL_LEAVE(e, 0xf00);
}

static void
eagl_gen_glVertexAttrib3f(void *context, GLuint a0, GLfloat a1, GLfloat a2, GLfloat a3)
{
	struct eagl *e = context;
	if (eagl_p_glVertexAttrib3f == NULL) {
		(void)eagl_missing(context, 0xf18);
		return;
	}
	EAGL_ENTER(e, 0xf18);
	eagl_p_glVertexAttrib3f(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0xf18);
}

static void
eagl_gen_glVertexAttrib4f(void *context, GLuint a0, GLfloat a1, GLfloat a2, GLfloat a3, GLfloat a4)
{
	struct eagl *e = context;
	if (eagl_p_glVertexAttrib4f == NULL) {
		(void)eagl_missing(context, 0xf30);
		return;
	}
	EAGL_ENTER(e, 0xf30);
	eagl_p_glVertexAttrib4f(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0xf30);
}

static void
eagl_gen_glVertexAttrib1fv(void *context, GLuint a0, const GLfloat * a1)
{
	struct eagl *e = context;
	if (eagl_p_glVertexAttrib1fv == NULL) {
		(void)eagl_missing(context, 0xf50);
		return;
	}
	EAGL_ENTER(e, 0xf50);
	eagl_p_glVertexAttrib1fv(a0, a1);
	EAGL_LEAVE(e, 0xf50);
}

static void
eagl_gen_glVertexAttrib2fv(void *context, GLuint a0, const GLfloat * a1)
{
	struct eagl *e = context;
	if (eagl_p_glVertexAttrib2fv == NULL) {
		(void)eagl_missing(context, 0xf68);
		return;
	}
	EAGL_ENTER(e, 0xf68);
	eagl_p_glVertexAttrib2fv(a0, a1);
	EAGL_LEAVE(e, 0xf68);
}

static void
eagl_gen_glVertexAttrib3fv(void *context, GLuint a0, const GLfloat * a1)
{
	struct eagl *e = context;
	if (eagl_p_glVertexAttrib3fv == NULL) {
		(void)eagl_missing(context, 0xf80);
		return;
	}
	EAGL_ENTER(e, 0xf80);
	eagl_p_glVertexAttrib3fv(a0, a1);
	EAGL_LEAVE(e, 0xf80);
}

static void
eagl_gen_glVertexAttrib4fv(void *context, GLuint a0, const GLfloat * a1)
{
	struct eagl *e = context;
	if (eagl_p_glVertexAttrib4fv == NULL) {
		(void)eagl_missing(context, 0xfc0);
		return;
	}
	EAGL_ENTER(e, 0xfc0);
	eagl_p_glVertexAttrib4fv(a0, a1);
	EAGL_LEAVE(e, 0xfc0);
}

static void
eagl_gen_glEnableVertexAttribArray(void *context, GLuint a0)
{
	struct eagl *e = context;
	if (eagl_p_glEnableVertexAttribArray == NULL) {
		(void)eagl_missing(context, 0x1008);
		return;
	}
	EAGL_ENTER(e, 0x1008);
	eagl_p_glEnableVertexAttribArray(a0);
	EAGL_LEAVE(e, 0x1008);
}

static void
eagl_gen_glDisableVertexAttribArray(void *context, GLuint a0)
{
	struct eagl *e = context;
	if (eagl_p_glDisableVertexAttribArray == NULL) {
		(void)eagl_missing(context, 0x1010);
		return;
	}
	EAGL_ENTER(e, 0x1010);
	eagl_p_glDisableVertexAttribArray(a0);
	EAGL_LEAVE(e, 0x1010);
}

static void
eagl_gen_glGetVertexAttribfv(void *context, GLuint a0, GLenum a1, GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetVertexAttribfv == NULL) {
		(void)eagl_missing(context, 0x1020);
		return;
	}
	EAGL_ENTER(e, 0x1020);
	eagl_p_glGetVertexAttribfv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1020);
}

static void
eagl_gen_glGetVertexAttribiv(void *context, GLuint a0, GLenum a1, GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetVertexAttribiv == NULL) {
		(void)eagl_missing(context, 0x1028);
		return;
	}
	EAGL_ENTER(e, 0x1028);
	eagl_p_glGetVertexAttribiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1028);
}

static void
eagl_gen_glGetVertexAttribPointerv(void *context, GLuint a0, GLenum a1, void ** a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetVertexAttribPointerv == NULL) {
		(void)eagl_missing(context, 0x1030);
		return;
	}
	EAGL_ENTER(e, 0x1030);
	eagl_p_glGetVertexAttribPointerv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1030);
}

static void
eagl_gen_glPointParameterf(void *context, GLenum a0, GLfloat a1)
{
	struct eagl *e = context;
	if (eagl_p_glPointParameterf == NULL) {
		(void)eagl_missing(context, 0x10e8);
		return;
	}
	EAGL_ENTER(e, 0x10e8);
	eagl_p_glPointParameterf(a0, a1);
	EAGL_LEAVE(e, 0x10e8);
}

static void
eagl_gen_glPointParameterfv(void *context, GLenum a0, const GLfloat * a1)
{
	struct eagl *e = context;
	if (eagl_p_glPointParameterfv == NULL) {
		(void)eagl_missing(context, 0x10f0);
		return;
	}
	EAGL_ENTER(e, 0x10f0);
	eagl_p_glPointParameterfv(a0, a1);
	EAGL_LEAVE(e, 0x10f0);
}

static void
eagl_gen_glStencilOpSeparate(void *context, GLenum a0, GLenum a1, GLenum a2, GLenum a3)
{
	struct eagl *e = context;
	if (eagl_p_glStencilOpSeparate == NULL) {
		(void)eagl_missing(context, 0x1258);
		return;
	}
	EAGL_ENTER(e, 0x1258);
	eagl_p_glStencilOpSeparate(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1258);
}

static void
eagl_gen_glDetachShader(void *context, GLuint a0, GLuint a1)
{
	struct eagl *e = context;
	if (eagl_p_glDetachShader == NULL) {
		(void)eagl_missing(context, 0x1290);
		return;
	}
	EAGL_ENTER(e, 0x1290);
	eagl_p_glDetachShader(a0, a1);
	EAGL_LEAVE(e, 0x1290);
}

static GLuint
eagl_gen_glCreateProgram(void *context)
{
	struct eagl *e = context;
	GLuint result;
	if (eagl_p_glCreateProgram == NULL) {
		(void)eagl_missing(context, 0x12b0);
		return (GLuint)0;
	}
	EAGL_ENTER(e, 0x12b0);
	result = eagl_p_glCreateProgram();
	EAGL_LEAVE(e, 0x12b0);
	return result;
}

static void
eagl_gen_glAttachShader(void *context, GLuint a0, GLuint a1)
{
	struct eagl *e = context;
	if (eagl_p_glAttachShader == NULL) {
		(void)eagl_missing(context, 0x12b8);
		return;
	}
	EAGL_ENTER(e, 0x12b8);
	eagl_p_glAttachShader(a0, a1);
	EAGL_LEAVE(e, 0x12b8);
}

static void
eagl_gen_glValidateProgram(void *context, GLuint a0)
{
	struct eagl *e = context;
	if (eagl_p_glValidateProgram == NULL) {
		(void)eagl_missing(context, 0x12d0);
		return;
	}
	EAGL_ENTER(e, 0x12d0);
	eagl_p_glValidateProgram(a0);
	EAGL_LEAVE(e, 0x12d0);
}

static void
eagl_gen_glUniform1f(void *context, GLint a0, GLfloat a1)
{
	struct eagl *e = context;
	if (eagl_p_glUniform1f == NULL) {
		(void)eagl_missing(context, 0x12d8);
		return;
	}
	EAGL_ENTER(e, 0x12d8);
	eagl_p_glUniform1f(a0, a1);
	EAGL_LEAVE(e, 0x12d8);
}

static void
eagl_gen_glUniform2f(void *context, GLint a0, GLfloat a1, GLfloat a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform2f == NULL) {
		(void)eagl_missing(context, 0x12e0);
		return;
	}
	EAGL_ENTER(e, 0x12e0);
	eagl_p_glUniform2f(a0, a1, a2);
	EAGL_LEAVE(e, 0x12e0);
}

static void
eagl_gen_glUniform3f(void *context, GLint a0, GLfloat a1, GLfloat a2, GLfloat a3)
{
	struct eagl *e = context;
	if (eagl_p_glUniform3f == NULL) {
		(void)eagl_missing(context, 0x12e8);
		return;
	}
	EAGL_ENTER(e, 0x12e8);
	eagl_p_glUniform3f(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x12e8);
}

static void
eagl_gen_glUniform4f(void *context, GLint a0, GLfloat a1, GLfloat a2, GLfloat a3, GLfloat a4)
{
	struct eagl *e = context;
	if (eagl_p_glUniform4f == NULL) {
		(void)eagl_missing(context, 0x12f0);
		return;
	}
	EAGL_ENTER(e, 0x12f0);
	eagl_p_glUniform4f(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x12f0);
}

static void
eagl_gen_glUniform1i(void *context, GLint a0, GLint a1)
{
	struct eagl *e = context;
	if (eagl_p_glUniform1i == NULL) {
		(void)eagl_missing(context, 0x12f8);
		return;
	}
	EAGL_ENTER(e, 0x12f8);
	eagl_p_glUniform1i(a0, a1);
	EAGL_LEAVE(e, 0x12f8);
}

static void
eagl_gen_glUniform2i(void *context, GLint a0, GLint a1, GLint a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform2i == NULL) {
		(void)eagl_missing(context, 0x1300);
		return;
	}
	EAGL_ENTER(e, 0x1300);
	eagl_p_glUniform2i(a0, a1, a2);
	EAGL_LEAVE(e, 0x1300);
}

static void
eagl_gen_glUniform3i(void *context, GLint a0, GLint a1, GLint a2, GLint a3)
{
	struct eagl *e = context;
	if (eagl_p_glUniform3i == NULL) {
		(void)eagl_missing(context, 0x1308);
		return;
	}
	EAGL_ENTER(e, 0x1308);
	eagl_p_glUniform3i(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1308);
}

static void
eagl_gen_glUniform4i(void *context, GLint a0, GLint a1, GLint a2, GLint a3, GLint a4)
{
	struct eagl *e = context;
	if (eagl_p_glUniform4i == NULL) {
		(void)eagl_missing(context, 0x1310);
		return;
	}
	EAGL_ENTER(e, 0x1310);
	eagl_p_glUniform4i(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1310);
}

static void
eagl_gen_glUniform1fv(void *context, GLint a0, GLsizei a1, const GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform1fv == NULL) {
		(void)eagl_missing(context, 0x1318);
		return;
	}
	EAGL_ENTER(e, 0x1318);
	eagl_p_glUniform1fv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1318);
}

static void
eagl_gen_glUniform2fv(void *context, GLint a0, GLsizei a1, const GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform2fv == NULL) {
		(void)eagl_missing(context, 0x1320);
		return;
	}
	EAGL_ENTER(e, 0x1320);
	eagl_p_glUniform2fv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1320);
}

static void
eagl_gen_glUniform3fv(void *context, GLint a0, GLsizei a1, const GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform3fv == NULL) {
		(void)eagl_missing(context, 0x1328);
		return;
	}
	EAGL_ENTER(e, 0x1328);
	eagl_p_glUniform3fv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1328);
}

static void
eagl_gen_glUniform4fv(void *context, GLint a0, GLsizei a1, const GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform4fv == NULL) {
		(void)eagl_missing(context, 0x1330);
		return;
	}
	EAGL_ENTER(e, 0x1330);
	eagl_p_glUniform4fv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1330);
}

static void
eagl_gen_glUniform1iv(void *context, GLint a0, GLsizei a1, const GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform1iv == NULL) {
		(void)eagl_missing(context, 0x1338);
		return;
	}
	EAGL_ENTER(e, 0x1338);
	eagl_p_glUniform1iv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1338);
}

static void
eagl_gen_glUniform2iv(void *context, GLint a0, GLsizei a1, const GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform2iv == NULL) {
		(void)eagl_missing(context, 0x1340);
		return;
	}
	EAGL_ENTER(e, 0x1340);
	eagl_p_glUniform2iv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1340);
}

static void
eagl_gen_glUniform3iv(void *context, GLint a0, GLsizei a1, const GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform3iv == NULL) {
		(void)eagl_missing(context, 0x1348);
		return;
	}
	EAGL_ENTER(e, 0x1348);
	eagl_p_glUniform3iv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1348);
}

static void
eagl_gen_glUniform4iv(void *context, GLint a0, GLsizei a1, const GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform4iv == NULL) {
		(void)eagl_missing(context, 0x1350);
		return;
	}
	EAGL_ENTER(e, 0x1350);
	eagl_p_glUniform4iv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1350);
}

static void
eagl_gen_glUniformMatrix2fv(void *context, GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3)
{
	struct eagl *e = context;
	if (eagl_p_glUniformMatrix2fv == NULL) {
		(void)eagl_missing(context, 0x1358);
		return;
	}
	EAGL_ENTER(e, 0x1358);
	eagl_p_glUniformMatrix2fv(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1358);
}

static void
eagl_gen_glUniformMatrix3fv(void *context, GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3)
{
	struct eagl *e = context;
	if (eagl_p_glUniformMatrix3fv == NULL) {
		(void)eagl_missing(context, 0x1360);
		return;
	}
	EAGL_ENTER(e, 0x1360);
	eagl_p_glUniformMatrix3fv(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1360);
}

static GLint
eagl_gen_glGetUniformLocation(void *context, GLuint a0, const GLchar * a1)
{
	struct eagl *e = context;
	GLint result;
	if (eagl_p_glGetUniformLocation == NULL) {
		(void)eagl_missing(context, 0x1390);
		return (GLint)0;
	}
	EAGL_ENTER(e, 0x1390);
	result = eagl_p_glGetUniformLocation(a0, a1);
	EAGL_LEAVE(e, 0x1390);
	return result;
}

static void
eagl_gen_glGetActiveUniform(void *context, GLuint a0, GLuint a1, GLsizei a2, GLsizei * a3, GLint * a4, GLenum * a5, GLchar * a6)
{
	struct eagl *e = context;
	if (eagl_p_glGetActiveUniform == NULL) {
		(void)eagl_missing(context, 0x1398);
		return;
	}
	EAGL_ENTER(e, 0x1398);
	eagl_p_glGetActiveUniform(a0, a1, a2, a3, a4, a5, a6);
	EAGL_LEAVE(e, 0x1398);
}

static void
eagl_gen_glGetUniformfv(void *context, GLuint a0, GLint a1, GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetUniformfv == NULL) {
		(void)eagl_missing(context, 0x13a0);
		return;
	}
	EAGL_ENTER(e, 0x13a0);
	eagl_p_glGetUniformfv(a0, a1, a2);
	EAGL_LEAVE(e, 0x13a0);
}

static void
eagl_gen_glGetUniformiv(void *context, GLuint a0, GLint a1, GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetUniformiv == NULL) {
		(void)eagl_missing(context, 0x13a8);
		return;
	}
	EAGL_ENTER(e, 0x13a8);
	eagl_p_glGetUniformiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x13a8);
}

static void
eagl_gen_glGetShaderSource(void *context, GLuint a0, GLsizei a1, GLsizei * a2, GLchar * a3)
{
	struct eagl *e = context;
	if (eagl_p_glGetShaderSource == NULL) {
		(void)eagl_missing(context, 0x13b0);
		return;
	}
	EAGL_ENTER(e, 0x13b0);
	eagl_p_glGetShaderSource(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x13b0);
}

static void
eagl_gen_glBindAttribLocation(void *context, GLuint a0, GLuint a1, const GLchar * a2)
{
	struct eagl *e = context;
	if (eagl_p_glBindAttribLocation == NULL) {
		(void)eagl_missing(context, 0x13b8);
		return;
	}
	EAGL_ENTER(e, 0x13b8);
	eagl_p_glBindAttribLocation(a0, a1, a2);
	EAGL_LEAVE(e, 0x13b8);
}

static void
eagl_gen_glGetActiveAttrib(void *context, GLuint a0, GLuint a1, GLsizei a2, GLsizei * a3, GLint * a4, GLenum * a5, GLchar * a6)
{
	struct eagl *e = context;
	if (eagl_p_glGetActiveAttrib == NULL) {
		(void)eagl_missing(context, 0x13c0);
		return;
	}
	EAGL_ENTER(e, 0x13c0);
	eagl_p_glGetActiveAttrib(a0, a1, a2, a3, a4, a5, a6);
	EAGL_LEAVE(e, 0x13c0);
}

static GLint
eagl_gen_glGetAttribLocation(void *context, GLuint a0, const GLchar * a1)
{
	struct eagl *e = context;
	GLint result;
	if (eagl_p_glGetAttribLocation == NULL) {
		(void)eagl_missing(context, 0x13c8);
		return (GLint)0;
	}
	EAGL_ENTER(e, 0x13c8);
	result = eagl_p_glGetAttribLocation(a0, a1);
	EAGL_LEAVE(e, 0x13c8);
	return result;
}

static void
eagl_gen_glGenQueries(void *context, GLsizei a0, GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGenQueries == NULL) {
		(void)eagl_missing(context, 0x13d8);
		return;
	}
	EAGL_ENTER(e, 0x13d8);
	eagl_p_glGenQueries(a0, a1);
	EAGL_LEAVE(e, 0x13d8);
}

static void
eagl_gen_glDeleteQueries(void *context, GLsizei a0, const GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glDeleteQueries == NULL) {
		(void)eagl_missing(context, 0x13e0);
		return;
	}
	EAGL_ENTER(e, 0x13e0);
	eagl_p_glDeleteQueries(a0, a1);
	EAGL_LEAVE(e, 0x13e0);
}

static GLboolean
eagl_gen_glIsQuery(void *context, GLuint a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glIsQuery == NULL) {
		(void)eagl_missing(context, 0x13e8);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0x13e8);
	result = eagl_p_glIsQuery(a0);
	EAGL_LEAVE(e, 0x13e8);
	return result;
}

static void
eagl_gen_glBeginQuery(void *context, GLenum a0, GLuint a1)
{
	struct eagl *e = context;
	if (eagl_p_glBeginQuery == NULL) {
		(void)eagl_missing(context, 0x13f0);
		return;
	}
	EAGL_ENTER(e, 0x13f0);
	eagl_p_glBeginQuery(a0, a1);
	EAGL_LEAVE(e, 0x13f0);
}

static void
eagl_gen_glEndQuery(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glEndQuery == NULL) {
		(void)eagl_missing(context, 0x13f8);
		return;
	}
	EAGL_ENTER(e, 0x13f8);
	eagl_p_glEndQuery(a0);
	EAGL_LEAVE(e, 0x13f8);
}

static void
eagl_gen_glGetQueryiv(void *context, GLenum a0, GLenum a1, GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetQueryiv == NULL) {
		(void)eagl_missing(context, 0x1400);
		return;
	}
	EAGL_ENTER(e, 0x1400);
	eagl_p_glGetQueryiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1400);
}

static void
eagl_gen_glGetQueryObjectivEXT(void *context, GLuint a0, GLenum a1, GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetQueryObjectivEXT == NULL) {
		(void)eagl_missing(context, 0x1408);
		return;
	}
	EAGL_ENTER(e, 0x1408);
	eagl_p_glGetQueryObjectivEXT(a0, a1, a2);
	EAGL_LEAVE(e, 0x1408);
}

static void
eagl_gen_glGetQueryObjectuiv(void *context, GLuint a0, GLenum a1, GLuint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetQueryObjectuiv == NULL) {
		(void)eagl_missing(context, 0x1410);
		return;
	}
	EAGL_ENTER(e, 0x1410);
	eagl_p_glGetQueryObjectuiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1410);
}

static void
eagl_gen_glBindBuffer(void *context, GLenum a0, GLuint a1)
{
	struct eagl *e = context;
	if (eagl_p_glBindBuffer == NULL) {
		(void)eagl_missing(context, 0x1418);
		return;
	}
	EAGL_ENTER(e, 0x1418);
	eagl_p_glBindBuffer(a0, a1);
	EAGL_LEAVE(e, 0x1418);
}

static void
eagl_gen_glDeleteBuffers(void *context, GLsizei a0, const GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glDeleteBuffers == NULL) {
		(void)eagl_missing(context, 0x1420);
		return;
	}
	EAGL_ENTER(e, 0x1420);
	eagl_p_glDeleteBuffers(a0, a1);
	EAGL_LEAVE(e, 0x1420);
}

static void
eagl_gen_glGenBuffers(void *context, GLsizei a0, GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGenBuffers == NULL) {
		(void)eagl_missing(context, 0x1428);
		return;
	}
	EAGL_ENTER(e, 0x1428);
	eagl_p_glGenBuffers(a0, a1);
	EAGL_LEAVE(e, 0x1428);
}

static GLboolean
eagl_gen_glIsBuffer(void *context, GLuint a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glIsBuffer == NULL) {
		(void)eagl_missing(context, 0x1430);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0x1430);
	result = eagl_p_glIsBuffer(a0);
	EAGL_LEAVE(e, 0x1430);
	return result;
}

static void
eagl_gen_glBufferData(void *context, GLenum a0, GLsizeiptr a1, const void * a2, GLenum a3)
{
	struct eagl *e = context;
	if (eagl_p_glBufferData == NULL) {
		(void)eagl_missing(context, 0x1438);
		return;
	}
	EAGL_ENTER(e, 0x1438);
	eagl_p_glBufferData(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1438);
}

static void
eagl_gen_glBufferSubData(void *context, GLenum a0, GLintptr a1, GLsizeiptr a2, const void * a3)
{
	struct eagl *e = context;
	if (eagl_p_glBufferSubData == NULL) {
		(void)eagl_missing(context, 0x1440);
		return;
	}
	EAGL_ENTER(e, 0x1440);
	eagl_p_glBufferSubData(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1440);
}

static void *
eagl_gen_glMapBufferOES(void *context, GLenum a0, GLenum a1)
{
	struct eagl *e = context;
	void * result;
	if (eagl_p_glMapBufferOES == NULL) {
		(void)eagl_missing(context, 0x1450);
		return (void *)0;
	}
	EAGL_ENTER(e, 0x1450);
	result = eagl_p_glMapBufferOES(a0, a1);
	EAGL_LEAVE(e, 0x1450);
	return result;
}

static GLboolean
eagl_gen_glUnmapBuffer(void *context, GLenum a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glUnmapBuffer == NULL) {
		(void)eagl_missing(context, 0x1458);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0x1458);
	result = eagl_p_glUnmapBuffer(a0);
	EAGL_LEAVE(e, 0x1458);
	return result;
}

static void
eagl_gen_glGetBufferParameteriv(void *context, GLenum a0, GLenum a1, GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetBufferParameteriv == NULL) {
		(void)eagl_missing(context, 0x1460);
		return;
	}
	EAGL_ENTER(e, 0x1460);
	eagl_p_glGetBufferParameteriv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1460);
}

static void
eagl_gen_glGetBufferPointerv(void *context, GLenum a0, GLenum a1, void ** a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetBufferPointerv == NULL) {
		(void)eagl_missing(context, 0x1468);
		return;
	}
	EAGL_ENTER(e, 0x1468);
	eagl_p_glGetBufferPointerv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1468);
}

static void
eagl_gen_glDrawBuffers(void *context, GLsizei a0, const GLenum * a1)
{
	struct eagl *e = context;
	if (eagl_p_glDrawBuffers == NULL) {
		(void)eagl_missing(context, 0x1478);
		return;
	}
	EAGL_ENTER(e, 0x1478);
	eagl_p_glDrawBuffers(a0, a1);
	EAGL_LEAVE(e, 0x1478);
}

static GLboolean
eagl_gen_glIsShader(void *context, GLuint a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glIsShader == NULL) {
		(void)eagl_missing(context, 0x1480);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0x1480);
	result = eagl_p_glIsShader(a0);
	EAGL_LEAVE(e, 0x1480);
	return result;
}

static GLboolean
eagl_gen_glIsProgram(void *context, GLuint a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glIsProgram == NULL) {
		(void)eagl_missing(context, 0x1488);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0x1488);
	result = eagl_p_glIsProgram(a0);
	EAGL_LEAVE(e, 0x1488);
	return result;
}

static void
eagl_gen_glGetShaderiv(void *context, GLuint a0, GLenum a1, GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetShaderiv == NULL) {
		(void)eagl_missing(context, 0x1490);
		return;
	}
	EAGL_ENTER(e, 0x1490);
	eagl_p_glGetShaderiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1490);
}

static void
eagl_gen_glGetProgramiv(void *context, GLuint a0, GLenum a1, GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetProgramiv == NULL) {
		(void)eagl_missing(context, 0x1498);
		return;
	}
	EAGL_ENTER(e, 0x1498);
	eagl_p_glGetProgramiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1498);
}

static void
eagl_gen_glGetShaderInfoLog(void *context, GLuint a0, GLsizei a1, GLsizei * a2, GLchar * a3)
{
	struct eagl *e = context;
	if (eagl_p_glGetShaderInfoLog == NULL) {
		(void)eagl_missing(context, 0x14a0);
		return;
	}
	EAGL_ENTER(e, 0x14a0);
	eagl_p_glGetShaderInfoLog(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x14a0);
}

static void
eagl_gen_glGetProgramInfoLog(void *context, GLuint a0, GLsizei a1, GLsizei * a2, GLchar * a3)
{
	struct eagl *e = context;
	if (eagl_p_glGetProgramInfoLog == NULL) {
		(void)eagl_missing(context, 0x14a8);
		return;
	}
	EAGL_ENTER(e, 0x14a8);
	eagl_p_glGetProgramInfoLog(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x14a8);
}

static void
eagl_gen_glStencilFuncSeparate(void *context, GLenum a0, GLenum a1, GLint a2, GLuint a3)
{
	struct eagl *e = context;
	if (eagl_p_glStencilFuncSeparate == NULL) {
		(void)eagl_missing(context, 0x14b0);
		return;
	}
	EAGL_ENTER(e, 0x14b0);
	eagl_p_glStencilFuncSeparate(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x14b0);
}

static void
eagl_gen_glStencilMaskSeparate(void *context, GLenum a0, GLuint a1)
{
	struct eagl *e = context;
	if (eagl_p_glStencilMaskSeparate == NULL) {
		(void)eagl_missing(context, 0x14b8);
		return;
	}
	EAGL_ENTER(e, 0x14b8);
	eagl_p_glStencilMaskSeparate(a0, a1);
	EAGL_LEAVE(e, 0x14b8);
}

static GLboolean
eagl_gen_glIsRenderbuffer(void *context, GLuint a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glIsRenderbuffer == NULL) {
		(void)eagl_missing(context, 0x14d0);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0x14d0);
	result = eagl_p_glIsRenderbuffer(a0);
	EAGL_LEAVE(e, 0x14d0);
	return result;
}

static void
eagl_gen_glBindRenderbuffer(void *context, GLenum a0, GLuint a1)
{
	struct eagl *e = context;
	if (eagl_p_glBindRenderbuffer == NULL) {
		(void)eagl_missing(context, 0x14d8);
		return;
	}
	EAGL_ENTER(e, 0x14d8);
	eagl_p_glBindRenderbuffer(a0, a1);
	EAGL_LEAVE(e, 0x14d8);
}

static void
eagl_gen_glDeleteRenderbuffers(void *context, GLsizei a0, const GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glDeleteRenderbuffers == NULL) {
		(void)eagl_missing(context, 0x14e0);
		return;
	}
	EAGL_ENTER(e, 0x14e0);
	eagl_p_glDeleteRenderbuffers(a0, a1);
	EAGL_LEAVE(e, 0x14e0);
}

static void
eagl_gen_glGenRenderbuffers(void *context, GLsizei a0, GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGenRenderbuffers == NULL) {
		(void)eagl_missing(context, 0x14e8);
		return;
	}
	EAGL_ENTER(e, 0x14e8);
	eagl_p_glGenRenderbuffers(a0, a1);
	EAGL_LEAVE(e, 0x14e8);
}

static void
eagl_gen_glRenderbufferStorage(void *context, GLenum a0, GLenum a1, GLsizei a2, GLsizei a3)
{
	struct eagl *e = context;
	if (eagl_p_glRenderbufferStorage == NULL) {
		(void)eagl_missing(context, 0x14f0);
		return;
	}
	EAGL_ENTER(e, 0x14f0);
	eagl_p_glRenderbufferStorage(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x14f0);
}

static void
eagl_gen_glGetRenderbufferParameteriv(void *context, GLenum a0, GLenum a1, GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetRenderbufferParameteriv == NULL) {
		(void)eagl_missing(context, 0x14f8);
		return;
	}
	EAGL_ENTER(e, 0x14f8);
	eagl_p_glGetRenderbufferParameteriv(a0, a1, a2);
	EAGL_LEAVE(e, 0x14f8);
}

static GLboolean
eagl_gen_glIsFramebuffer(void *context, GLuint a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glIsFramebuffer == NULL) {
		(void)eagl_missing(context, 0x1500);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0x1500);
	result = eagl_p_glIsFramebuffer(a0);
	EAGL_LEAVE(e, 0x1500);
	return result;
}

static void
eagl_gen_glGenFramebuffers(void *context, GLsizei a0, GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGenFramebuffers == NULL) {
		(void)eagl_missing(context, 0x1518);
		return;
	}
	EAGL_ENTER(e, 0x1518);
	eagl_p_glGenFramebuffers(a0, a1);
	EAGL_LEAVE(e, 0x1518);
}

static GLenum
eagl_gen_glCheckFramebufferStatus(void *context, GLenum a0)
{
	struct eagl *e = context;
	GLenum result;
	if (eagl_p_glCheckFramebufferStatus == NULL) {
		(void)eagl_missing(context, 0x1520);
		return (GLenum)0;
	}
	EAGL_ENTER(e, 0x1520);
	result = eagl_p_glCheckFramebufferStatus(a0);
	EAGL_LEAVE(e, 0x1520);
	return result;
}

static void
eagl_gen_glFramebufferRenderbuffer(void *context, GLenum a0, GLenum a1, GLenum a2, GLuint a3)
{
	struct eagl *e = context;
	if (eagl_p_glFramebufferRenderbuffer == NULL) {
		(void)eagl_missing(context, 0x1540);
		return;
	}
	EAGL_ENTER(e, 0x1540);
	eagl_p_glFramebufferRenderbuffer(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1540);
}

static void
eagl_gen_glGetFramebufferAttachmentParameteriv(void *context, GLenum a0, GLenum a1, GLenum a2, GLint * a3)
{
	struct eagl *e = context;
	if (eagl_p_glGetFramebufferAttachmentParameteriv == NULL) {
		(void)eagl_missing(context, 0x1548);
		return;
	}
	EAGL_ENTER(e, 0x1548);
	eagl_p_glGetFramebufferAttachmentParameteriv(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1548);
}

static void
eagl_gen_glGenerateMipmap(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glGenerateMipmap == NULL) {
		(void)eagl_missing(context, 0x1550);
		return;
	}
	EAGL_ENTER(e, 0x1550);
	eagl_p_glGenerateMipmap(a0);
	EAGL_LEAVE(e, 0x1550);
}

static void
eagl_gen_glProgramParameteri(void *context, GLuint a0, GLenum a1, GLint a2)
{
	struct eagl *e = context;
	if (eagl_p_glProgramParameteri == NULL) {
		(void)eagl_missing(context, 0x1590);
		return;
	}
	EAGL_ENTER(e, 0x1590);
	eagl_p_glProgramParameteri(a0, a1, a2);
	EAGL_LEAVE(e, 0x1590);
}

static void
eagl_gen_glFramebufferTextureLayer(void *context, GLenum a0, GLenum a1, GLuint a2, GLint a3, GLint a4)
{
	struct eagl *e = context;
	if (eagl_p_glFramebufferTextureLayer == NULL) {
		(void)eagl_missing(context, 0x15a0);
		return;
	}
	EAGL_ENTER(e, 0x15a0);
	eagl_p_glFramebufferTextureLayer(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x15a0);
}

static void
eagl_gen_glBindBufferRange(void *context, GLenum a0, GLuint a1, GLuint a2, GLintptr a3, GLsizeiptr a4)
{
	struct eagl *e = context;
	if (eagl_p_glBindBufferRange == NULL) {
		(void)eagl_missing(context, 0x15b0);
		return;
	}
	EAGL_ENTER(e, 0x15b0);
	eagl_p_glBindBufferRange(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x15b0);
}

static void
eagl_gen_glBindBufferBase(void *context, GLenum a0, GLuint a1, GLuint a2)
{
	struct eagl *e = context;
	if (eagl_p_glBindBufferBase == NULL) {
		(void)eagl_missing(context, 0x15c0);
		return;
	}
	EAGL_ENTER(e, 0x15c0);
	eagl_p_glBindBufferBase(a0, a1, a2);
	EAGL_LEAVE(e, 0x15c0);
}

static void
eagl_gen_glBeginTransformFeedback(void *context, GLenum a0)
{
	struct eagl *e = context;
	if (eagl_p_glBeginTransformFeedback == NULL) {
		(void)eagl_missing(context, 0x15c8);
		return;
	}
	EAGL_ENTER(e, 0x15c8);
	eagl_p_glBeginTransformFeedback(a0);
	EAGL_LEAVE(e, 0x15c8);
}

static void
eagl_gen_glEndTransformFeedback(void *context)
{
	struct eagl *e = context;
	if (eagl_p_glEndTransformFeedback == NULL) {
		(void)eagl_missing(context, 0x15d0);
		return;
	}
	EAGL_ENTER(e, 0x15d0);
	eagl_p_glEndTransformFeedback();
	EAGL_LEAVE(e, 0x15d0);
}

static void
eagl_gen_glTransformFeedbackVaryings(void *context, GLuint a0, GLsizei a1, const GLchar *const* a2, GLenum a3)
{
	struct eagl *e = context;
	if (eagl_p_glTransformFeedbackVaryings == NULL) {
		(void)eagl_missing(context, 0x15d8);
		return;
	}
	EAGL_ENTER(e, 0x15d8);
	eagl_p_glTransformFeedbackVaryings(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x15d8);
}

static void
eagl_gen_glGetTransformFeedbackVarying(void *context, GLuint a0, GLuint a1, GLsizei a2, GLsizei * a3, GLsizei * a4, GLenum * a5, GLchar * a6)
{
	struct eagl *e = context;
	if (eagl_p_glGetTransformFeedbackVarying == NULL) {
		(void)eagl_missing(context, 0x15e0);
		return;
	}
	EAGL_ENTER(e, 0x15e0);
	eagl_p_glGetTransformFeedbackVarying(a0, a1, a2, a3, a4, a5, a6);
	EAGL_LEAVE(e, 0x15e0);
}

static void
eagl_gen_glGetIntegeri_v(void *context, GLenum a0, GLuint a1, GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetIntegeri_v == NULL) {
		(void)eagl_missing(context, 0x15e8);
		return;
	}
	EAGL_ENTER(e, 0x15e8);
	eagl_p_glGetIntegeri_v(a0, a1, a2);
	EAGL_LEAVE(e, 0x15e8);
}

static void
eagl_gen_glVertexAttribI4i(void *context, GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4)
{
	struct eagl *e = context;
	if (eagl_p_glVertexAttribI4i == NULL) {
		(void)eagl_missing(context, 0x1658);
		return;
	}
	EAGL_ENTER(e, 0x1658);
	eagl_p_glVertexAttribI4i(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1658);
}

static void
eagl_gen_glVertexAttribI4ui(void *context, GLuint a0, GLuint a1, GLuint a2, GLuint a3, GLuint a4)
{
	struct eagl *e = context;
	if (eagl_p_glVertexAttribI4ui == NULL) {
		(void)eagl_missing(context, 0x1678);
		return;
	}
	EAGL_ENTER(e, 0x1678);
	eagl_p_glVertexAttribI4ui(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1678);
}

static void
eagl_gen_glVertexAttribI4iv(void *context, GLuint a0, const GLint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glVertexAttribI4iv == NULL) {
		(void)eagl_missing(context, 0x1698);
		return;
	}
	EAGL_ENTER(e, 0x1698);
	eagl_p_glVertexAttribI4iv(a0, a1);
	EAGL_LEAVE(e, 0x1698);
}

static void
eagl_gen_glVertexAttribI4uiv(void *context, GLuint a0, const GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glVertexAttribI4uiv == NULL) {
		(void)eagl_missing(context, 0x16b8);
		return;
	}
	EAGL_ENTER(e, 0x16b8);
	eagl_p_glVertexAttribI4uiv(a0, a1);
	EAGL_LEAVE(e, 0x16b8);
}

static void
eagl_gen_glVertexAttribIPointer(void *context, GLuint a0, GLint a1, GLenum a2, GLsizei a3, const void * a4)
{
	struct eagl *e = context;
	if (eagl_p_glVertexAttribIPointer == NULL) {
		(void)eagl_missing(context, 0x16e0);
		return;
	}
	EAGL_ENTER(e, 0x16e0);
	eagl_p_glVertexAttribIPointer(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x16e0);
}

static void
eagl_gen_glGetVertexAttribIiv(void *context, GLuint a0, GLenum a1, GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetVertexAttribIiv == NULL) {
		(void)eagl_missing(context, 0x16e8);
		return;
	}
	EAGL_ENTER(e, 0x16e8);
	eagl_p_glGetVertexAttribIiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x16e8);
}

static void
eagl_gen_glGetVertexAttribIuiv(void *context, GLuint a0, GLenum a1, GLuint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetVertexAttribIuiv == NULL) {
		(void)eagl_missing(context, 0x16f0);
		return;
	}
	EAGL_ENTER(e, 0x16f0);
	eagl_p_glGetVertexAttribIuiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x16f0);
}

static void
eagl_gen_glUniform1ui(void *context, GLint a0, GLuint a1)
{
	struct eagl *e = context;
	if (eagl_p_glUniform1ui == NULL) {
		(void)eagl_missing(context, 0x16f8);
		return;
	}
	EAGL_ENTER(e, 0x16f8);
	eagl_p_glUniform1ui(a0, a1);
	EAGL_LEAVE(e, 0x16f8);
}

static void
eagl_gen_glUniform2ui(void *context, GLint a0, GLuint a1, GLuint a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform2ui == NULL) {
		(void)eagl_missing(context, 0x1700);
		return;
	}
	EAGL_ENTER(e, 0x1700);
	eagl_p_glUniform2ui(a0, a1, a2);
	EAGL_LEAVE(e, 0x1700);
}

static void
eagl_gen_glUniform3ui(void *context, GLint a0, GLuint a1, GLuint a2, GLuint a3)
{
	struct eagl *e = context;
	if (eagl_p_glUniform3ui == NULL) {
		(void)eagl_missing(context, 0x1708);
		return;
	}
	EAGL_ENTER(e, 0x1708);
	eagl_p_glUniform3ui(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1708);
}

static void
eagl_gen_glUniform4ui(void *context, GLint a0, GLuint a1, GLuint a2, GLuint a3, GLuint a4)
{
	struct eagl *e = context;
	if (eagl_p_glUniform4ui == NULL) {
		(void)eagl_missing(context, 0x1710);
		return;
	}
	EAGL_ENTER(e, 0x1710);
	eagl_p_glUniform4ui(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1710);
}

static void
eagl_gen_glUniform1uiv(void *context, GLint a0, GLsizei a1, const GLuint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform1uiv == NULL) {
		(void)eagl_missing(context, 0x1718);
		return;
	}
	EAGL_ENTER(e, 0x1718);
	eagl_p_glUniform1uiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1718);
}

static void
eagl_gen_glUniform2uiv(void *context, GLint a0, GLsizei a1, const GLuint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform2uiv == NULL) {
		(void)eagl_missing(context, 0x1720);
		return;
	}
	EAGL_ENTER(e, 0x1720);
	eagl_p_glUniform2uiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1720);
}

static void
eagl_gen_glUniform3uiv(void *context, GLint a0, GLsizei a1, const GLuint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform3uiv == NULL) {
		(void)eagl_missing(context, 0x1728);
		return;
	}
	EAGL_ENTER(e, 0x1728);
	eagl_p_glUniform3uiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1728);
}

static void
eagl_gen_glUniform4uiv(void *context, GLint a0, GLsizei a1, const GLuint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glUniform4uiv == NULL) {
		(void)eagl_missing(context, 0x1730);
		return;
	}
	EAGL_ENTER(e, 0x1730);
	eagl_p_glUniform4uiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1730);
}

static void
eagl_gen_glGetUniformuiv(void *context, GLuint a0, GLint a1, GLuint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetUniformuiv == NULL) {
		(void)eagl_missing(context, 0x1738);
		return;
	}
	EAGL_ENTER(e, 0x1738);
	eagl_p_glGetUniformuiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1738);
}

static GLint
eagl_gen_glGetFragDataLocation(void *context, GLuint a0, const GLchar * a1)
{
	struct eagl *e = context;
	GLint result;
	if (eagl_p_glGetFragDataLocation == NULL) {
		(void)eagl_missing(context, 0x1748);
		return (GLint)0;
	}
	EAGL_ENTER(e, 0x1748);
	result = eagl_p_glGetFragDataLocation(a0, a1);
	EAGL_LEAVE(e, 0x1748);
	return result;
}

static void
eagl_gen_glUniformMatrix2x3fv(void *context, GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3)
{
	struct eagl *e = context;
	if (eagl_p_glUniformMatrix2x3fv == NULL) {
		(void)eagl_missing(context, 0x1770);
		return;
	}
	EAGL_ENTER(e, 0x1770);
	eagl_p_glUniformMatrix2x3fv(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1770);
}

static void
eagl_gen_glUniformMatrix3x2fv(void *context, GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3)
{
	struct eagl *e = context;
	if (eagl_p_glUniformMatrix3x2fv == NULL) {
		(void)eagl_missing(context, 0x1778);
		return;
	}
	EAGL_ENTER(e, 0x1778);
	eagl_p_glUniformMatrix3x2fv(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1778);
}

static void
eagl_gen_glUniformMatrix2x4fv(void *context, GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3)
{
	struct eagl *e = context;
	if (eagl_p_glUniformMatrix2x4fv == NULL) {
		(void)eagl_missing(context, 0x1780);
		return;
	}
	EAGL_ENTER(e, 0x1780);
	eagl_p_glUniformMatrix2x4fv(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1780);
}

static void
eagl_gen_glUniformMatrix4x2fv(void *context, GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3)
{
	struct eagl *e = context;
	if (eagl_p_glUniformMatrix4x2fv == NULL) {
		(void)eagl_missing(context, 0x1788);
		return;
	}
	EAGL_ENTER(e, 0x1788);
	eagl_p_glUniformMatrix4x2fv(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1788);
}

static void
eagl_gen_glUniformMatrix3x4fv(void *context, GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3)
{
	struct eagl *e = context;
	if (eagl_p_glUniformMatrix3x4fv == NULL) {
		(void)eagl_missing(context, 0x1790);
		return;
	}
	EAGL_ENTER(e, 0x1790);
	eagl_p_glUniformMatrix3x4fv(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1790);
}

static void
eagl_gen_glUniformMatrix4x3fv(void *context, GLint a0, GLsizei a1, GLboolean a2, const GLfloat * a3)
{
	struct eagl *e = context;
	if (eagl_p_glUniformMatrix4x3fv == NULL) {
		(void)eagl_missing(context, 0x1798);
		return;
	}
	EAGL_ENTER(e, 0x1798);
	eagl_p_glUniformMatrix4x3fv(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1798);
}

static void
eagl_gen_glBlitFramebuffer(void *context, GLint a0, GLint a1, GLint a2, GLint a3, GLint a4, GLint a5, GLint a6, GLint a7, GLbitfield a8, GLenum a9)
{
	struct eagl *e = context;
	if (eagl_p_glBlitFramebuffer == NULL) {
		(void)eagl_missing(context, 0x17a0);
		return;
	}
	EAGL_ENTER(e, 0x17a0);
	eagl_p_glBlitFramebuffer(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	EAGL_LEAVE(e, 0x17a0);
}

static void
eagl_gen_glRenderbufferStorageMultisample(void *context, GLenum a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4)
{
	struct eagl *e = context;
	if (eagl_p_glRenderbufferStorageMultisample == NULL) {
		(void)eagl_missing(context, 0x17a8);
		return;
	}
	EAGL_ENTER(e, 0x17a8);
	eagl_p_glRenderbufferStorageMultisample(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x17a8);
}

static void
eagl_gen_glGetAttachedShaders(void *context, GLuint a0, GLsizei a1, GLsizei * a2, GLuint * a3)
{
	struct eagl *e = context;
	if (eagl_p_glGetAttachedShaders == NULL) {
		(void)eagl_missing(context, 0x17c0);
		return;
	}
	EAGL_ENTER(e, 0x17c0);
	eagl_p_glGetAttachedShaders(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x17c0);
}

static void
eagl_gen_glVertexAttribDivisor(void *context, GLuint a0, GLuint a1)
{
	struct eagl *e = context;
	if (eagl_p_glVertexAttribDivisor == NULL) {
		(void)eagl_missing(context, 0x17d0);
		return;
	}
	EAGL_ENTER(e, 0x17d0);
	eagl_p_glVertexAttribDivisor(a0, a1);
	EAGL_LEAVE(e, 0x17d0);
}

static void
eagl_gen_glDrawArraysInstanced(void *context, GLenum a0, GLint a1, GLsizei a2, GLsizei a3)
{
	struct eagl *e = context;
	if (eagl_p_glDrawArraysInstanced == NULL) {
		(void)eagl_missing(context, 0x17d8);
		return;
	}
	EAGL_ENTER(e, 0x17d8);
	eagl_p_glDrawArraysInstanced(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x17d8);
}

static void
eagl_gen_glDrawElementsInstanced(void *context, GLenum a0, GLsizei a1, GLenum a2, const void * a3, GLsizei a4)
{
	struct eagl *e = context;
	if (eagl_p_glDrawElementsInstanced == NULL) {
		(void)eagl_missing(context, 0x17e0);
		return;
	}
	EAGL_ENTER(e, 0x17e0);
	eagl_p_glDrawElementsInstanced(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x17e0);
}

static void
eagl_gen_glBindVertexArray(void *context, GLuint a0)
{
	struct eagl *e = context;
	if (eagl_p_glBindVertexArray == NULL) {
		(void)eagl_missing(context, 0x1808);
		return;
	}
	EAGL_ENTER(e, 0x1808);
	eagl_p_glBindVertexArray(a0);
	EAGL_LEAVE(e, 0x1808);
}

static void
eagl_gen_glDeleteVertexArrays(void *context, GLsizei a0, const GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glDeleteVertexArrays == NULL) {
		(void)eagl_missing(context, 0x1810);
		return;
	}
	EAGL_ENTER(e, 0x1810);
	eagl_p_glDeleteVertexArrays(a0, a1);
	EAGL_LEAVE(e, 0x1810);
}

static void
eagl_gen_glGenVertexArrays(void *context, GLsizei a0, GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGenVertexArrays == NULL) {
		(void)eagl_missing(context, 0x1818);
		return;
	}
	EAGL_ENTER(e, 0x1818);
	eagl_p_glGenVertexArrays(a0, a1);
	EAGL_LEAVE(e, 0x1818);
}

static GLboolean
eagl_gen_glIsVertexArray(void *context, GLuint a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glIsVertexArray == NULL) {
		(void)eagl_missing(context, 0x1820);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0x1820);
	result = eagl_p_glIsVertexArray(a0);
	EAGL_LEAVE(e, 0x1820);
	return result;
}

static void
eagl_gen_glPointSizePointerOES(void *context, GLenum a0, GLsizei a1, const void * a2)
{
	struct eagl *e = context;
	if (eagl_p_glPointSizePointerOES == NULL) {
		(void)eagl_missing(context, 0x1828);
		return;
	}
	EAGL_ENTER(e, 0x1828);
	eagl_p_glPointSizePointerOES(a0, a1, a2);
	EAGL_LEAVE(e, 0x1828);
}

static void
eagl_gen_glClearBufferiv(void *context, GLenum a0, GLint a1, const GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glClearBufferiv == NULL) {
		(void)eagl_missing(context, 0x1838);
		return;
	}
	EAGL_ENTER(e, 0x1838);
	eagl_p_glClearBufferiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1838);
}

static void
eagl_gen_glClearBufferuiv(void *context, GLenum a0, GLint a1, const GLuint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glClearBufferuiv == NULL) {
		(void)eagl_missing(context, 0x1840);
		return;
	}
	EAGL_ENTER(e, 0x1840);
	eagl_p_glClearBufferuiv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1840);
}

static void
eagl_gen_glClearBufferfv(void *context, GLenum a0, GLint a1, const GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glClearBufferfv == NULL) {
		(void)eagl_missing(context, 0x1848);
		return;
	}
	EAGL_ENTER(e, 0x1848);
	eagl_p_glClearBufferfv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1848);
}

static void
eagl_gen_glClearBufferfi(void *context, GLenum a0, GLint a1, GLfloat a2, GLint a3)
{
	struct eagl *e = context;
	if (eagl_p_glClearBufferfi == NULL) {
		(void)eagl_missing(context, 0x1850);
		return;
	}
	EAGL_ENTER(e, 0x1850);
	eagl_p_glClearBufferfi(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1850);
}

static const GLubyte *
eagl_gen_glGetStringi(void *context, GLenum a0, GLuint a1)
{
	struct eagl *e = context;
	const GLubyte * result;
	if (eagl_p_glGetStringi == NULL) {
		(void)eagl_missing(context, 0x1858);
		return (const GLubyte *)0;
	}
	EAGL_ENTER(e, 0x1858);
	result = eagl_p_glGetStringi(a0, a1);
	EAGL_LEAVE(e, 0x1858);
	return result;
}

static GLsync
eagl_gen_glFenceSync(void *context, GLenum a0, GLbitfield a1)
{
	struct eagl *e = context;
	GLsync result;
	if (eagl_p_glFenceSync == NULL) {
		(void)eagl_missing(context, 0x1860);
		return (GLsync)0;
	}
	EAGL_ENTER(e, 0x1860);
	result = eagl_p_glFenceSync(a0, a1);
	EAGL_LEAVE(e, 0x1860);
	return result;
}

static GLboolean
eagl_gen_glIsSync(void *context, GLsync a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glIsSync == NULL) {
		(void)eagl_missing(context, 0x1868);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0x1868);
	result = eagl_p_glIsSync(a0);
	EAGL_LEAVE(e, 0x1868);
	return result;
}

static void
eagl_gen_glDeleteSync(void *context, GLsync a0)
{
	struct eagl *e = context;
	if (eagl_p_glDeleteSync == NULL) {
		(void)eagl_missing(context, 0x1870);
		return;
	}
	EAGL_ENTER(e, 0x1870);
	eagl_p_glDeleteSync(a0);
	EAGL_LEAVE(e, 0x1870);
}

static GLenum
eagl_gen_glClientWaitSync(void *context, GLsync a0, GLbitfield a1, GLuint64 a2)
{
	struct eagl *e = context;
	GLenum result;
	if (eagl_p_glClientWaitSync == NULL) {
		(void)eagl_missing(context, 0x1878);
		return (GLenum)0;
	}
	EAGL_ENTER(e, 0x1878);
	result = eagl_p_glClientWaitSync(a0, a1, a2);
	EAGL_LEAVE(e, 0x1878);
	return result;
}

static void
eagl_gen_glWaitSync(void *context, GLsync a0, GLbitfield a1, GLuint64 a2)
{
	struct eagl *e = context;
	if (eagl_p_glWaitSync == NULL) {
		(void)eagl_missing(context, 0x1880);
		return;
	}
	EAGL_ENTER(e, 0x1880);
	eagl_p_glWaitSync(a0, a1, a2);
	EAGL_LEAVE(e, 0x1880);
}

static void
eagl_gen_glGetInteger64v(void *context, GLenum a0, GLint64 * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGetInteger64v == NULL) {
		(void)eagl_missing(context, 0x1888);
		return;
	}
	EAGL_ENTER(e, 0x1888);
	eagl_p_glGetInteger64v(a0, a1);
	EAGL_LEAVE(e, 0x1888);
}

static void
eagl_gen_glGetSynciv(void *context, GLsync a0, GLenum a1, GLsizei a2, GLsizei * a3, GLint * a4)
{
	struct eagl *e = context;
	if (eagl_p_glGetSynciv == NULL) {
		(void)eagl_missing(context, 0x1890);
		return;
	}
	EAGL_ENTER(e, 0x1890);
	eagl_p_glGetSynciv(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1890);
}

static void
eagl_gen_glCopyBufferSubData(void *context, GLenum a0, GLenum a1, GLintptr a2, GLintptr a3, GLsizeiptr a4)
{
	struct eagl *e = context;
	if (eagl_p_glCopyBufferSubData == NULL) {
		(void)eagl_missing(context, 0x18c0);
		return;
	}
	EAGL_ENTER(e, 0x18c0);
	eagl_p_glCopyBufferSubData(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x18c0);
}

static void *
eagl_gen_glMapBufferRange(void *context, GLenum a0, GLintptr a1, GLsizeiptr a2, GLbitfield a3)
{
	struct eagl *e = context;
	void * result;
	if (eagl_p_glMapBufferRange == NULL) {
		(void)eagl_missing(context, 0x18e0);
		return (void *)0;
	}
	EAGL_ENTER(e, 0x18e0);
	result = eagl_p_glMapBufferRange(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x18e0);
	return result;
}

static void
eagl_gen_glFlushMappedBufferRange(void *context, GLenum a0, GLintptr a1, GLsizeiptr a2)
{
	struct eagl *e = context;
	if (eagl_p_glFlushMappedBufferRange == NULL) {
		(void)eagl_missing(context, 0x18e8);
		return;
	}
	EAGL_ENTER(e, 0x18e8);
	eagl_p_glFlushMappedBufferRange(a0, a1, a2);
	EAGL_LEAVE(e, 0x18e8);
}

static void
eagl_gen_glGetInteger64i_v(void *context, GLenum a0, GLuint a1, GLint64 * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetInteger64i_v == NULL) {
		(void)eagl_missing(context, 0x18f8);
		return;
	}
	EAGL_ENTER(e, 0x18f8);
	eagl_p_glGetInteger64i_v(a0, a1, a2);
	EAGL_LEAVE(e, 0x18f8);
}

static void
eagl_gen_glGetBufferParameteri64v(void *context, GLenum a0, GLenum a1, GLint64 * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetBufferParameteri64v == NULL) {
		(void)eagl_missing(context, 0x1900);
		return;
	}
	EAGL_ENTER(e, 0x1900);
	eagl_p_glGetBufferParameteri64v(a0, a1, a2);
	EAGL_LEAVE(e, 0x1900);
}

static void
eagl_gen_glGenSamplers(void *context, GLsizei a0, GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGenSamplers == NULL) {
		(void)eagl_missing(context, 0x1908);
		return;
	}
	EAGL_ENTER(e, 0x1908);
	eagl_p_glGenSamplers(a0, a1);
	EAGL_LEAVE(e, 0x1908);
}

static void
eagl_gen_glDeleteSamplers(void *context, GLsizei a0, const GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glDeleteSamplers == NULL) {
		(void)eagl_missing(context, 0x1910);
		return;
	}
	EAGL_ENTER(e, 0x1910);
	eagl_p_glDeleteSamplers(a0, a1);
	EAGL_LEAVE(e, 0x1910);
}

static GLboolean
eagl_gen_glIsSampler(void *context, GLuint a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glIsSampler == NULL) {
		(void)eagl_missing(context, 0x1918);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0x1918);
	result = eagl_p_glIsSampler(a0);
	EAGL_LEAVE(e, 0x1918);
	return result;
}

static void
eagl_gen_glBindSampler(void *context, GLuint a0, GLuint a1)
{
	struct eagl *e = context;
	if (eagl_p_glBindSampler == NULL) {
		(void)eagl_missing(context, 0x1920);
		return;
	}
	EAGL_ENTER(e, 0x1920);
	eagl_p_glBindSampler(a0, a1);
	EAGL_LEAVE(e, 0x1920);
}

static void
eagl_gen_glSamplerParameteri(void *context, GLuint a0, GLenum a1, GLint a2)
{
	struct eagl *e = context;
	if (eagl_p_glSamplerParameteri == NULL) {
		(void)eagl_missing(context, 0x1928);
		return;
	}
	EAGL_ENTER(e, 0x1928);
	eagl_p_glSamplerParameteri(a0, a1, a2);
	EAGL_LEAVE(e, 0x1928);
}

static void
eagl_gen_glSamplerParameteriv(void *context, GLuint a0, GLenum a1, const GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glSamplerParameteriv == NULL) {
		(void)eagl_missing(context, 0x1930);
		return;
	}
	EAGL_ENTER(e, 0x1930);
	eagl_p_glSamplerParameteriv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1930);
}

static void
eagl_gen_glSamplerParameterf(void *context, GLuint a0, GLenum a1, GLfloat a2)
{
	struct eagl *e = context;
	if (eagl_p_glSamplerParameterf == NULL) {
		(void)eagl_missing(context, 0x1938);
		return;
	}
	EAGL_ENTER(e, 0x1938);
	eagl_p_glSamplerParameterf(a0, a1, a2);
	EAGL_LEAVE(e, 0x1938);
}

static void
eagl_gen_glSamplerParameterfv(void *context, GLuint a0, GLenum a1, const GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glSamplerParameterfv == NULL) {
		(void)eagl_missing(context, 0x1940);
		return;
	}
	EAGL_ENTER(e, 0x1940);
	eagl_p_glSamplerParameterfv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1940);
}

static void
eagl_gen_glGetSamplerParameteriv(void *context, GLuint a0, GLenum a1, GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetSamplerParameteriv == NULL) {
		(void)eagl_missing(context, 0x1958);
		return;
	}
	EAGL_ENTER(e, 0x1958);
	eagl_p_glGetSamplerParameteriv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1958);
}

static void
eagl_gen_glGetSamplerParameterfv(void *context, GLuint a0, GLenum a1, GLfloat * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetSamplerParameterfv == NULL) {
		(void)eagl_missing(context, 0x1960);
		return;
	}
	EAGL_ENTER(e, 0x1960);
	eagl_p_glGetSamplerParameterfv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1960);
}

static void
eagl_gen_glLabelObjectEXT(void *context, GLenum a0, GLuint a1, GLsizei a2, const GLchar * a3)
{
	struct eagl *e = context;
	if (eagl_p_glLabelObjectEXT == NULL) {
		(void)eagl_missing(context, 0x1978);
		return;
	}
	EAGL_ENTER(e, 0x1978);
	eagl_p_glLabelObjectEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1978);
}

static void
eagl_gen_glGetObjectLabelEXT(void *context, GLenum a0, GLuint a1, GLsizei a2, GLsizei * a3, GLchar * a4)
{
	struct eagl *e = context;
	if (eagl_p_glGetObjectLabelEXT == NULL) {
		(void)eagl_missing(context, 0x1980);
		return;
	}
	EAGL_ENTER(e, 0x1980);
	eagl_p_glGetObjectLabelEXT(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1980);
}

static void
eagl_gen_glUseProgramStagesEXT(void *context, GLuint a0, GLbitfield a1, GLuint a2)
{
	struct eagl *e = context;
	if (eagl_p_glUseProgramStagesEXT == NULL) {
		(void)eagl_missing(context, 0x19a0);
		return;
	}
	EAGL_ENTER(e, 0x19a0);
	eagl_p_glUseProgramStagesEXT(a0, a1, a2);
	EAGL_LEAVE(e, 0x19a0);
}

static void
eagl_gen_glActiveShaderProgramEXT(void *context, GLuint a0, GLuint a1)
{
	struct eagl *e = context;
	if (eagl_p_glActiveShaderProgramEXT == NULL) {
		(void)eagl_missing(context, 0x19a8);
		return;
	}
	EAGL_ENTER(e, 0x19a8);
	eagl_p_glActiveShaderProgramEXT(a0, a1);
	EAGL_LEAVE(e, 0x19a8);
}

static GLuint
eagl_gen_glCreateShaderProgramvEXT(void *context, GLenum a0, GLsizei a1, const GLchar *const* a2)
{
	struct eagl *e = context;
	GLuint result;
	if (eagl_p_glCreateShaderProgramvEXT == NULL) {
		(void)eagl_missing(context, 0x19b0);
		return (GLuint)0;
	}
	EAGL_ENTER(e, 0x19b0);
	result = eagl_p_glCreateShaderProgramvEXT(a0, a1, a2);
	EAGL_LEAVE(e, 0x19b0);
	return result;
}

static void
eagl_gen_glBindProgramPipelineEXT(void *context, GLuint a0)
{
	struct eagl *e = context;
	if (eagl_p_glBindProgramPipelineEXT == NULL) {
		(void)eagl_missing(context, 0x19b8);
		return;
	}
	EAGL_ENTER(e, 0x19b8);
	eagl_p_glBindProgramPipelineEXT(a0);
	EAGL_LEAVE(e, 0x19b8);
}

static void
eagl_gen_glDeleteProgramPipelinesEXT(void *context, GLsizei a0, const GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glDeleteProgramPipelinesEXT == NULL) {
		(void)eagl_missing(context, 0x19c0);
		return;
	}
	EAGL_ENTER(e, 0x19c0);
	eagl_p_glDeleteProgramPipelinesEXT(a0, a1);
	EAGL_LEAVE(e, 0x19c0);
}

static void
eagl_gen_glGenProgramPipelinesEXT(void *context, GLsizei a0, GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGenProgramPipelinesEXT == NULL) {
		(void)eagl_missing(context, 0x19c8);
		return;
	}
	EAGL_ENTER(e, 0x19c8);
	eagl_p_glGenProgramPipelinesEXT(a0, a1);
	EAGL_LEAVE(e, 0x19c8);
}

static GLboolean
eagl_gen_glIsProgramPipelineEXT(void *context, GLuint a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glIsProgramPipelineEXT == NULL) {
		(void)eagl_missing(context, 0x19d0);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0x19d0);
	result = eagl_p_glIsProgramPipelineEXT(a0);
	EAGL_LEAVE(e, 0x19d0);
	return result;
}

static void
eagl_gen_glGetProgramPipelineivEXT(void *context, GLuint a0, GLenum a1, GLint * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetProgramPipelineivEXT == NULL) {
		(void)eagl_missing(context, 0x19d8);
		return;
	}
	EAGL_ENTER(e, 0x19d8);
	eagl_p_glGetProgramPipelineivEXT(a0, a1, a2);
	EAGL_LEAVE(e, 0x19d8);
}

static void
eagl_gen_glValidateProgramPipelineEXT(void *context, GLuint a0)
{
	struct eagl *e = context;
	if (eagl_p_glValidateProgramPipelineEXT == NULL) {
		(void)eagl_missing(context, 0x19e0);
		return;
	}
	EAGL_ENTER(e, 0x19e0);
	eagl_p_glValidateProgramPipelineEXT(a0);
	EAGL_LEAVE(e, 0x19e0);
}

static void
eagl_gen_glGetProgramPipelineInfoLogEXT(void *context, GLuint a0, GLsizei a1, GLsizei * a2, GLchar * a3)
{
	struct eagl *e = context;
	if (eagl_p_glGetProgramPipelineInfoLogEXT == NULL) {
		(void)eagl_missing(context, 0x19e8);
		return;
	}
	EAGL_ENTER(e, 0x19e8);
	eagl_p_glGetProgramPipelineInfoLogEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x19e8);
}

static void
eagl_gen_glProgramUniform1iEXT(void *context, GLuint a0, GLint a1, GLint a2)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform1iEXT == NULL) {
		(void)eagl_missing(context, 0x19f0);
		return;
	}
	EAGL_ENTER(e, 0x19f0);
	eagl_p_glProgramUniform1iEXT(a0, a1, a2);
	EAGL_LEAVE(e, 0x19f0);
}

static void
eagl_gen_glProgramUniform2iEXT(void *context, GLuint a0, GLint a1, GLint a2, GLint a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform2iEXT == NULL) {
		(void)eagl_missing(context, 0x19f8);
		return;
	}
	EAGL_ENTER(e, 0x19f8);
	eagl_p_glProgramUniform2iEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x19f8);
}

static void
eagl_gen_glProgramUniform3iEXT(void *context, GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform3iEXT == NULL) {
		(void)eagl_missing(context, 0x1a00);
		return;
	}
	EAGL_ENTER(e, 0x1a00);
	eagl_p_glProgramUniform3iEXT(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1a00);
}

static void
eagl_gen_glProgramUniform4iEXT(void *context, GLuint a0, GLint a1, GLint a2, GLint a3, GLint a4, GLint a5)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform4iEXT == NULL) {
		(void)eagl_missing(context, 0x1a08);
		return;
	}
	EAGL_ENTER(e, 0x1a08);
	eagl_p_glProgramUniform4iEXT(a0, a1, a2, a3, a4, a5);
	EAGL_LEAVE(e, 0x1a08);
}

static void
eagl_gen_glProgramUniform1fEXT(void *context, GLuint a0, GLint a1, GLfloat a2)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform1fEXT == NULL) {
		(void)eagl_missing(context, 0x1a10);
		return;
	}
	EAGL_ENTER(e, 0x1a10);
	eagl_p_glProgramUniform1fEXT(a0, a1, a2);
	EAGL_LEAVE(e, 0x1a10);
}

static void
eagl_gen_glProgramUniform2fEXT(void *context, GLuint a0, GLint a1, GLfloat a2, GLfloat a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform2fEXT == NULL) {
		(void)eagl_missing(context, 0x1a18);
		return;
	}
	EAGL_ENTER(e, 0x1a18);
	eagl_p_glProgramUniform2fEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1a18);
}

static void
eagl_gen_glProgramUniform3fEXT(void *context, GLuint a0, GLint a1, GLfloat a2, GLfloat a3, GLfloat a4)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform3fEXT == NULL) {
		(void)eagl_missing(context, 0x1a20);
		return;
	}
	EAGL_ENTER(e, 0x1a20);
	eagl_p_glProgramUniform3fEXT(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1a20);
}

static void
eagl_gen_glProgramUniform4fEXT(void *context, GLuint a0, GLint a1, GLfloat a2, GLfloat a3, GLfloat a4, GLfloat a5)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform4fEXT == NULL) {
		(void)eagl_missing(context, 0x1a28);
		return;
	}
	EAGL_ENTER(e, 0x1a28);
	eagl_p_glProgramUniform4fEXT(a0, a1, a2, a3, a4, a5);
	EAGL_LEAVE(e, 0x1a28);
}

static void
eagl_gen_glProgramUniform1ivEXT(void *context, GLuint a0, GLint a1, GLsizei a2, const GLint * a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform1ivEXT == NULL) {
		(void)eagl_missing(context, 0x1a30);
		return;
	}
	EAGL_ENTER(e, 0x1a30);
	eagl_p_glProgramUniform1ivEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1a30);
}

static void
eagl_gen_glProgramUniform2ivEXT(void *context, GLuint a0, GLint a1, GLsizei a2, const GLint * a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform2ivEXT == NULL) {
		(void)eagl_missing(context, 0x1a38);
		return;
	}
	EAGL_ENTER(e, 0x1a38);
	eagl_p_glProgramUniform2ivEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1a38);
}

static void
eagl_gen_glProgramUniform3ivEXT(void *context, GLuint a0, GLint a1, GLsizei a2, const GLint * a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform3ivEXT == NULL) {
		(void)eagl_missing(context, 0x1a40);
		return;
	}
	EAGL_ENTER(e, 0x1a40);
	eagl_p_glProgramUniform3ivEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1a40);
}

static void
eagl_gen_glProgramUniform4ivEXT(void *context, GLuint a0, GLint a1, GLsizei a2, const GLint * a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform4ivEXT == NULL) {
		(void)eagl_missing(context, 0x1a48);
		return;
	}
	EAGL_ENTER(e, 0x1a48);
	eagl_p_glProgramUniform4ivEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1a48);
}

static void
eagl_gen_glProgramUniform1fvEXT(void *context, GLuint a0, GLint a1, GLsizei a2, const GLfloat * a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform1fvEXT == NULL) {
		(void)eagl_missing(context, 0x1a50);
		return;
	}
	EAGL_ENTER(e, 0x1a50);
	eagl_p_glProgramUniform1fvEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1a50);
}

static void
eagl_gen_glProgramUniform2fvEXT(void *context, GLuint a0, GLint a1, GLsizei a2, const GLfloat * a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform2fvEXT == NULL) {
		(void)eagl_missing(context, 0x1a58);
		return;
	}
	EAGL_ENTER(e, 0x1a58);
	eagl_p_glProgramUniform2fvEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1a58);
}

static void
eagl_gen_glProgramUniform3fvEXT(void *context, GLuint a0, GLint a1, GLsizei a2, const GLfloat * a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform3fvEXT == NULL) {
		(void)eagl_missing(context, 0x1a60);
		return;
	}
	EAGL_ENTER(e, 0x1a60);
	eagl_p_glProgramUniform3fvEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1a60);
}

static void
eagl_gen_glProgramUniform4fvEXT(void *context, GLuint a0, GLint a1, GLsizei a2, const GLfloat * a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform4fvEXT == NULL) {
		(void)eagl_missing(context, 0x1a68);
		return;
	}
	EAGL_ENTER(e, 0x1a68);
	eagl_p_glProgramUniform4fvEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1a68);
}

static void
eagl_gen_glProgramUniformMatrix2fvEXT(void *context, GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniformMatrix2fvEXT == NULL) {
		(void)eagl_missing(context, 0x1a70);
		return;
	}
	EAGL_ENTER(e, 0x1a70);
	eagl_p_glProgramUniformMatrix2fvEXT(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1a70);
}

static void
eagl_gen_glProgramUniformMatrix3fvEXT(void *context, GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniformMatrix3fvEXT == NULL) {
		(void)eagl_missing(context, 0x1a78);
		return;
	}
	EAGL_ENTER(e, 0x1a78);
	eagl_p_glProgramUniformMatrix3fvEXT(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1a78);
}

static void
eagl_gen_glProgramUniformMatrix4fvEXT(void *context, GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniformMatrix4fvEXT == NULL) {
		(void)eagl_missing(context, 0x1a80);
		return;
	}
	EAGL_ENTER(e, 0x1a80);
	eagl_p_glProgramUniformMatrix4fvEXT(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1a80);
}

static void
eagl_gen_glProgramUniform1uiEXT(void *context, GLuint a0, GLint a1, GLuint a2)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform1uiEXT == NULL) {
		(void)eagl_missing(context, 0x1a88);
		return;
	}
	EAGL_ENTER(e, 0x1a88);
	eagl_p_glProgramUniform1uiEXT(a0, a1, a2);
	EAGL_LEAVE(e, 0x1a88);
}

static void
eagl_gen_glProgramUniform2uiEXT(void *context, GLuint a0, GLint a1, GLuint a2, GLuint a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform2uiEXT == NULL) {
		(void)eagl_missing(context, 0x1a90);
		return;
	}
	EAGL_ENTER(e, 0x1a90);
	eagl_p_glProgramUniform2uiEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1a90);
}

static void
eagl_gen_glProgramUniform3uiEXT(void *context, GLuint a0, GLint a1, GLuint a2, GLuint a3, GLuint a4)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform3uiEXT == NULL) {
		(void)eagl_missing(context, 0x1a98);
		return;
	}
	EAGL_ENTER(e, 0x1a98);
	eagl_p_glProgramUniform3uiEXT(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1a98);
}

static void
eagl_gen_glProgramUniform4uiEXT(void *context, GLuint a0, GLint a1, GLuint a2, GLuint a3, GLuint a4, GLuint a5)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform4uiEXT == NULL) {
		(void)eagl_missing(context, 0x1aa0);
		return;
	}
	EAGL_ENTER(e, 0x1aa0);
	eagl_p_glProgramUniform4uiEXT(a0, a1, a2, a3, a4, a5);
	EAGL_LEAVE(e, 0x1aa0);
}

static void
eagl_gen_glProgramUniform1uivEXT(void *context, GLuint a0, GLint a1, GLsizei a2, const GLuint * a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform1uivEXT == NULL) {
		(void)eagl_missing(context, 0x1aa8);
		return;
	}
	EAGL_ENTER(e, 0x1aa8);
	eagl_p_glProgramUniform1uivEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1aa8);
}

static void
eagl_gen_glProgramUniform2uivEXT(void *context, GLuint a0, GLint a1, GLsizei a2, const GLuint * a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform2uivEXT == NULL) {
		(void)eagl_missing(context, 0x1ab0);
		return;
	}
	EAGL_ENTER(e, 0x1ab0);
	eagl_p_glProgramUniform2uivEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1ab0);
}

static void
eagl_gen_glProgramUniform3uivEXT(void *context, GLuint a0, GLint a1, GLsizei a2, const GLuint * a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform3uivEXT == NULL) {
		(void)eagl_missing(context, 0x1ab8);
		return;
	}
	EAGL_ENTER(e, 0x1ab8);
	eagl_p_glProgramUniform3uivEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1ab8);
}

static void
eagl_gen_glProgramUniform4uivEXT(void *context, GLuint a0, GLint a1, GLsizei a2, const GLuint * a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniform4uivEXT == NULL) {
		(void)eagl_missing(context, 0x1ac0);
		return;
	}
	EAGL_ENTER(e, 0x1ac0);
	eagl_p_glProgramUniform4uivEXT(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1ac0);
}

static void
eagl_gen_glProgramUniformMatrix2x3fvEXT(void *context, GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniformMatrix2x3fvEXT == NULL) {
		(void)eagl_missing(context, 0x1ac8);
		return;
	}
	EAGL_ENTER(e, 0x1ac8);
	eagl_p_glProgramUniformMatrix2x3fvEXT(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1ac8);
}

static void
eagl_gen_glProgramUniformMatrix3x2fvEXT(void *context, GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniformMatrix3x2fvEXT == NULL) {
		(void)eagl_missing(context, 0x1ad0);
		return;
	}
	EAGL_ENTER(e, 0x1ad0);
	eagl_p_glProgramUniformMatrix3x2fvEXT(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1ad0);
}

static void
eagl_gen_glProgramUniformMatrix2x4fvEXT(void *context, GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniformMatrix2x4fvEXT == NULL) {
		(void)eagl_missing(context, 0x1ad8);
		return;
	}
	EAGL_ENTER(e, 0x1ad8);
	eagl_p_glProgramUniformMatrix2x4fvEXT(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1ad8);
}

static void
eagl_gen_glProgramUniformMatrix4x2fvEXT(void *context, GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniformMatrix4x2fvEXT == NULL) {
		(void)eagl_missing(context, 0x1ae0);
		return;
	}
	EAGL_ENTER(e, 0x1ae0);
	eagl_p_glProgramUniformMatrix4x2fvEXT(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1ae0);
}

static void
eagl_gen_glProgramUniformMatrix3x4fvEXT(void *context, GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniformMatrix3x4fvEXT == NULL) {
		(void)eagl_missing(context, 0x1ae8);
		return;
	}
	EAGL_ENTER(e, 0x1ae8);
	eagl_p_glProgramUniformMatrix3x4fvEXT(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1ae8);
}

static void
eagl_gen_glProgramUniformMatrix4x3fvEXT(void *context, GLuint a0, GLint a1, GLsizei a2, GLboolean a3, const GLfloat * a4)
{
	struct eagl *e = context;
	if (eagl_p_glProgramUniformMatrix4x3fvEXT == NULL) {
		(void)eagl_missing(context, 0x1af0);
		return;
	}
	EAGL_ENTER(e, 0x1af0);
	eagl_p_glProgramUniformMatrix4x3fvEXT(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1af0);
}

static void
eagl_gen_glReleaseShaderCompiler(void *context)
{
	struct eagl *e = context;
	if (eagl_p_glReleaseShaderCompiler == NULL) {
		(void)eagl_missing(context, 0x1b58);
		return;
	}
	EAGL_ENTER(e, 0x1b58);
	eagl_p_glReleaseShaderCompiler();
	EAGL_LEAVE(e, 0x1b58);
}

static void
eagl_gen_glShaderBinary(void *context, GLsizei a0, const GLuint * a1, GLenum a2, const void * a3, GLsizei a4)
{
	struct eagl *e = context;
	if (eagl_p_glShaderBinary == NULL) {
		(void)eagl_missing(context, 0x1b60);
		return;
	}
	EAGL_ENTER(e, 0x1b60);
	eagl_p_glShaderBinary(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1b60);
}

static void
eagl_gen_glGetShaderPrecisionFormat(void *context, GLenum a0, GLenum a1, GLint * a2, GLint * a3)
{
	struct eagl *e = context;
	if (eagl_p_glGetShaderPrecisionFormat == NULL) {
		(void)eagl_missing(context, 0x1b68);
		return;
	}
	EAGL_ENTER(e, 0x1b68);
	eagl_p_glGetShaderPrecisionFormat(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1b68);
}

static void
eagl_gen_glDepthRangef(void *context, GLfloat a0, GLfloat a1)
{
	struct eagl *e = context;
	if (eagl_p_glDepthRangef == NULL) {
		(void)eagl_missing(context, 0x1b70);
		return;
	}
	EAGL_ENTER(e, 0x1b70);
	eagl_p_glDepthRangef(a0, a1);
	EAGL_LEAVE(e, 0x1b70);
}

static void
eagl_gen_glClearDepthf(void *context, GLfloat a0)
{
	struct eagl *e = context;
	if (eagl_p_glClearDepthf == NULL) {
		(void)eagl_missing(context, 0x1b78);
		return;
	}
	EAGL_ENTER(e, 0x1b78);
	eagl_p_glClearDepthf(a0);
	EAGL_LEAVE(e, 0x1b78);
}

static void
eagl_gen_glGetProgramBinary(void *context, GLuint a0, GLsizei a1, GLsizei * a2, GLenum * a3, void * a4)
{
	struct eagl *e = context;
	if (eagl_p_glGetProgramBinary == NULL) {
		(void)eagl_missing(context, 0x1bc0);
		return;
	}
	EAGL_ENTER(e, 0x1bc0);
	eagl_p_glGetProgramBinary(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1bc0);
}

static void
eagl_gen_glProgramBinary(void *context, GLuint a0, GLenum a1, const void * a2, GLsizei a3)
{
	struct eagl *e = context;
	if (eagl_p_glProgramBinary == NULL) {
		(void)eagl_missing(context, 0x1bc8);
		return;
	}
	EAGL_ENTER(e, 0x1bc8);
	eagl_p_glProgramBinary(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1bc8);
}

static void
eagl_gen_glBindTransformFeedback(void *context, GLenum a0, GLuint a1)
{
	struct eagl *e = context;
	if (eagl_p_glBindTransformFeedback == NULL) {
		(void)eagl_missing(context, 0x1c48);
		return;
	}
	EAGL_ENTER(e, 0x1c48);
	eagl_p_glBindTransformFeedback(a0, a1);
	EAGL_LEAVE(e, 0x1c48);
}

static void
eagl_gen_glGenTransformFeedbacks(void *context, GLsizei a0, GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGenTransformFeedbacks == NULL) {
		(void)eagl_missing(context, 0x1c50);
		return;
	}
	EAGL_ENTER(e, 0x1c50);
	eagl_p_glGenTransformFeedbacks(a0, a1);
	EAGL_LEAVE(e, 0x1c50);
}

static void
eagl_gen_glDeleteTransformFeedbacks(void *context, GLsizei a0, const GLuint * a1)
{
	struct eagl *e = context;
	if (eagl_p_glDeleteTransformFeedbacks == NULL) {
		(void)eagl_missing(context, 0x1c58);
		return;
	}
	EAGL_ENTER(e, 0x1c58);
	eagl_p_glDeleteTransformFeedbacks(a0, a1);
	EAGL_LEAVE(e, 0x1c58);
}

static void
eagl_gen_glPauseTransformFeedback(void *context)
{
	struct eagl *e = context;
	if (eagl_p_glPauseTransformFeedback == NULL) {
		(void)eagl_missing(context, 0x1c60);
		return;
	}
	EAGL_ENTER(e, 0x1c60);
	eagl_p_glPauseTransformFeedback();
	EAGL_LEAVE(e, 0x1c60);
}

static void
eagl_gen_glResumeTransformFeedback(void *context)
{
	struct eagl *e = context;
	if (eagl_p_glResumeTransformFeedback == NULL) {
		(void)eagl_missing(context, 0x1c68);
		return;
	}
	EAGL_ENTER(e, 0x1c68);
	eagl_p_glResumeTransformFeedback();
	EAGL_LEAVE(e, 0x1c68);
}

static GLboolean
eagl_gen_glIsTransformFeedback(void *context, GLuint a0)
{
	struct eagl *e = context;
	GLboolean result;
	if (eagl_p_glIsTransformFeedback == NULL) {
		(void)eagl_missing(context, 0x1c70);
		return (GLboolean)0;
	}
	EAGL_ENTER(e, 0x1c70);
	result = eagl_p_glIsTransformFeedback(a0);
	EAGL_LEAVE(e, 0x1c70);
	return result;
}

static void
eagl_gen_glAlphaFuncx(void *context, GLenum a0, GLfixed a1)
{
	struct eagl *e = context;
	if (eagl_p_glAlphaFuncx == NULL) {
		(void)eagl_missing(context, 0x1e48);
		return;
	}
	EAGL_ENTER(e, 0x1e48);
	eagl_p_glAlphaFuncx(a0, a1);
	EAGL_LEAVE(e, 0x1e48);
}

static void
eagl_gen_glClearColorx(void *context, GLfixed a0, GLfixed a1, GLfixed a2, GLfixed a3)
{
	struct eagl *e = context;
	if (eagl_p_glClearColorx == NULL) {
		(void)eagl_missing(context, 0x1e50);
		return;
	}
	EAGL_ENTER(e, 0x1e50);
	eagl_p_glClearColorx(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1e50);
}

static void
eagl_gen_glClearDepthx(void *context, GLfixed a0)
{
	struct eagl *e = context;
	if (eagl_p_glClearDepthx == NULL) {
		(void)eagl_missing(context, 0x1e58);
		return;
	}
	EAGL_ENTER(e, 0x1e58);
	eagl_p_glClearDepthx(a0);
	EAGL_LEAVE(e, 0x1e58);
}

static void
eagl_gen_glClipPlanef(void *context, GLenum a0, const GLfloat * a1)
{
	struct eagl *e = context;
	if (eagl_p_glClipPlanef == NULL) {
		(void)eagl_missing(context, 0x1e60);
		return;
	}
	EAGL_ENTER(e, 0x1e60);
	eagl_p_glClipPlanef(a0, a1);
	EAGL_LEAVE(e, 0x1e60);
}

static void
eagl_gen_glClipPlanex(void *context, GLenum a0, const GLfixed * a1)
{
	struct eagl *e = context;
	if (eagl_p_glClipPlanex == NULL) {
		(void)eagl_missing(context, 0x1e68);
		return;
	}
	EAGL_ENTER(e, 0x1e68);
	eagl_p_glClipPlanex(a0, a1);
	EAGL_LEAVE(e, 0x1e68);
}

static void
eagl_gen_glColor4x(void *context, GLfixed a0, GLfixed a1, GLfixed a2, GLfixed a3)
{
	struct eagl *e = context;
	if (eagl_p_glColor4x == NULL) {
		(void)eagl_missing(context, 0x1e70);
		return;
	}
	EAGL_ENTER(e, 0x1e70);
	eagl_p_glColor4x(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1e70);
}

static void
eagl_gen_glDepthRangex(void *context, GLfixed a0, GLfixed a1)
{
	struct eagl *e = context;
	if (eagl_p_glDepthRangex == NULL) {
		(void)eagl_missing(context, 0x1e78);
		return;
	}
	EAGL_ENTER(e, 0x1e78);
	eagl_p_glDepthRangex(a0, a1);
	EAGL_LEAVE(e, 0x1e78);
}

static void
eagl_gen_glFogx(void *context, GLenum a0, GLfixed a1)
{
	struct eagl *e = context;
	if (eagl_p_glFogx == NULL) {
		(void)eagl_missing(context, 0x1e80);
		return;
	}
	EAGL_ENTER(e, 0x1e80);
	eagl_p_glFogx(a0, a1);
	EAGL_LEAVE(e, 0x1e80);
}

static void
eagl_gen_glFogxv(void *context, GLenum a0, const GLfixed * a1)
{
	struct eagl *e = context;
	if (eagl_p_glFogxv == NULL) {
		(void)eagl_missing(context, 0x1e88);
		return;
	}
	EAGL_ENTER(e, 0x1e88);
	eagl_p_glFogxv(a0, a1);
	EAGL_LEAVE(e, 0x1e88);
}

static void
eagl_gen_glFrustumf(void *context, GLfloat a0, GLfloat a1, GLfloat a2, GLfloat a3, GLfloat a4, GLfloat a5)
{
	struct eagl *e = context;
	if (eagl_p_glFrustumf == NULL) {
		(void)eagl_missing(context, 0x1e90);
		return;
	}
	EAGL_ENTER(e, 0x1e90);
	eagl_p_glFrustumf(a0, a1, a2, a3, a4, a5);
	EAGL_LEAVE(e, 0x1e90);
}

static void
eagl_gen_glFrustumx(void *context, GLfixed a0, GLfixed a1, GLfixed a2, GLfixed a3, GLfixed a4, GLfixed a5)
{
	struct eagl *e = context;
	if (eagl_p_glFrustumx == NULL) {
		(void)eagl_missing(context, 0x1e98);
		return;
	}
	EAGL_ENTER(e, 0x1e98);
	eagl_p_glFrustumx(a0, a1, a2, a3, a4, a5);
	EAGL_LEAVE(e, 0x1e98);
}

static void
eagl_gen_glGetClipPlanef(void *context, GLenum a0, GLfloat * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGetClipPlanef == NULL) {
		(void)eagl_missing(context, 0x1ea0);
		return;
	}
	EAGL_ENTER(e, 0x1ea0);
	eagl_p_glGetClipPlanef(a0, a1);
	EAGL_LEAVE(e, 0x1ea0);
}

static void
eagl_gen_glGetClipPlanex(void *context, GLenum a0, GLfixed * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGetClipPlanex == NULL) {
		(void)eagl_missing(context, 0x1ea8);
		return;
	}
	EAGL_ENTER(e, 0x1ea8);
	eagl_p_glGetClipPlanex(a0, a1);
	EAGL_LEAVE(e, 0x1ea8);
}

static void
eagl_gen_glGetFixedv(void *context, GLenum a0, GLfixed * a1)
{
	struct eagl *e = context;
	if (eagl_p_glGetFixedv == NULL) {
		(void)eagl_missing(context, 0x1eb0);
		return;
	}
	EAGL_ENTER(e, 0x1eb0);
	eagl_p_glGetFixedv(a0, a1);
	EAGL_LEAVE(e, 0x1eb0);
}

static void
eagl_gen_glGetLightxv(void *context, GLenum a0, GLenum a1, GLfixed * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetLightxv == NULL) {
		(void)eagl_missing(context, 0x1eb8);
		return;
	}
	EAGL_ENTER(e, 0x1eb8);
	eagl_p_glGetLightxv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1eb8);
}

static void
eagl_gen_glGetMaterialxv(void *context, GLenum a0, GLenum a1, GLfixed * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetMaterialxv == NULL) {
		(void)eagl_missing(context, 0x1ec0);
		return;
	}
	EAGL_ENTER(e, 0x1ec0);
	eagl_p_glGetMaterialxv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1ec0);
}

static void
eagl_gen_glGetTexEnvxv(void *context, GLenum a0, GLenum a1, GLfixed * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetTexEnvxv == NULL) {
		(void)eagl_missing(context, 0x1ec8);
		return;
	}
	EAGL_ENTER(e, 0x1ec8);
	eagl_p_glGetTexEnvxv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1ec8);
}

static void
eagl_gen_glGetTexParameterxv(void *context, GLenum a0, GLenum a1, GLfixed * a2)
{
	struct eagl *e = context;
	if (eagl_p_glGetTexParameterxv == NULL) {
		(void)eagl_missing(context, 0x1ed0);
		return;
	}
	EAGL_ENTER(e, 0x1ed0);
	eagl_p_glGetTexParameterxv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1ed0);
}

static void
eagl_gen_glLightModelx(void *context, GLenum a0, GLfixed a1)
{
	struct eagl *e = context;
	if (eagl_p_glLightModelx == NULL) {
		(void)eagl_missing(context, 0x1ed8);
		return;
	}
	EAGL_ENTER(e, 0x1ed8);
	eagl_p_glLightModelx(a0, a1);
	EAGL_LEAVE(e, 0x1ed8);
}

static void
eagl_gen_glLightModelxv(void *context, GLenum a0, const GLfixed * a1)
{
	struct eagl *e = context;
	if (eagl_p_glLightModelxv == NULL) {
		(void)eagl_missing(context, 0x1ee0);
		return;
	}
	EAGL_ENTER(e, 0x1ee0);
	eagl_p_glLightModelxv(a0, a1);
	EAGL_LEAVE(e, 0x1ee0);
}

static void
eagl_gen_glLightx(void *context, GLenum a0, GLenum a1, GLfixed a2)
{
	struct eagl *e = context;
	if (eagl_p_glLightx == NULL) {
		(void)eagl_missing(context, 0x1ee8);
		return;
	}
	EAGL_ENTER(e, 0x1ee8);
	eagl_p_glLightx(a0, a1, a2);
	EAGL_LEAVE(e, 0x1ee8);
}

static void
eagl_gen_glLightxv(void *context, GLenum a0, GLenum a1, const GLfixed * a2)
{
	struct eagl *e = context;
	if (eagl_p_glLightxv == NULL) {
		(void)eagl_missing(context, 0x1ef0);
		return;
	}
	EAGL_ENTER(e, 0x1ef0);
	eagl_p_glLightxv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1ef0);
}

static void
eagl_gen_glLineWidthx(void *context, GLfixed a0)
{
	struct eagl *e = context;
	if (eagl_p_glLineWidthx == NULL) {
		(void)eagl_missing(context, 0x1ef8);
		return;
	}
	EAGL_ENTER(e, 0x1ef8);
	eagl_p_glLineWidthx(a0);
	EAGL_LEAVE(e, 0x1ef8);
}

static void
eagl_gen_glLoadMatrixx(void *context, const GLfixed * a0)
{
	struct eagl *e = context;
	if (eagl_p_glLoadMatrixx == NULL) {
		(void)eagl_missing(context, 0x1f00);
		return;
	}
	EAGL_ENTER(e, 0x1f00);
	eagl_p_glLoadMatrixx(a0);
	EAGL_LEAVE(e, 0x1f00);
}

static void
eagl_gen_glMaterialx(void *context, GLenum a0, GLenum a1, GLfixed a2)
{
	struct eagl *e = context;
	if (eagl_p_glMaterialx == NULL) {
		(void)eagl_missing(context, 0x1f08);
		return;
	}
	EAGL_ENTER(e, 0x1f08);
	eagl_p_glMaterialx(a0, a1, a2);
	EAGL_LEAVE(e, 0x1f08);
}

static void
eagl_gen_glMaterialxv(void *context, GLenum a0, GLenum a1, const GLfixed * a2)
{
	struct eagl *e = context;
	if (eagl_p_glMaterialxv == NULL) {
		(void)eagl_missing(context, 0x1f10);
		return;
	}
	EAGL_ENTER(e, 0x1f10);
	eagl_p_glMaterialxv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1f10);
}

static void
eagl_gen_glMultMatrixx(void *context, const GLfixed * a0)
{
	struct eagl *e = context;
	if (eagl_p_glMultMatrixx == NULL) {
		(void)eagl_missing(context, 0x1f18);
		return;
	}
	EAGL_ENTER(e, 0x1f18);
	eagl_p_glMultMatrixx(a0);
	EAGL_LEAVE(e, 0x1f18);
}

static void
eagl_gen_glNormal3x(void *context, GLfixed a0, GLfixed a1, GLfixed a2)
{
	struct eagl *e = context;
	if (eagl_p_glNormal3x == NULL) {
		(void)eagl_missing(context, 0x1f20);
		return;
	}
	EAGL_ENTER(e, 0x1f20);
	eagl_p_glNormal3x(a0, a1, a2);
	EAGL_LEAVE(e, 0x1f20);
}

static void
eagl_gen_glOrthof(void *context, GLfloat a0, GLfloat a1, GLfloat a2, GLfloat a3, GLfloat a4, GLfloat a5)
{
	struct eagl *e = context;
	if (eagl_p_glOrthof == NULL) {
		(void)eagl_missing(context, 0x1f28);
		return;
	}
	EAGL_ENTER(e, 0x1f28);
	eagl_p_glOrthof(a0, a1, a2, a3, a4, a5);
	EAGL_LEAVE(e, 0x1f28);
}

static void
eagl_gen_glOrthox(void *context, GLfixed a0, GLfixed a1, GLfixed a2, GLfixed a3, GLfixed a4, GLfixed a5)
{
	struct eagl *e = context;
	if (eagl_p_glOrthox == NULL) {
		(void)eagl_missing(context, 0x1f30);
		return;
	}
	EAGL_ENTER(e, 0x1f30);
	eagl_p_glOrthox(a0, a1, a2, a3, a4, a5);
	EAGL_LEAVE(e, 0x1f30);
}

static void
eagl_gen_glPointSizex(void *context, GLfixed a0)
{
	struct eagl *e = context;
	if (eagl_p_glPointSizex == NULL) {
		(void)eagl_missing(context, 0x1f38);
		return;
	}
	EAGL_ENTER(e, 0x1f38);
	eagl_p_glPointSizex(a0);
	EAGL_LEAVE(e, 0x1f38);
}

static void
eagl_gen_glPolygonOffsetx(void *context, GLfixed a0, GLfixed a1)
{
	struct eagl *e = context;
	if (eagl_p_glPolygonOffsetx == NULL) {
		(void)eagl_missing(context, 0x1f40);
		return;
	}
	EAGL_ENTER(e, 0x1f40);
	eagl_p_glPolygonOffsetx(a0, a1);
	EAGL_LEAVE(e, 0x1f40);
}

static void
eagl_gen_glRotatex(void *context, GLfixed a0, GLfixed a1, GLfixed a2, GLfixed a3)
{
	struct eagl *e = context;
	if (eagl_p_glRotatex == NULL) {
		(void)eagl_missing(context, 0x1f48);
		return;
	}
	EAGL_ENTER(e, 0x1f48);
	eagl_p_glRotatex(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1f48);
}

static void
eagl_gen_glScalex(void *context, GLfixed a0, GLfixed a1, GLfixed a2)
{
	struct eagl *e = context;
	if (eagl_p_glScalex == NULL) {
		(void)eagl_missing(context, 0x1f50);
		return;
	}
	EAGL_ENTER(e, 0x1f50);
	eagl_p_glScalex(a0, a1, a2);
	EAGL_LEAVE(e, 0x1f50);
}

static void
eagl_gen_glTexEnvx(void *context, GLenum a0, GLenum a1, GLfixed a2)
{
	struct eagl *e = context;
	if (eagl_p_glTexEnvx == NULL) {
		(void)eagl_missing(context, 0x1f58);
		return;
	}
	EAGL_ENTER(e, 0x1f58);
	eagl_p_glTexEnvx(a0, a1, a2);
	EAGL_LEAVE(e, 0x1f58);
}

static void
eagl_gen_glTexEnvxv(void *context, GLenum a0, GLenum a1, const GLfixed * a2)
{
	struct eagl *e = context;
	if (eagl_p_glTexEnvxv == NULL) {
		(void)eagl_missing(context, 0x1f60);
		return;
	}
	EAGL_ENTER(e, 0x1f60);
	eagl_p_glTexEnvxv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1f60);
}

static void
eagl_gen_glTexParameterx(void *context, GLenum a0, GLenum a1, GLfixed a2)
{
	struct eagl *e = context;
	if (eagl_p_glTexParameterx == NULL) {
		(void)eagl_missing(context, 0x1f68);
		return;
	}
	EAGL_ENTER(e, 0x1f68);
	eagl_p_glTexParameterx(a0, a1, a2);
	EAGL_LEAVE(e, 0x1f68);
}

static void
eagl_gen_glTexParameterxv(void *context, GLenum a0, GLenum a1, const GLfixed * a2)
{
	struct eagl *e = context;
	if (eagl_p_glTexParameterxv == NULL) {
		(void)eagl_missing(context, 0x1f70);
		return;
	}
	EAGL_ENTER(e, 0x1f70);
	eagl_p_glTexParameterxv(a0, a1, a2);
	EAGL_LEAVE(e, 0x1f70);
}

static void
eagl_gen_glTranslatex(void *context, GLfixed a0, GLfixed a1, GLfixed a2)
{
	struct eagl *e = context;
	if (eagl_p_glTranslatex == NULL) {
		(void)eagl_missing(context, 0x1f78);
		return;
	}
	EAGL_ENTER(e, 0x1f78);
	eagl_p_glTranslatex(a0, a1, a2);
	EAGL_LEAVE(e, 0x1f78);
}

static void
eagl_gen_glMultiTexCoord4x(void *context, GLenum a0, GLfixed a1, GLfixed a2, GLfixed a3, GLfixed a4)
{
	struct eagl *e = context;
	if (eagl_p_glMultiTexCoord4x == NULL) {
		(void)eagl_missing(context, 0x1f80);
		return;
	}
	EAGL_ENTER(e, 0x1f80);
	eagl_p_glMultiTexCoord4x(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1f80);
}

static void
eagl_gen_glSampleCoveragex(void *context, GLclampx a0, GLboolean a1)
{
	struct eagl *e = context;
	if (eagl_p_glSampleCoveragex == NULL) {
		(void)eagl_missing(context, 0x1f88);
		return;
	}
	EAGL_ENTER(e, 0x1f88);
	eagl_p_glSampleCoveragex(a0, a1);
	EAGL_LEAVE(e, 0x1f88);
}

static void
eagl_gen_glPointParameterx(void *context, GLenum a0, GLfixed a1)
{
	struct eagl *e = context;
	if (eagl_p_glPointParameterx == NULL) {
		(void)eagl_missing(context, 0x1f90);
		return;
	}
	EAGL_ENTER(e, 0x1f90);
	eagl_p_glPointParameterx(a0, a1);
	EAGL_LEAVE(e, 0x1f90);
}

static void
eagl_gen_glPointParameterxv(void *context, GLenum a0, const GLfixed * a1)
{
	struct eagl *e = context;
	if (eagl_p_glPointParameterxv == NULL) {
		(void)eagl_missing(context, 0x1f98);
		return;
	}
	EAGL_ENTER(e, 0x1f98);
	eagl_p_glPointParameterxv(a0, a1);
	EAGL_LEAVE(e, 0x1f98);
}

static void
eagl_gen_glCurrentPaletteMatrixOES(void *context, GLuint a0)
{
	struct eagl *e = context;
	if (eagl_p_glCurrentPaletteMatrixOES == NULL) {
		(void)eagl_missing(context, 0x1fa0);
		return;
	}
	EAGL_ENTER(e, 0x1fa0);
	eagl_p_glCurrentPaletteMatrixOES(a0);
	EAGL_LEAVE(e, 0x1fa0);
}

static void
eagl_gen_glLoadPaletteFromModelViewMatrixOES(void *context)
{
	struct eagl *e = context;
	if (eagl_p_glLoadPaletteFromModelViewMatrixOES == NULL) {
		(void)eagl_missing(context, 0x1fa8);
		return;
	}
	EAGL_ENTER(e, 0x1fa8);
	eagl_p_glLoadPaletteFromModelViewMatrixOES();
	EAGL_LEAVE(e, 0x1fa8);
}

static void
eagl_gen_glMatrixIndexPointerOES(void *context, GLint a0, GLenum a1, GLsizei a2, const void * a3)
{
	struct eagl *e = context;
	if (eagl_p_glMatrixIndexPointerOES == NULL) {
		(void)eagl_missing(context, 0x1fb0);
		return;
	}
	EAGL_ENTER(e, 0x1fb0);
	eagl_p_glMatrixIndexPointerOES(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1fb0);
}

static void
eagl_gen_glWeightPointerOES(void *context, GLint a0, GLenum a1, GLsizei a2, const void * a3)
{
	struct eagl *e = context;
	if (eagl_p_glWeightPointerOES == NULL) {
		(void)eagl_missing(context, 0x1fb8);
		return;
	}
	EAGL_ENTER(e, 0x1fb8);
	eagl_p_glWeightPointerOES(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x1fb8);
}

static void
eagl_gen_glDrawTexsOES(void *context, GLshort a0, GLshort a1, GLshort a2, GLshort a3, GLshort a4)
{
	struct eagl *e = context;
	if (eagl_p_glDrawTexsOES == NULL) {
		(void)eagl_missing(context, 0x1fc0);
		return;
	}
	EAGL_ENTER(e, 0x1fc0);
	eagl_p_glDrawTexsOES(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1fc0);
}

static void
eagl_gen_glDrawTexiOES(void *context, GLint a0, GLint a1, GLint a2, GLint a3, GLint a4)
{
	struct eagl *e = context;
	if (eagl_p_glDrawTexiOES == NULL) {
		(void)eagl_missing(context, 0x1fc8);
		return;
	}
	EAGL_ENTER(e, 0x1fc8);
	eagl_p_glDrawTexiOES(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1fc8);
}

static void
eagl_gen_glDrawTexxOES(void *context, GLfixed a0, GLfixed a1, GLfixed a2, GLfixed a3, GLfixed a4)
{
	struct eagl *e = context;
	if (eagl_p_glDrawTexxOES == NULL) {
		(void)eagl_missing(context, 0x1fd0);
		return;
	}
	EAGL_ENTER(e, 0x1fd0);
	eagl_p_glDrawTexxOES(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1fd0);
}

static void
eagl_gen_glDrawTexsvOES(void *context, const GLshort * a0)
{
	struct eagl *e = context;
	if (eagl_p_glDrawTexsvOES == NULL) {
		(void)eagl_missing(context, 0x1fd8);
		return;
	}
	EAGL_ENTER(e, 0x1fd8);
	eagl_p_glDrawTexsvOES(a0);
	EAGL_LEAVE(e, 0x1fd8);
}

static void
eagl_gen_glDrawTexivOES(void *context, const GLint * a0)
{
	struct eagl *e = context;
	if (eagl_p_glDrawTexivOES == NULL) {
		(void)eagl_missing(context, 0x1fe0);
		return;
	}
	EAGL_ENTER(e, 0x1fe0);
	eagl_p_glDrawTexivOES(a0);
	EAGL_LEAVE(e, 0x1fe0);
}

static void
eagl_gen_glDrawTexxvOES(void *context, const GLfixed * a0)
{
	struct eagl *e = context;
	if (eagl_p_glDrawTexxvOES == NULL) {
		(void)eagl_missing(context, 0x1fe8);
		return;
	}
	EAGL_ENTER(e, 0x1fe8);
	eagl_p_glDrawTexxvOES(a0);
	EAGL_LEAVE(e, 0x1fe8);
}

static void
eagl_gen_glDrawTexfOES(void *context, GLfloat a0, GLfloat a1, GLfloat a2, GLfloat a3, GLfloat a4)
{
	struct eagl *e = context;
	if (eagl_p_glDrawTexfOES == NULL) {
		(void)eagl_missing(context, 0x1ff0);
		return;
	}
	EAGL_ENTER(e, 0x1ff0);
	eagl_p_glDrawTexfOES(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x1ff0);
}

static void
eagl_gen_glDrawTexfvOES(void *context, const GLfloat * a0)
{
	struct eagl *e = context;
	if (eagl_p_glDrawTexfvOES == NULL) {
		(void)eagl_missing(context, 0x1ff8);
		return;
	}
	EAGL_ENTER(e, 0x1ff8);
	eagl_p_glDrawTexfvOES(a0);
	EAGL_LEAVE(e, 0x1ff8);
}

static void
eagl_gen_glDiscardFramebufferEXT(void *context, GLenum a0, GLsizei a1, const GLenum * a2)
{
	struct eagl *e = context;
	if (eagl_p_glDiscardFramebufferEXT == NULL) {
		(void)eagl_missing(context, 0x2000);
		return;
	}
	EAGL_ENTER(e, 0x2000);
	eagl_p_glDiscardFramebufferEXT(a0, a1, a2);
	EAGL_LEAVE(e, 0x2000);
}

static long
eagl_gen_missing_2010(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
	return eagl_missing_raw(0x2010, a0, a1, a2, a3);
}
static void
eagl_gen_glResolveMultisampleFramebufferAPPLE(void *context)
{
	struct eagl *e = context;
	if (eagl_p_glResolveMultisampleFramebufferAPPLE == NULL) {
		(void)eagl_missing(context, 0x2018);
		return;
	}
	EAGL_ENTER(e, 0x2018);
	eagl_p_glResolveMultisampleFramebufferAPPLE();
	EAGL_LEAVE(e, 0x2018);
}

static void
eagl_gen_glCopyTextureLevelsAPPLE(void *context, GLuint a0, GLuint a1, GLint a2, GLsizei a3)
{
	struct eagl *e = context;
	if (eagl_p_glCopyTextureLevelsAPPLE == NULL) {
		(void)eagl_missing(context, 0x2020);
		return;
	}
	EAGL_ENTER(e, 0x2020);
	eagl_p_glCopyTextureLevelsAPPLE(a0, a1, a2, a3);
	EAGL_LEAVE(e, 0x2020);
}

static void
eagl_gen_glInvalidateSubFramebuffer(void *context, GLenum a0, GLsizei a1, const GLenum * a2, GLint a3, GLint a4, GLsizei a5, GLsizei a6)
{
	struct eagl *e = context;
	if (eagl_p_glInvalidateSubFramebuffer == NULL) {
		(void)eagl_missing(context, 0x2028);
		return;
	}
	EAGL_ENTER(e, 0x2028);
	eagl_p_glInvalidateSubFramebuffer(a0, a1, a2, a3, a4, a5, a6);
	EAGL_LEAVE(e, 0x2028);
}

static void
eagl_gen_glGetInternalformativ(void *context, GLenum a0, GLenum a1, GLenum a2, GLsizei a3, GLint * a4)
{
	struct eagl *e = context;
	if (eagl_p_glGetInternalformativ == NULL) {
		(void)eagl_missing(context, 0x2030);
		return;
	}
	EAGL_ENTER(e, 0x2030);
	eagl_p_glGetInternalformativ(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x2030);
}

static void
eagl_gen_glTexStorage2D(void *context, GLenum a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4)
{
	struct eagl *e = context;
	if (eagl_p_glTexStorage2D == NULL) {
		(void)eagl_missing(context, 0x2040);
		return;
	}
	EAGL_ENTER(e, 0x2040);
	eagl_p_glTexStorage2D(a0, a1, a2, a3, a4);
	EAGL_LEAVE(e, 0x2040);
}

static void
eagl_gen_glTexStorage3D(void *context, GLenum a0, GLsizei a1, GLenum a2, GLsizei a3, GLsizei a4, GLsizei a5)
{
	struct eagl *e = context;
	if (eagl_p_glTexStorage3D == NULL) {
		(void)eagl_missing(context, 0x2048);
		return;
	}
	EAGL_ENTER(e, 0x2048);
	eagl_p_glTexStorage3D(a0, a1, a2, a3, a4, a5);
	EAGL_LEAVE(e, 0x2048);
}

static long eagl_gen_missing_8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x8, a0, a1, a2, a3); }
static long eagl_gen_missing_18(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x18, a0, a1, a2, a3); }
static long eagl_gen_missing_20(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x20, a0, a1, a2, a3); }
static long eagl_gen_missing_28(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x28, a0, a1, a2, a3); }
static long eagl_gen_missing_38(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x38, a0, a1, a2, a3); }
static long eagl_gen_missing_48(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x48, a0, a1, a2, a3); }
static long eagl_gen_missing_50(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x50, a0, a1, a2, a3); }
static long eagl_gen_missing_60(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x60, a0, a1, a2, a3); }
static long eagl_gen_missing_70(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x70, a0, a1, a2, a3); }
static long eagl_gen_missing_78(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x78, a0, a1, a2, a3); }
static long eagl_gen_missing_88(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x88, a0, a1, a2, a3); }
static long eagl_gen_missing_90(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x90, a0, a1, a2, a3); }
static long eagl_gen_missing_98(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x98, a0, a1, a2, a3); }
static long eagl_gen_missing_a0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa0, a0, a1, a2, a3); }
static long eagl_gen_missing_a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa8, a0, a1, a2, a3); }
static long eagl_gen_missing_b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb0, a0, a1, a2, a3); }
static long eagl_gen_missing_b8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb8, a0, a1, a2, a3); }
static long eagl_gen_missing_c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc0, a0, a1, a2, a3); }
static long eagl_gen_missing_c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc8, a0, a1, a2, a3); }
static long eagl_gen_missing_d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd0, a0, a1, a2, a3); }
static long eagl_gen_missing_d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd8, a0, a1, a2, a3); }
static long eagl_gen_missing_e0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe0, a0, a1, a2, a3); }
static long eagl_gen_missing_e8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe8, a0, a1, a2, a3); }
static long eagl_gen_missing_f0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf0, a0, a1, a2, a3); }
static long eagl_gen_missing_f8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf8, a0, a1, a2, a3); }
static long eagl_gen_missing_100(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x100, a0, a1, a2, a3); }
static long eagl_gen_missing_108(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x108, a0, a1, a2, a3); }
static long eagl_gen_missing_110(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x110, a0, a1, a2, a3); }
static long eagl_gen_missing_118(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x118, a0, a1, a2, a3); }
static long eagl_gen_missing_120(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x120, a0, a1, a2, a3); }
static long eagl_gen_missing_128(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x128, a0, a1, a2, a3); }
static long eagl_gen_missing_138(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x138, a0, a1, a2, a3); }
static long eagl_gen_missing_140(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x140, a0, a1, a2, a3); }
static long eagl_gen_missing_148(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x148, a0, a1, a2, a3); }
static long eagl_gen_missing_150(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x150, a0, a1, a2, a3); }
static long eagl_gen_missing_158(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x158, a0, a1, a2, a3); }
static long eagl_gen_missing_168(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x168, a0, a1, a2, a3); }
static long eagl_gen_missing_170(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x170, a0, a1, a2, a3); }
static long eagl_gen_missing_178(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x178, a0, a1, a2, a3); }
static long eagl_gen_missing_180(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x180, a0, a1, a2, a3); }
static long eagl_gen_missing_188(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x188, a0, a1, a2, a3); }
static long eagl_gen_missing_198(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x198, a0, a1, a2, a3); }
static long eagl_gen_missing_1a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1a8, a0, a1, a2, a3); }
static long eagl_gen_missing_1b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b0, a0, a1, a2, a3); }
static long eagl_gen_missing_1c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c0, a0, a1, a2, a3); }
static long eagl_gen_missing_1d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d8, a0, a1, a2, a3); }
static long eagl_gen_missing_1f8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1f8, a0, a1, a2, a3); }
static long eagl_gen_missing_218(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x218, a0, a1, a2, a3); }
static long eagl_gen_missing_228(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x228, a0, a1, a2, a3); }
static long eagl_gen_missing_230(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x230, a0, a1, a2, a3); }
static long eagl_gen_missing_238(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x238, a0, a1, a2, a3); }
static long eagl_gen_missing_240(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x240, a0, a1, a2, a3); }
static long eagl_gen_missing_258(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x258, a0, a1, a2, a3); }
static long eagl_gen_missing_260(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x260, a0, a1, a2, a3); }
static long eagl_gen_missing_268(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x268, a0, a1, a2, a3); }
static long eagl_gen_missing_270(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x270, a0, a1, a2, a3); }
static long eagl_gen_missing_278(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x278, a0, a1, a2, a3); }
static long eagl_gen_missing_280(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x280, a0, a1, a2, a3); }
static long eagl_gen_missing_288(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x288, a0, a1, a2, a3); }
static long eagl_gen_missing_290(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x290, a0, a1, a2, a3); }
static long eagl_gen_missing_298(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x298, a0, a1, a2, a3); }
static long eagl_gen_missing_2a0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2a0, a0, a1, a2, a3); }
static long eagl_gen_missing_2a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2a8, a0, a1, a2, a3); }
static long eagl_gen_missing_2b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2b0, a0, a1, a2, a3); }
static long eagl_gen_missing_2b8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2b8, a0, a1, a2, a3); }
static long eagl_gen_missing_2c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2c0, a0, a1, a2, a3); }
static long eagl_gen_missing_2c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2c8, a0, a1, a2, a3); }
static long eagl_gen_missing_2f0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2f0, a0, a1, a2, a3); }
static long eagl_gen_missing_2f8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2f8, a0, a1, a2, a3); }
static long eagl_gen_missing_308(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x308, a0, a1, a2, a3); }
static long eagl_gen_missing_310(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x310, a0, a1, a2, a3); }
static long eagl_gen_missing_328(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x328, a0, a1, a2, a3); }
static long eagl_gen_missing_330(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x330, a0, a1, a2, a3); }
static long eagl_gen_missing_358(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x358, a0, a1, a2, a3); }
static long eagl_gen_missing_360(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x360, a0, a1, a2, a3); }
static long eagl_gen_missing_368(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x368, a0, a1, a2, a3); }
static long eagl_gen_missing_370(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x370, a0, a1, a2, a3); }
static long eagl_gen_missing_380(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x380, a0, a1, a2, a3); }
static long eagl_gen_missing_388(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x388, a0, a1, a2, a3); }
static long eagl_gen_missing_390(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x390, a0, a1, a2, a3); }
static long eagl_gen_missing_398(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x398, a0, a1, a2, a3); }
static long eagl_gen_missing_3a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x3a8, a0, a1, a2, a3); }
static long eagl_gen_missing_3c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x3c8, a0, a1, a2, a3); }
static long eagl_gen_missing_3d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x3d0, a0, a1, a2, a3); }
static long eagl_gen_missing_3d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x3d8, a0, a1, a2, a3); }
static long eagl_gen_missing_410(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x410, a0, a1, a2, a3); }
static long eagl_gen_missing_418(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x418, a0, a1, a2, a3); }
static long eagl_gen_missing_420(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x420, a0, a1, a2, a3); }
static long eagl_gen_missing_428(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x428, a0, a1, a2, a3); }
static long eagl_gen_missing_430(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x430, a0, a1, a2, a3); }
static long eagl_gen_missing_438(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x438, a0, a1, a2, a3); }
static long eagl_gen_missing_440(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x440, a0, a1, a2, a3); }
static long eagl_gen_missing_448(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x448, a0, a1, a2, a3); }
static long eagl_gen_missing_450(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x450, a0, a1, a2, a3); }
static long eagl_gen_missing_458(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x458, a0, a1, a2, a3); }
static long eagl_gen_missing_460(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x460, a0, a1, a2, a3); }
static long eagl_gen_missing_468(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x468, a0, a1, a2, a3); }
static long eagl_gen_missing_470(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x470, a0, a1, a2, a3); }
static long eagl_gen_missing_478(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x478, a0, a1, a2, a3); }
static long eagl_gen_missing_488(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x488, a0, a1, a2, a3); }
static long eagl_gen_missing_4a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x4a8, a0, a1, a2, a3); }
static long eagl_gen_missing_4b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x4b0, a0, a1, a2, a3); }
static long eagl_gen_missing_4c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x4c8, a0, a1, a2, a3); }
static long eagl_gen_missing_4d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x4d0, a0, a1, a2, a3); }
static long eagl_gen_missing_4d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x4d8, a0, a1, a2, a3); }
static long eagl_gen_missing_4e8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x4e8, a0, a1, a2, a3); }
static long eagl_gen_missing_4f8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x4f8, a0, a1, a2, a3); }
static long eagl_gen_missing_508(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x508, a0, a1, a2, a3); }
static long eagl_gen_missing_518(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x518, a0, a1, a2, a3); }
static long eagl_gen_missing_520(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x520, a0, a1, a2, a3); }
static long eagl_gen_missing_528(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x528, a0, a1, a2, a3); }
static long eagl_gen_missing_530(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x530, a0, a1, a2, a3); }
static long eagl_gen_missing_538(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x538, a0, a1, a2, a3); }
static long eagl_gen_missing_540(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x540, a0, a1, a2, a3); }
static long eagl_gen_missing_548(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x548, a0, a1, a2, a3); }
static long eagl_gen_missing_550(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x550, a0, a1, a2, a3); }
static long eagl_gen_missing_568(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x568, a0, a1, a2, a3); }
static long eagl_gen_missing_570(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x570, a0, a1, a2, a3); }
static long eagl_gen_missing_580(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x580, a0, a1, a2, a3); }
static long eagl_gen_missing_590(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x590, a0, a1, a2, a3); }
static long eagl_gen_missing_598(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x598, a0, a1, a2, a3); }
static long eagl_gen_missing_5a0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x5a0, a0, a1, a2, a3); }
static long eagl_gen_missing_5a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x5a8, a0, a1, a2, a3); }
static long eagl_gen_missing_5b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x5b0, a0, a1, a2, a3); }
static long eagl_gen_missing_5c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x5c0, a0, a1, a2, a3); }
static long eagl_gen_missing_5c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x5c8, a0, a1, a2, a3); }
static long eagl_gen_missing_5d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x5d0, a0, a1, a2, a3); }
static long eagl_gen_missing_5d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x5d8, a0, a1, a2, a3); }
static long eagl_gen_missing_5e0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x5e0, a0, a1, a2, a3); }
static long eagl_gen_missing_5f0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x5f0, a0, a1, a2, a3); }
static long eagl_gen_missing_5f8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x5f8, a0, a1, a2, a3); }
static long eagl_gen_missing_600(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x600, a0, a1, a2, a3); }
static long eagl_gen_missing_608(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x608, a0, a1, a2, a3); }
static long eagl_gen_missing_610(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x610, a0, a1, a2, a3); }
static long eagl_gen_missing_618(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x618, a0, a1, a2, a3); }
static long eagl_gen_missing_628(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x628, a0, a1, a2, a3); }
static long eagl_gen_missing_630(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x630, a0, a1, a2, a3); }
static long eagl_gen_missing_638(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x638, a0, a1, a2, a3); }
static long eagl_gen_missing_648(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x648, a0, a1, a2, a3); }
static long eagl_gen_missing_658(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x658, a0, a1, a2, a3); }
static long eagl_gen_missing_660(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x660, a0, a1, a2, a3); }
static long eagl_gen_missing_668(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x668, a0, a1, a2, a3); }
static long eagl_gen_missing_678(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x678, a0, a1, a2, a3); }
static long eagl_gen_missing_680(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x680, a0, a1, a2, a3); }
static long eagl_gen_missing_688(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x688, a0, a1, a2, a3); }
static long eagl_gen_missing_690(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x690, a0, a1, a2, a3); }
static long eagl_gen_missing_6a0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x6a0, a0, a1, a2, a3); }
static long eagl_gen_missing_6a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x6a8, a0, a1, a2, a3); }
static long eagl_gen_missing_6b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x6b0, a0, a1, a2, a3); }
static long eagl_gen_missing_6b8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x6b8, a0, a1, a2, a3); }
static long eagl_gen_missing_6c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x6c0, a0, a1, a2, a3); }
static long eagl_gen_missing_6c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x6c8, a0, a1, a2, a3); }
static long eagl_gen_missing_6d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x6d0, a0, a1, a2, a3); }
static long eagl_gen_missing_6d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x6d8, a0, a1, a2, a3); }
static long eagl_gen_missing_6e0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x6e0, a0, a1, a2, a3); }
static long eagl_gen_missing_6e8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x6e8, a0, a1, a2, a3); }
static long eagl_gen_missing_6f0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x6f0, a0, a1, a2, a3); }
static long eagl_gen_missing_6f8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x6f8, a0, a1, a2, a3); }
static long eagl_gen_missing_700(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x700, a0, a1, a2, a3); }
static long eagl_gen_missing_708(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x708, a0, a1, a2, a3); }
static long eagl_gen_missing_710(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x710, a0, a1, a2, a3); }
static long eagl_gen_missing_718(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x718, a0, a1, a2, a3); }
static long eagl_gen_missing_720(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x720, a0, a1, a2, a3); }
static long eagl_gen_missing_728(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x728, a0, a1, a2, a3); }
static long eagl_gen_missing_730(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x730, a0, a1, a2, a3); }
static long eagl_gen_missing_738(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x738, a0, a1, a2, a3); }
static long eagl_gen_missing_740(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x740, a0, a1, a2, a3); }
static long eagl_gen_missing_748(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x748, a0, a1, a2, a3); }
static long eagl_gen_missing_750(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x750, a0, a1, a2, a3); }
static long eagl_gen_missing_758(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x758, a0, a1, a2, a3); }
static long eagl_gen_missing_760(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x760, a0, a1, a2, a3); }
static long eagl_gen_missing_778(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x778, a0, a1, a2, a3); }
static long eagl_gen_missing_780(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x780, a0, a1, a2, a3); }
static long eagl_gen_missing_788(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x788, a0, a1, a2, a3); }
static long eagl_gen_missing_790(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x790, a0, a1, a2, a3); }
static long eagl_gen_missing_798(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x798, a0, a1, a2, a3); }
static long eagl_gen_missing_7a0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x7a0, a0, a1, a2, a3); }
static long eagl_gen_missing_7a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x7a8, a0, a1, a2, a3); }
static long eagl_gen_missing_7b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x7b0, a0, a1, a2, a3); }
static long eagl_gen_missing_7b8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x7b8, a0, a1, a2, a3); }
static long eagl_gen_missing_7c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x7c0, a0, a1, a2, a3); }
static long eagl_gen_missing_7d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x7d0, a0, a1, a2, a3); }
static long eagl_gen_missing_7e8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x7e8, a0, a1, a2, a3); }
static long eagl_gen_missing_810(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x810, a0, a1, a2, a3); }
static long eagl_gen_missing_818(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x818, a0, a1, a2, a3); }
static long eagl_gen_missing_820(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x820, a0, a1, a2, a3); }
static long eagl_gen_missing_828(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x828, a0, a1, a2, a3); }
static long eagl_gen_missing_830(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x830, a0, a1, a2, a3); }
static long eagl_gen_missing_838(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x838, a0, a1, a2, a3); }
static long eagl_gen_missing_840(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x840, a0, a1, a2, a3); }
static long eagl_gen_missing_848(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x848, a0, a1, a2, a3); }
static long eagl_gen_missing_850(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x850, a0, a1, a2, a3); }
static long eagl_gen_missing_858(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x858, a0, a1, a2, a3); }
static long eagl_gen_missing_860(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x860, a0, a1, a2, a3); }
static long eagl_gen_missing_868(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x868, a0, a1, a2, a3); }
static long eagl_gen_missing_870(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x870, a0, a1, a2, a3); }
static long eagl_gen_missing_878(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x878, a0, a1, a2, a3); }
static long eagl_gen_missing_880(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x880, a0, a1, a2, a3); }
static long eagl_gen_missing_888(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x888, a0, a1, a2, a3); }
static long eagl_gen_missing_890(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x890, a0, a1, a2, a3); }
static long eagl_gen_missing_898(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x898, a0, a1, a2, a3); }
static long eagl_gen_missing_8a0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x8a0, a0, a1, a2, a3); }
static long eagl_gen_missing_8a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x8a8, a0, a1, a2, a3); }
static long eagl_gen_missing_8b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x8b0, a0, a1, a2, a3); }
static long eagl_gen_missing_8b8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x8b8, a0, a1, a2, a3); }
static long eagl_gen_missing_8c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x8c0, a0, a1, a2, a3); }
static long eagl_gen_missing_8c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x8c8, a0, a1, a2, a3); }
static long eagl_gen_missing_8d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x8d0, a0, a1, a2, a3); }
static long eagl_gen_missing_8d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x8d8, a0, a1, a2, a3); }
static long eagl_gen_missing_8e0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x8e0, a0, a1, a2, a3); }
static long eagl_gen_missing_8e8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x8e8, a0, a1, a2, a3); }
static long eagl_gen_missing_8f0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x8f0, a0, a1, a2, a3); }
static long eagl_gen_missing_8f8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x8f8, a0, a1, a2, a3); }
static long eagl_gen_missing_900(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x900, a0, a1, a2, a3); }
static long eagl_gen_missing_908(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x908, a0, a1, a2, a3); }
static long eagl_gen_missing_938(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x938, a0, a1, a2, a3); }
static long eagl_gen_missing_940(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x940, a0, a1, a2, a3); }
static long eagl_gen_missing_948(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x948, a0, a1, a2, a3); }
static long eagl_gen_missing_950(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x950, a0, a1, a2, a3); }
static long eagl_gen_missing_958(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x958, a0, a1, a2, a3); }
static long eagl_gen_missing_960(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x960, a0, a1, a2, a3); }
static long eagl_gen_missing_968(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x968, a0, a1, a2, a3); }
static long eagl_gen_missing_998(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x998, a0, a1, a2, a3); }
static long eagl_gen_missing_9a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x9a8, a0, a1, a2, a3); }
static long eagl_gen_missing_9b8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x9b8, a0, a1, a2, a3); }
static long eagl_gen_missing_9c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x9c0, a0, a1, a2, a3); }
static long eagl_gen_missing_9c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x9c8, a0, a1, a2, a3); }
static long eagl_gen_missing_9d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x9d0, a0, a1, a2, a3); }
static long eagl_gen_missing_9d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x9d8, a0, a1, a2, a3); }
static long eagl_gen_missing_9e0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x9e0, a0, a1, a2, a3); }
static long eagl_gen_missing_9e8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x9e8, a0, a1, a2, a3); }
static long eagl_gen_missing_9f0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x9f0, a0, a1, a2, a3); }
static long eagl_gen_missing_9f8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x9f8, a0, a1, a2, a3); }
static long eagl_gen_missing_a00(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa00, a0, a1, a2, a3); }
static long eagl_gen_missing_a08(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa08, a0, a1, a2, a3); }
static long eagl_gen_missing_a10(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa10, a0, a1, a2, a3); }
static long eagl_gen_missing_a18(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa18, a0, a1, a2, a3); }
static long eagl_gen_missing_a20(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa20, a0, a1, a2, a3); }
static long eagl_gen_missing_a28(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa28, a0, a1, a2, a3); }
static long eagl_gen_missing_a30(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa30, a0, a1, a2, a3); }
static long eagl_gen_missing_a38(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa38, a0, a1, a2, a3); }
static long eagl_gen_missing_a40(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa40, a0, a1, a2, a3); }
static long eagl_gen_missing_a48(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa48, a0, a1, a2, a3); }
static long eagl_gen_missing_a50(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa50, a0, a1, a2, a3); }
static long eagl_gen_missing_a58(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa58, a0, a1, a2, a3); }
static long eagl_gen_missing_a60(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa60, a0, a1, a2, a3); }
static long eagl_gen_missing_a68(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa68, a0, a1, a2, a3); }
static long eagl_gen_missing_a70(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xa70, a0, a1, a2, a3); }
static long eagl_gen_missing_aa0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xaa0, a0, a1, a2, a3); }
static long eagl_gen_missing_aa8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xaa8, a0, a1, a2, a3); }
static long eagl_gen_missing_ac0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xac0, a0, a1, a2, a3); }
static long eagl_gen_missing_ac8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xac8, a0, a1, a2, a3); }
static long eagl_gen_missing_ad0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xad0, a0, a1, a2, a3); }
static long eagl_gen_missing_ad8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xad8, a0, a1, a2, a3); }
static long eagl_gen_missing_ae0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xae0, a0, a1, a2, a3); }
static long eagl_gen_missing_ae8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xae8, a0, a1, a2, a3); }
static long eagl_gen_missing_af0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xaf0, a0, a1, a2, a3); }
static long eagl_gen_missing_af8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xaf8, a0, a1, a2, a3); }
static long eagl_gen_missing_b00(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb00, a0, a1, a2, a3); }
static long eagl_gen_missing_b08(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb08, a0, a1, a2, a3); }
static long eagl_gen_missing_b10(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb10, a0, a1, a2, a3); }
static long eagl_gen_missing_b18(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb18, a0, a1, a2, a3); }
static long eagl_gen_missing_b20(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb20, a0, a1, a2, a3); }
static long eagl_gen_missing_b28(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb28, a0, a1, a2, a3); }
static long eagl_gen_missing_b30(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb30, a0, a1, a2, a3); }
static long eagl_gen_missing_b38(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb38, a0, a1, a2, a3); }
static long eagl_gen_missing_b40(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb40, a0, a1, a2, a3); }
static long eagl_gen_missing_b48(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb48, a0, a1, a2, a3); }
static long eagl_gen_missing_b50(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb50, a0, a1, a2, a3); }
static long eagl_gen_missing_b58(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb58, a0, a1, a2, a3); }
static long eagl_gen_missing_b60(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb60, a0, a1, a2, a3); }
static long eagl_gen_missing_b68(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb68, a0, a1, a2, a3); }
static long eagl_gen_missing_b70(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb70, a0, a1, a2, a3); }
static long eagl_gen_missing_b78(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb78, a0, a1, a2, a3); }
static long eagl_gen_missing_b80(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb80, a0, a1, a2, a3); }
static long eagl_gen_missing_b88(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb88, a0, a1, a2, a3); }
static long eagl_gen_missing_b98(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xb98, a0, a1, a2, a3); }
static long eagl_gen_missing_ba0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xba0, a0, a1, a2, a3); }
static long eagl_gen_missing_ba8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xba8, a0, a1, a2, a3); }
static long eagl_gen_missing_bb0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xbb0, a0, a1, a2, a3); }
static long eagl_gen_missing_bb8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xbb8, a0, a1, a2, a3); }
static long eagl_gen_missing_bc0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xbc0, a0, a1, a2, a3); }
static long eagl_gen_missing_bc8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xbc8, a0, a1, a2, a3); }
static long eagl_gen_missing_bd0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xbd0, a0, a1, a2, a3); }
static long eagl_gen_missing_bd8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xbd8, a0, a1, a2, a3); }
static long eagl_gen_missing_bf0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xbf0, a0, a1, a2, a3); }
static long eagl_gen_missing_c08(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc08, a0, a1, a2, a3); }
static long eagl_gen_missing_c10(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc10, a0, a1, a2, a3); }
static long eagl_gen_missing_c18(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc18, a0, a1, a2, a3); }
static long eagl_gen_missing_c20(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc20, a0, a1, a2, a3); }
static long eagl_gen_missing_c28(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc28, a0, a1, a2, a3); }
static long eagl_gen_missing_c30(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc30, a0, a1, a2, a3); }
static long eagl_gen_missing_c38(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc38, a0, a1, a2, a3); }
static long eagl_gen_missing_c40(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc40, a0, a1, a2, a3); }
static long eagl_gen_missing_c48(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc48, a0, a1, a2, a3); }
static long eagl_gen_missing_c50(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc50, a0, a1, a2, a3); }
static long eagl_gen_missing_c58(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc58, a0, a1, a2, a3); }
static long eagl_gen_missing_c60(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc60, a0, a1, a2, a3); }
static long eagl_gen_missing_c68(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc68, a0, a1, a2, a3); }
static long eagl_gen_missing_c70(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc70, a0, a1, a2, a3); }
static long eagl_gen_missing_c78(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc78, a0, a1, a2, a3); }
static long eagl_gen_missing_c80(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc80, a0, a1, a2, a3); }
static long eagl_gen_missing_c88(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc88, a0, a1, a2, a3); }
static long eagl_gen_missing_c90(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc90, a0, a1, a2, a3); }
static long eagl_gen_missing_c98(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xc98, a0, a1, a2, a3); }
static long eagl_gen_missing_ca0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xca0, a0, a1, a2, a3); }
static long eagl_gen_missing_ca8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xca8, a0, a1, a2, a3); }
static long eagl_gen_missing_cb8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xcb8, a0, a1, a2, a3); }
static long eagl_gen_missing_cc0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xcc0, a0, a1, a2, a3); }
static long eagl_gen_missing_cc8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xcc8, a0, a1, a2, a3); }
static long eagl_gen_missing_cd0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xcd0, a0, a1, a2, a3); }
static long eagl_gen_missing_cd8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xcd8, a0, a1, a2, a3); }
static long eagl_gen_missing_ce0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xce0, a0, a1, a2, a3); }
static long eagl_gen_missing_ce8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xce8, a0, a1, a2, a3); }
static long eagl_gen_missing_cf0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xcf0, a0, a1, a2, a3); }
static long eagl_gen_missing_cf8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xcf8, a0, a1, a2, a3); }
static long eagl_gen_missing_d00(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd00, a0, a1, a2, a3); }
static long eagl_gen_missing_d08(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd08, a0, a1, a2, a3); }
static long eagl_gen_missing_d10(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd10, a0, a1, a2, a3); }
static long eagl_gen_missing_d18(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd18, a0, a1, a2, a3); }
static long eagl_gen_missing_d20(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd20, a0, a1, a2, a3); }
static long eagl_gen_missing_d28(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd28, a0, a1, a2, a3); }
static long eagl_gen_missing_d30(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd30, a0, a1, a2, a3); }
static long eagl_gen_missing_d38(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd38, a0, a1, a2, a3); }
static long eagl_gen_missing_d40(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd40, a0, a1, a2, a3); }
static long eagl_gen_missing_d48(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd48, a0, a1, a2, a3); }
static long eagl_gen_missing_d50(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd50, a0, a1, a2, a3); }
static long eagl_gen_missing_d58(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd58, a0, a1, a2, a3); }
static long eagl_gen_missing_d60(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd60, a0, a1, a2, a3); }
static long eagl_gen_missing_d68(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd68, a0, a1, a2, a3); }
static long eagl_gen_missing_d70(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd70, a0, a1, a2, a3); }
static long eagl_gen_missing_d78(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd78, a0, a1, a2, a3); }
static long eagl_gen_missing_d80(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd80, a0, a1, a2, a3); }
static long eagl_gen_missing_d88(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd88, a0, a1, a2, a3); }
static long eagl_gen_missing_d90(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd90, a0, a1, a2, a3); }
static long eagl_gen_missing_d98(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xd98, a0, a1, a2, a3); }
static long eagl_gen_missing_da0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xda0, a0, a1, a2, a3); }
static long eagl_gen_missing_da8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xda8, a0, a1, a2, a3); }
static long eagl_gen_missing_db0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xdb0, a0, a1, a2, a3); }
static long eagl_gen_missing_de0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xde0, a0, a1, a2, a3); }
static long eagl_gen_missing_e08(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe08, a0, a1, a2, a3); }
static long eagl_gen_missing_e10(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe10, a0, a1, a2, a3); }
static long eagl_gen_missing_e18(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe18, a0, a1, a2, a3); }
static long eagl_gen_missing_e20(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe20, a0, a1, a2, a3); }
static long eagl_gen_missing_e28(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe28, a0, a1, a2, a3); }
static long eagl_gen_missing_e30(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe30, a0, a1, a2, a3); }
static long eagl_gen_missing_e38(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe38, a0, a1, a2, a3); }
static long eagl_gen_missing_e40(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe40, a0, a1, a2, a3); }
static long eagl_gen_missing_e48(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe48, a0, a1, a2, a3); }
static long eagl_gen_missing_e50(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe50, a0, a1, a2, a3); }
static long eagl_gen_missing_e68(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe68, a0, a1, a2, a3); }
static long eagl_gen_missing_e70(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe70, a0, a1, a2, a3); }
static long eagl_gen_missing_e78(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xe78, a0, a1, a2, a3); }
static long eagl_gen_missing_ec0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xec0, a0, a1, a2, a3); }
static long eagl_gen_missing_ec8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xec8, a0, a1, a2, a3); }
static long eagl_gen_missing_ed0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xed0, a0, a1, a2, a3); }
static long eagl_gen_missing_ed8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xed8, a0, a1, a2, a3); }
static long eagl_gen_missing_ee0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xee0, a0, a1, a2, a3); }
static long eagl_gen_missing_ef0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xef0, a0, a1, a2, a3); }
static long eagl_gen_missing_ef8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xef8, a0, a1, a2, a3); }
static long eagl_gen_missing_f08(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf08, a0, a1, a2, a3); }
static long eagl_gen_missing_f10(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf10, a0, a1, a2, a3); }
static long eagl_gen_missing_f20(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf20, a0, a1, a2, a3); }
static long eagl_gen_missing_f28(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf28, a0, a1, a2, a3); }
static long eagl_gen_missing_f38(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf38, a0, a1, a2, a3); }
static long eagl_gen_missing_f40(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf40, a0, a1, a2, a3); }
static long eagl_gen_missing_f48(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf48, a0, a1, a2, a3); }
static long eagl_gen_missing_f58(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf58, a0, a1, a2, a3); }
static long eagl_gen_missing_f60(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf60, a0, a1, a2, a3); }
static long eagl_gen_missing_f70(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf70, a0, a1, a2, a3); }
static long eagl_gen_missing_f78(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf78, a0, a1, a2, a3); }
static long eagl_gen_missing_f88(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf88, a0, a1, a2, a3); }
static long eagl_gen_missing_f90(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf90, a0, a1, a2, a3); }
static long eagl_gen_missing_f98(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xf98, a0, a1, a2, a3); }
static long eagl_gen_missing_fa0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xfa0, a0, a1, a2, a3); }
static long eagl_gen_missing_fa8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xfa8, a0, a1, a2, a3); }
static long eagl_gen_missing_fb0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xfb0, a0, a1, a2, a3); }
static long eagl_gen_missing_fb8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xfb8, a0, a1, a2, a3); }
static long eagl_gen_missing_fc8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xfc8, a0, a1, a2, a3); }
static long eagl_gen_missing_fd0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xfd0, a0, a1, a2, a3); }
static long eagl_gen_missing_fd8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xfd8, a0, a1, a2, a3); }
static long eagl_gen_missing_fe0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xfe0, a0, a1, a2, a3); }
static long eagl_gen_missing_fe8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xfe8, a0, a1, a2, a3); }
static long eagl_gen_missing_ff0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xff0, a0, a1, a2, a3); }
static long eagl_gen_missing_ff8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0xff8, a0, a1, a2, a3); }
static long eagl_gen_missing_1018(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1018, a0, a1, a2, a3); }
static long eagl_gen_missing_1038(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1038, a0, a1, a2, a3); }
static long eagl_gen_missing_1040(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1040, a0, a1, a2, a3); }
static long eagl_gen_missing_1048(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1048, a0, a1, a2, a3); }
static long eagl_gen_missing_1050(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1050, a0, a1, a2, a3); }
static long eagl_gen_missing_1058(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1058, a0, a1, a2, a3); }
static long eagl_gen_missing_1060(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1060, a0, a1, a2, a3); }
static long eagl_gen_missing_1068(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1068, a0, a1, a2, a3); }
static long eagl_gen_missing_1070(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1070, a0, a1, a2, a3); }
static long eagl_gen_missing_1078(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1078, a0, a1, a2, a3); }
static long eagl_gen_missing_1080(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1080, a0, a1, a2, a3); }
static long eagl_gen_missing_1088(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1088, a0, a1, a2, a3); }
static long eagl_gen_missing_1090(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1090, a0, a1, a2, a3); }
static long eagl_gen_missing_1098(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1098, a0, a1, a2, a3); }
static long eagl_gen_missing_10a0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x10a0, a0, a1, a2, a3); }
static long eagl_gen_missing_10a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x10a8, a0, a1, a2, a3); }
static long eagl_gen_missing_10b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x10b0, a0, a1, a2, a3); }
static long eagl_gen_missing_10b8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x10b8, a0, a1, a2, a3); }
static long eagl_gen_missing_10c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x10c0, a0, a1, a2, a3); }
static long eagl_gen_missing_10c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x10c8, a0, a1, a2, a3); }
static long eagl_gen_missing_10d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x10d0, a0, a1, a2, a3); }
static long eagl_gen_missing_10d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x10d8, a0, a1, a2, a3); }
static long eagl_gen_missing_10e0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x10e0, a0, a1, a2, a3); }
static long eagl_gen_missing_10f8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x10f8, a0, a1, a2, a3); }
static long eagl_gen_missing_1100(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1100, a0, a1, a2, a3); }
static long eagl_gen_missing_1108(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1108, a0, a1, a2, a3); }
static long eagl_gen_missing_1110(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1110, a0, a1, a2, a3); }
static long eagl_gen_missing_1118(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1118, a0, a1, a2, a3); }
static long eagl_gen_missing_1120(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1120, a0, a1, a2, a3); }
static long eagl_gen_missing_1128(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1128, a0, a1, a2, a3); }
static long eagl_gen_missing_1130(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1130, a0, a1, a2, a3); }
static long eagl_gen_missing_1138(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1138, a0, a1, a2, a3); }
static long eagl_gen_missing_1140(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1140, a0, a1, a2, a3); }
static long eagl_gen_missing_1148(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1148, a0, a1, a2, a3); }
static long eagl_gen_missing_1150(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1150, a0, a1, a2, a3); }
static long eagl_gen_missing_1158(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1158, a0, a1, a2, a3); }
static long eagl_gen_missing_1160(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1160, a0, a1, a2, a3); }
static long eagl_gen_missing_1168(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1168, a0, a1, a2, a3); }
static long eagl_gen_missing_1170(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1170, a0, a1, a2, a3); }
static long eagl_gen_missing_1178(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1178, a0, a1, a2, a3); }
static long eagl_gen_missing_1180(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1180, a0, a1, a2, a3); }
static long eagl_gen_missing_1188(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1188, a0, a1, a2, a3); }
static long eagl_gen_missing_1190(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1190, a0, a1, a2, a3); }
static long eagl_gen_missing_1198(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1198, a0, a1, a2, a3); }
static long eagl_gen_missing_11a0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x11a0, a0, a1, a2, a3); }
static long eagl_gen_missing_11a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x11a8, a0, a1, a2, a3); }
static long eagl_gen_missing_11b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x11b0, a0, a1, a2, a3); }
static long eagl_gen_missing_11b8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x11b8, a0, a1, a2, a3); }
static long eagl_gen_missing_11c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x11c0, a0, a1, a2, a3); }
static long eagl_gen_missing_11c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x11c8, a0, a1, a2, a3); }
static long eagl_gen_missing_11d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x11d0, a0, a1, a2, a3); }
static long eagl_gen_missing_11d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x11d8, a0, a1, a2, a3); }
static long eagl_gen_missing_11e0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x11e0, a0, a1, a2, a3); }
static long eagl_gen_missing_11e8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x11e8, a0, a1, a2, a3); }
static long eagl_gen_missing_11f0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x11f0, a0, a1, a2, a3); }
static long eagl_gen_missing_11f8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x11f8, a0, a1, a2, a3); }
static long eagl_gen_missing_1200(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1200, a0, a1, a2, a3); }
static long eagl_gen_missing_1208(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1208, a0, a1, a2, a3); }
static long eagl_gen_missing_1210(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1210, a0, a1, a2, a3); }
static long eagl_gen_missing_1218(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1218, a0, a1, a2, a3); }
static long eagl_gen_missing_1220(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1220, a0, a1, a2, a3); }
static long eagl_gen_missing_1228(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1228, a0, a1, a2, a3); }
static long eagl_gen_missing_1230(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1230, a0, a1, a2, a3); }
static long eagl_gen_missing_1238(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1238, a0, a1, a2, a3); }
static long eagl_gen_missing_1240(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1240, a0, a1, a2, a3); }
static long eagl_gen_missing_1248(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1248, a0, a1, a2, a3); }
static long eagl_gen_missing_1250(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1250, a0, a1, a2, a3); }
static long eagl_gen_missing_1260(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1260, a0, a1, a2, a3); }
static long eagl_gen_missing_1268(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1268, a0, a1, a2, a3); }
static long eagl_gen_missing_1270(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1270, a0, a1, a2, a3); }
static long eagl_gen_missing_1278(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1278, a0, a1, a2, a3); }
static long eagl_gen_missing_1288(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1288, a0, a1, a2, a3); }
static long eagl_gen_missing_1370(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1370, a0, a1, a2, a3); }
static long eagl_gen_missing_1378(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1378, a0, a1, a2, a3); }
static long eagl_gen_missing_1380(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1380, a0, a1, a2, a3); }
static long eagl_gen_missing_1388(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1388, a0, a1, a2, a3); }
static long eagl_gen_missing_13d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x13d0, a0, a1, a2, a3); }
static long eagl_gen_missing_1448(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1448, a0, a1, a2, a3); }
static long eagl_gen_missing_1470(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1470, a0, a1, a2, a3); }
static long eagl_gen_missing_14c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x14c0, a0, a1, a2, a3); }
static long eagl_gen_missing_14c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x14c8, a0, a1, a2, a3); }
static long eagl_gen_missing_1528(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1528, a0, a1, a2, a3); }
static long eagl_gen_missing_1538(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1538, a0, a1, a2, a3); }
static long eagl_gen_missing_1558(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1558, a0, a1, a2, a3); }
static long eagl_gen_missing_1560(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1560, a0, a1, a2, a3); }
static long eagl_gen_missing_1568(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1568, a0, a1, a2, a3); }
static long eagl_gen_missing_1570(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1570, a0, a1, a2, a3); }
static long eagl_gen_missing_1578(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1578, a0, a1, a2, a3); }
static long eagl_gen_missing_1580(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1580, a0, a1, a2, a3); }
static long eagl_gen_missing_1588(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1588, a0, a1, a2, a3); }
static long eagl_gen_missing_1598(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1598, a0, a1, a2, a3); }
static long eagl_gen_missing_15a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x15a8, a0, a1, a2, a3); }
static long eagl_gen_missing_15b8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x15b8, a0, a1, a2, a3); }
static long eagl_gen_missing_15f0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x15f0, a0, a1, a2, a3); }
static long eagl_gen_missing_15f8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x15f8, a0, a1, a2, a3); }
static long eagl_gen_missing_1600(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1600, a0, a1, a2, a3); }
static long eagl_gen_missing_1608(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1608, a0, a1, a2, a3); }
static long eagl_gen_missing_1610(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1610, a0, a1, a2, a3); }
static long eagl_gen_missing_1618(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1618, a0, a1, a2, a3); }
static long eagl_gen_missing_1620(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1620, a0, a1, a2, a3); }
static long eagl_gen_missing_1628(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1628, a0, a1, a2, a3); }
static long eagl_gen_missing_1630(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1630, a0, a1, a2, a3); }
static long eagl_gen_missing_1638(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1638, a0, a1, a2, a3); }
static long eagl_gen_missing_1640(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1640, a0, a1, a2, a3); }
static long eagl_gen_missing_1648(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1648, a0, a1, a2, a3); }
static long eagl_gen_missing_1650(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1650, a0, a1, a2, a3); }
static long eagl_gen_missing_1660(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1660, a0, a1, a2, a3); }
static long eagl_gen_missing_1668(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1668, a0, a1, a2, a3); }
static long eagl_gen_missing_1670(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1670, a0, a1, a2, a3); }
static long eagl_gen_missing_1680(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1680, a0, a1, a2, a3); }
static long eagl_gen_missing_1688(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1688, a0, a1, a2, a3); }
static long eagl_gen_missing_1690(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1690, a0, a1, a2, a3); }
static long eagl_gen_missing_16a0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x16a0, a0, a1, a2, a3); }
static long eagl_gen_missing_16a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x16a8, a0, a1, a2, a3); }
static long eagl_gen_missing_16b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x16b0, a0, a1, a2, a3); }
static long eagl_gen_missing_16c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x16c0, a0, a1, a2, a3); }
static long eagl_gen_missing_16c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x16c8, a0, a1, a2, a3); }
static long eagl_gen_missing_16d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x16d0, a0, a1, a2, a3); }
static long eagl_gen_missing_16d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x16d8, a0, a1, a2, a3); }
static long eagl_gen_missing_1740(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1740, a0, a1, a2, a3); }
static long eagl_gen_missing_1750(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1750, a0, a1, a2, a3); }
static long eagl_gen_missing_1758(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1758, a0, a1, a2, a3); }
static long eagl_gen_missing_1760(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1760, a0, a1, a2, a3); }
static long eagl_gen_missing_1768(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1768, a0, a1, a2, a3); }
static long eagl_gen_missing_17b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x17b0, a0, a1, a2, a3); }
static long eagl_gen_missing_17b8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x17b8, a0, a1, a2, a3); }
static long eagl_gen_missing_17c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x17c8, a0, a1, a2, a3); }
static long eagl_gen_missing_17e8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x17e8, a0, a1, a2, a3); }
static long eagl_gen_missing_17f0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x17f0, a0, a1, a2, a3); }
static long eagl_gen_missing_17f8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x17f8, a0, a1, a2, a3); }
static long eagl_gen_missing_1800(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1800, a0, a1, a2, a3); }
static long eagl_gen_missing_1830(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1830, a0, a1, a2, a3); }
static long eagl_gen_missing_1898(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1898, a0, a1, a2, a3); }
static long eagl_gen_missing_18a0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x18a0, a0, a1, a2, a3); }
static long eagl_gen_missing_18a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x18a8, a0, a1, a2, a3); }
static long eagl_gen_missing_18b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x18b0, a0, a1, a2, a3); }
static long eagl_gen_missing_18b8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x18b8, a0, a1, a2, a3); }
static long eagl_gen_missing_18c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x18c8, a0, a1, a2, a3); }
static long eagl_gen_missing_18d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x18d0, a0, a1, a2, a3); }
static long eagl_gen_missing_18d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x18d8, a0, a1, a2, a3); }
static long eagl_gen_missing_18f0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x18f0, a0, a1, a2, a3); }
static long eagl_gen_missing_1948(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1948, a0, a1, a2, a3); }
static long eagl_gen_missing_1950(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1950, a0, a1, a2, a3); }
static long eagl_gen_missing_1968(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1968, a0, a1, a2, a3); }
static long eagl_gen_missing_1970(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1970, a0, a1, a2, a3); }
static long eagl_gen_missing_1af8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1af8, a0, a1, a2, a3); }
static long eagl_gen_missing_1b00(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b00, a0, a1, a2, a3); }
static long eagl_gen_missing_1b08(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b08, a0, a1, a2, a3); }
static long eagl_gen_missing_1b10(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b10, a0, a1, a2, a3); }
static long eagl_gen_missing_1b18(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b18, a0, a1, a2, a3); }
static long eagl_gen_missing_1b20(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b20, a0, a1, a2, a3); }
static long eagl_gen_missing_1b28(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b28, a0, a1, a2, a3); }
static long eagl_gen_missing_1b30(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b30, a0, a1, a2, a3); }
static long eagl_gen_missing_1b38(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b38, a0, a1, a2, a3); }
static long eagl_gen_missing_1b40(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b40, a0, a1, a2, a3); }
static long eagl_gen_missing_1b48(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b48, a0, a1, a2, a3); }
static long eagl_gen_missing_1b50(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b50, a0, a1, a2, a3); }
static long eagl_gen_missing_1b80(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b80, a0, a1, a2, a3); }
static long eagl_gen_missing_1b88(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b88, a0, a1, a2, a3); }
static long eagl_gen_missing_1b90(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b90, a0, a1, a2, a3); }
static long eagl_gen_missing_1b98(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1b98, a0, a1, a2, a3); }
static long eagl_gen_missing_1ba0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1ba0, a0, a1, a2, a3); }
static long eagl_gen_missing_1ba8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1ba8, a0, a1, a2, a3); }
static long eagl_gen_missing_1bb0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1bb0, a0, a1, a2, a3); }
static long eagl_gen_missing_1bb8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1bb8, a0, a1, a2, a3); }
static long eagl_gen_missing_1bd0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1bd0, a0, a1, a2, a3); }
static long eagl_gen_missing_1bd8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1bd8, a0, a1, a2, a3); }
static long eagl_gen_missing_1be0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1be0, a0, a1, a2, a3); }
static long eagl_gen_missing_1be8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1be8, a0, a1, a2, a3); }
static long eagl_gen_missing_1bf0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1bf0, a0, a1, a2, a3); }
static long eagl_gen_missing_1bf8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1bf8, a0, a1, a2, a3); }
static long eagl_gen_missing_1c00(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c00, a0, a1, a2, a3); }
static long eagl_gen_missing_1c08(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c08, a0, a1, a2, a3); }
static long eagl_gen_missing_1c10(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c10, a0, a1, a2, a3); }
static long eagl_gen_missing_1c18(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c18, a0, a1, a2, a3); }
static long eagl_gen_missing_1c20(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c20, a0, a1, a2, a3); }
static long eagl_gen_missing_1c28(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c28, a0, a1, a2, a3); }
static long eagl_gen_missing_1c30(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c30, a0, a1, a2, a3); }
static long eagl_gen_missing_1c38(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c38, a0, a1, a2, a3); }
static long eagl_gen_missing_1c40(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c40, a0, a1, a2, a3); }
static long eagl_gen_missing_1c78(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c78, a0, a1, a2, a3); }
static long eagl_gen_missing_1c80(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c80, a0, a1, a2, a3); }
static long eagl_gen_missing_1c88(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c88, a0, a1, a2, a3); }
static long eagl_gen_missing_1c90(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c90, a0, a1, a2, a3); }
static long eagl_gen_missing_1c98(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1c98, a0, a1, a2, a3); }
static long eagl_gen_missing_1ca0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1ca0, a0, a1, a2, a3); }
static long eagl_gen_missing_1ca8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1ca8, a0, a1, a2, a3); }
static long eagl_gen_missing_1cb0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1cb0, a0, a1, a2, a3); }
static long eagl_gen_missing_1cb8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1cb8, a0, a1, a2, a3); }
static long eagl_gen_missing_1cc0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1cc0, a0, a1, a2, a3); }
static long eagl_gen_missing_1cc8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1cc8, a0, a1, a2, a3); }
static long eagl_gen_missing_1cd0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1cd0, a0, a1, a2, a3); }
static long eagl_gen_missing_1cd8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1cd8, a0, a1, a2, a3); }
static long eagl_gen_missing_1ce0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1ce0, a0, a1, a2, a3); }
static long eagl_gen_missing_1ce8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1ce8, a0, a1, a2, a3); }
static long eagl_gen_missing_1cf0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1cf0, a0, a1, a2, a3); }
static long eagl_gen_missing_1cf8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1cf8, a0, a1, a2, a3); }
static long eagl_gen_missing_1d00(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d00, a0, a1, a2, a3); }
static long eagl_gen_missing_1d08(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d08, a0, a1, a2, a3); }
static long eagl_gen_missing_1d10(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d10, a0, a1, a2, a3); }
static long eagl_gen_missing_1d18(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d18, a0, a1, a2, a3); }
static long eagl_gen_missing_1d20(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d20, a0, a1, a2, a3); }
static long eagl_gen_missing_1d28(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d28, a0, a1, a2, a3); }
static long eagl_gen_missing_1d30(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d30, a0, a1, a2, a3); }
static long eagl_gen_missing_1d38(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d38, a0, a1, a2, a3); }
static long eagl_gen_missing_1d40(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d40, a0, a1, a2, a3); }
static long eagl_gen_missing_1d48(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d48, a0, a1, a2, a3); }
static long eagl_gen_missing_1d50(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d50, a0, a1, a2, a3); }
static long eagl_gen_missing_1d58(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d58, a0, a1, a2, a3); }
static long eagl_gen_missing_1d60(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d60, a0, a1, a2, a3); }
static long eagl_gen_missing_1d68(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d68, a0, a1, a2, a3); }
static long eagl_gen_missing_1d70(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d70, a0, a1, a2, a3); }
static long eagl_gen_missing_1d78(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d78, a0, a1, a2, a3); }
static long eagl_gen_missing_1d80(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d80, a0, a1, a2, a3); }
static long eagl_gen_missing_1d88(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d88, a0, a1, a2, a3); }
static long eagl_gen_missing_1d90(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d90, a0, a1, a2, a3); }
static long eagl_gen_missing_1d98(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1d98, a0, a1, a2, a3); }
static long eagl_gen_missing_1da0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1da0, a0, a1, a2, a3); }
static long eagl_gen_missing_1da8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1da8, a0, a1, a2, a3); }
static long eagl_gen_missing_1db0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1db0, a0, a1, a2, a3); }
static long eagl_gen_missing_1db8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1db8, a0, a1, a2, a3); }
static long eagl_gen_missing_1dc0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1dc0, a0, a1, a2, a3); }
static long eagl_gen_missing_1dc8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1dc8, a0, a1, a2, a3); }
static long eagl_gen_missing_1dd0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1dd0, a0, a1, a2, a3); }
static long eagl_gen_missing_1dd8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1dd8, a0, a1, a2, a3); }
static long eagl_gen_missing_1de0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1de0, a0, a1, a2, a3); }
static long eagl_gen_missing_1de8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1de8, a0, a1, a2, a3); }
static long eagl_gen_missing_1df0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1df0, a0, a1, a2, a3); }
static long eagl_gen_missing_1df8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1df8, a0, a1, a2, a3); }
static long eagl_gen_missing_1e00(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1e00, a0, a1, a2, a3); }
static long eagl_gen_missing_1e08(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1e08, a0, a1, a2, a3); }
static long eagl_gen_missing_1e10(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1e10, a0, a1, a2, a3); }
static long eagl_gen_missing_1e18(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1e18, a0, a1, a2, a3); }
static long eagl_gen_missing_1e20(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1e20, a0, a1, a2, a3); }
static long eagl_gen_missing_1e28(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1e28, a0, a1, a2, a3); }
static long eagl_gen_missing_1e30(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1e30, a0, a1, a2, a3); }
static long eagl_gen_missing_1e38(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1e38, a0, a1, a2, a3); }
static long eagl_gen_missing_1e40(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x1e40, a0, a1, a2, a3); }
static long eagl_gen_missing_2038(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2038, a0, a1, a2, a3); }
static long eagl_gen_missing_2050(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2050, a0, a1, a2, a3); }
static long eagl_gen_missing_2058(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2058, a0, a1, a2, a3); }
static long eagl_gen_missing_2060(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2060, a0, a1, a2, a3); }
static long eagl_gen_missing_2068(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2068, a0, a1, a2, a3); }
static long eagl_gen_missing_2070(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2070, a0, a1, a2, a3); }
static long eagl_gen_missing_2078(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2078, a0, a1, a2, a3); }
static long eagl_gen_missing_2080(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2080, a0, a1, a2, a3); }
static long eagl_gen_missing_2088(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2088, a0, a1, a2, a3); }
static long eagl_gen_missing_2090(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2090, a0, a1, a2, a3); }
static long eagl_gen_missing_2098(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2098, a0, a1, a2, a3); }
static long eagl_gen_missing_20a0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x20a0, a0, a1, a2, a3); }
static long eagl_gen_missing_20a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x20a8, a0, a1, a2, a3); }
static long eagl_gen_missing_20b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x20b0, a0, a1, a2, a3); }
static long eagl_gen_missing_20b8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x20b8, a0, a1, a2, a3); }
static long eagl_gen_missing_20c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x20c0, a0, a1, a2, a3); }
static long eagl_gen_missing_20c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x20c8, a0, a1, a2, a3); }
static long eagl_gen_missing_20d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x20d0, a0, a1, a2, a3); }
static long eagl_gen_missing_20d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x20d8, a0, a1, a2, a3); }
static long eagl_gen_missing_20e0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x20e0, a0, a1, a2, a3); }
static long eagl_gen_missing_20e8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x20e8, a0, a1, a2, a3); }
static long eagl_gen_missing_20f0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x20f0, a0, a1, a2, a3); }
static long eagl_gen_missing_20f8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x20f8, a0, a1, a2, a3); }
static long eagl_gen_missing_2100(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2100, a0, a1, a2, a3); }
static long eagl_gen_missing_2108(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2108, a0, a1, a2, a3); }
static long eagl_gen_missing_2110(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2110, a0, a1, a2, a3); }
static long eagl_gen_missing_2118(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2118, a0, a1, a2, a3); }
static long eagl_gen_missing_2120(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2120, a0, a1, a2, a3); }
static long eagl_gen_missing_2128(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2128, a0, a1, a2, a3); }
static long eagl_gen_missing_2130(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2130, a0, a1, a2, a3); }
static long eagl_gen_missing_2138(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2138, a0, a1, a2, a3); }
static long eagl_gen_missing_2140(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2140, a0, a1, a2, a3); }
static long eagl_gen_missing_2148(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2148, a0, a1, a2, a3); }
static long eagl_gen_missing_2150(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2150, a0, a1, a2, a3); }
static long eagl_gen_missing_2158(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2158, a0, a1, a2, a3); }
static long eagl_gen_missing_2160(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2160, a0, a1, a2, a3); }
static long eagl_gen_missing_2168(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2168, a0, a1, a2, a3); }
static long eagl_gen_missing_2170(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2170, a0, a1, a2, a3); }
static long eagl_gen_missing_2178(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2178, a0, a1, a2, a3); }
static long eagl_gen_missing_2180(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2180, a0, a1, a2, a3); }
static long eagl_gen_missing_2188(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2188, a0, a1, a2, a3); }
static long eagl_gen_missing_2190(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2190, a0, a1, a2, a3); }
static long eagl_gen_missing_2198(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x2198, a0, a1, a2, a3); }
static long eagl_gen_missing_21a0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x21a0, a0, a1, a2, a3); }
static long eagl_gen_missing_21a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x21a8, a0, a1, a2, a3); }
static long eagl_gen_missing_21b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x21b0, a0, a1, a2, a3); }
static long eagl_gen_missing_21b8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x21b8, a0, a1, a2, a3); }
static long eagl_gen_missing_21c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x21c0, a0, a1, a2, a3); }
static long eagl_gen_missing_21c8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x21c8, a0, a1, a2, a3); }
static long eagl_gen_missing_21d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x21d0, a0, a1, a2, a3); }
static long eagl_gen_missing_21d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x21d8, a0, a1, a2, a3); }
static long eagl_gen_missing_21e0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x21e0, a0, a1, a2, a3); }
static long eagl_gen_missing_21e8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x21e8, a0, a1, a2, a3); }
static long eagl_gen_missing_21f0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x21f0, a0, a1, a2, a3); }
static long eagl_gen_missing_21f8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(0x21f8, a0, a1, a2, a3); }

#define EAGL_TABLE_SIZE 0x2200

static const char *
eagl_slot_name(unsigned offset)
{
	switch (offset) {
	case 0x10: return "glAlphaFunc";
	case 0x30: return "glBindTexture";
	case 0x40: return "glBlendFunc";
	case 0x58: return "glClear";
	case 0x68: return "glClearColor";
	case 0x80: return "glClearStencil";
	case 0x130: return "glColor4f";
	case 0x160: return "glColor4ub";
	case 0x190: return "glColorMask";
	case 0x1a0: return "glColorPointer";
	case 0x1b8: return "glCopyTexImage2D";
	case 0x1c8: return "glCopyTexSubImage2D";
	case 0x1d0: return "glCullFace";
	case 0x1e0: return "glDeleteTextures";
	case 0x1e8: return "glDepthFunc";
	case 0x1f0: return "glDepthMask";
	case 0x200: return "glDisable";
	case 0x208: return "glDisableClientState";
	case 0x210: return "glDrawArrays";
	case 0x220: return "glDrawElements";
	case 0x248: return "glEnable";
	case 0x250: return "glEnableClientState";
	case 0x2d0: return "glFinish";
	case 0x2d8: return "glFlush";
	case 0x2e0: return "glFogf";
	case 0x2e8: return "glFogfv";
	case 0x300: return "glFrontFace";
	case 0x318: return "glGenTextures";
	case 0x320: return "glGetBooleanv";
	case 0x338: return "glGetError";
	case 0x340: return "glGetFloatv";
	case 0x348: return "glGetIntegerv";
	case 0x350: return "glGetLightfv";
	case 0x378: return "glGetMaterialfv";
	case 0x3a0: return "glGetPointerv";
	case 0x3b0: return "glGetString";
	case 0x3b8: return "glGetTexEnvfv";
	case 0x3c0: return "glGetTexEnviv";
	case 0x3e0: return "glGetTexImage";
	case 0x3e8: return "glGetTexLevelParameterfv";
	case 0x3f0: return "glGetTexLevelParameteriv";
	case 0x3f8: return "glGetTexParameterfv";
	case 0x400: return "glGetTexParameteriv";
	case 0x408: return "glHint";
	case 0x480: return "glIsEnabled";
	case 0x490: return "glIsTexture";
	case 0x498: return "glLightModelf";
	case 0x4a0: return "glLightModelfv";
	case 0x4b8: return "glLightf";
	case 0x4c0: return "glLightfv";
	case 0x4e0: return "glLineWidth";
	case 0x4f0: return "glLoadIdentity";
	case 0x500: return "glLoadMatrixf";
	case 0x510: return "glLogicOp";
	case 0x558: return "glMaterialf";
	case 0x560: return "glMaterialfv";
	case 0x578: return "glMatrixMode";
	case 0x588: return "glMultMatrixf";
	case 0x5b8: return "glNormal3f";
	case 0x5e8: return "glNormalPointer";
	case 0x620: return "glPixelStorei";
	case 0x640: return "glPointSize";
	case 0x650: return "glPolygonOffset";
	case 0x670: return "glPopMatrix";
	case 0x698: return "glPushMatrix";
	case 0x768: return "glReadBuffer";
	case 0x770: return "glReadPixels";
	case 0x7c8: return "glRotatef";
	case 0x7d8: return "glScalef";
	case 0x7e0: return "glScissor";
	case 0x7f0: return "glShadeModel";
	case 0x7f8: return "glStencilFunc";
	case 0x800: return "glStencilMask";
	case 0x808: return "glStencilOp";
	case 0x910: return "glTexCoordPointer";
	case 0x918: return "glTexEnvf";
	case 0x920: return "glTexEnvfv";
	case 0x928: return "glTexEnvi";
	case 0x930: return "glTexEnviv";
	case 0x970: return "glTexImage2D";
	case 0x978: return "glTexParameterf";
	case 0x980: return "glTexParameterfv";
	case 0x988: return "glTexParameteri";
	case 0x990: return "glTexParameteriv";
	case 0x9a0: return "glTexSubImage2D";
	case 0x9b0: return "glTranslatef";
	case 0xa78: return "glVertexPointer";
	case 0xa80: return "glViewport";
	case 0xa88: return "glBlendFuncSeparate/glBlendFuncSeparateOES";
	case 0xa90: return "glBlendColor";
	case 0xa98: return "glBlendEquation/glBlendEquationOES";
	case 0xab0: return "glClientActiveTexture";
	case 0xab8: return "glActiveTexture";
	case 0xb90: return "glMultiTexCoord4f";
	case 0xbe0: return "glCompressedTexImage3D";
	case 0xbe8: return "glCompressedTexImage2D";
	case 0xbf8: return "glCompressedTexSubImage3D";
	case 0xc00: return "glCompressedTexSubImage2D";
	case 0xcb0: return "glDrawRangeElements";
	case 0xdb8: return "glTexImage3D";
	case 0xdc0: return "glTexSubImage3D";
	case 0xdc8: return "glCopyTexSubImage3D";
	case 0xdd0: return "glGetUniformIndices";
	case 0xdd8: return "glGetActiveUniformsiv";
	case 0xde8: return "glGetUniformBlockIndex";
	case 0xdf0: return "glGetActiveUniformBlockiv";
	case 0xdf8: return "glGetActiveUniformBlockName";
	case 0xe00: return "glUniformBlockBinding";
	case 0xe58: return "glBlendEquationSeparate/glBlendEquationSeparateOES";
	case 0xe60: return "glSampleCoverage";
	case 0xe80: return "glGenFencesAPPLE";
	case 0xe88: return "glDeleteFencesAPPLE";
	case 0xe90: return "glSetFenceAPPLE";
	case 0xe98: return "glIsFenceAPPLE";
	case 0xea0: return "glTestFenceAPPLE";
	case 0xea8: return "glFinishFenceAPPLE";
	case 0xeb0: return "glTestObjectAPPLE";
	case 0xeb8: return "glFinishObjectAPPLE";
	case 0xee8: return "glVertexAttrib1f";
	case 0xf00: return "glVertexAttrib2f";
	case 0xf18: return "glVertexAttrib3f";
	case 0xf30: return "glVertexAttrib4f";
	case 0xf50: return "glVertexAttrib1fv";
	case 0xf68: return "glVertexAttrib2fv";
	case 0xf80: return "glVertexAttrib3fv";
	case 0xfc0: return "glVertexAttrib4fv";
	case 0x1000: return "glVertexAttribPointer";
	case 0x1008: return "glEnableVertexAttribArray";
	case 0x1010: return "glDisableVertexAttribArray";
	case 0x1020: return "glGetVertexAttribfv";
	case 0x1028: return "glGetVertexAttribiv";
	case 0x1030: return "glGetVertexAttribPointerv";
	case 0x10e8: return "glPointParameterf";
	case 0x10f0: return "glPointParameterfv";
	case 0x1258: return "glStencilOpSeparate";
	case 0x1280: return "glDeleteProgram/glDeleteShader";
	case 0x1290: return "glDetachShader";
	case 0x1298: return "glCreateShader";
	case 0x12a0: return "glShaderSource";
	case 0x12a8: return "glCompileShader";
	case 0x12b0: return "glCreateProgram";
	case 0x12b8: return "glAttachShader";
	case 0x12c0: return "glLinkProgram";
	case 0x12c8: return "glUseProgram";
	case 0x12d0: return "glValidateProgram";
	case 0x12d8: return "glUniform1f";
	case 0x12e0: return "glUniform2f";
	case 0x12e8: return "glUniform3f";
	case 0x12f0: return "glUniform4f";
	case 0x12f8: return "glUniform1i";
	case 0x1300: return "glUniform2i";
	case 0x1308: return "glUniform3i";
	case 0x1310: return "glUniform4i";
	case 0x1318: return "glUniform1fv";
	case 0x1320: return "glUniform2fv";
	case 0x1328: return "glUniform3fv";
	case 0x1330: return "glUniform4fv";
	case 0x1338: return "glUniform1iv";
	case 0x1340: return "glUniform2iv";
	case 0x1348: return "glUniform3iv";
	case 0x1350: return "glUniform4iv";
	case 0x1358: return "glUniformMatrix2fv";
	case 0x1360: return "glUniformMatrix3fv";
	case 0x1368: return "glUniformMatrix4fv";
	case 0x1390: return "glGetUniformLocation";
	case 0x1398: return "glGetActiveUniform";
	case 0x13a0: return "glGetUniformfv";
	case 0x13a8: return "glGetUniformiv";
	case 0x13b0: return "glGetShaderSource";
	case 0x13b8: return "glBindAttribLocation";
	case 0x13c0: return "glGetActiveAttrib";
	case 0x13c8: return "glGetAttribLocation";
	case 0x13d8: return "glGenQueries/glGenQueriesEXT";
	case 0x13e0: return "glDeleteQueries/glDeleteQueriesEXT";
	case 0x13e8: return "glIsQuery/glIsQueryEXT";
	case 0x13f0: return "glBeginQuery/glBeginQueryEXT";
	case 0x13f8: return "glEndQuery/glEndQueryEXT";
	case 0x1400: return "glGetQueryiv/glGetQueryivEXT";
	case 0x1408: return "glGetQueryObjectivEXT";
	case 0x1410: return "glGetQueryObjectuiv/glGetQueryObjectuivEXT";
	case 0x1418: return "glBindBuffer";
	case 0x1420: return "glDeleteBuffers";
	case 0x1428: return "glGenBuffers";
	case 0x1430: return "glIsBuffer";
	case 0x1438: return "glBufferData";
	case 0x1440: return "glBufferSubData";
	case 0x1450: return "glMapBufferOES";
	case 0x1458: return "glUnmapBuffer/glUnmapBufferOES";
	case 0x1460: return "glGetBufferParameteriv";
	case 0x1468: return "glGetBufferPointerv/glGetBufferPointervOES";
	case 0x1478: return "glDrawBuffers";
	case 0x1480: return "glIsShader";
	case 0x1488: return "glIsProgram";
	case 0x1490: return "glGetShaderiv";
	case 0x1498: return "glGetProgramiv";
	case 0x14a0: return "glGetShaderInfoLog";
	case 0x14a8: return "glGetProgramInfoLog";
	case 0x14b0: return "glStencilFuncSeparate";
	case 0x14b8: return "glStencilMaskSeparate";
	case 0x14d0: return "glIsRenderbuffer/glIsRenderbufferOES";
	case 0x14d8: return "glBindRenderbuffer/glBindRenderbufferOES";
	case 0x14e0: return "glDeleteRenderbuffers/glDeleteRenderbuffersOES";
	case 0x14e8: return "glGenRenderbuffers/glGenRenderbuffersOES";
	case 0x14f0: return "glRenderbufferStorage/glRenderbufferStorageOES";
	case 0x14f8: return "glGetRenderbufferParameteriv/glGetRenderbufferParameterivOES";
	case 0x1500: return "glIsFramebuffer/glIsFramebufferOES";
	case 0x1508: return "glBindFramebuffer/glBindFramebufferOES";
	case 0x1510: return "glDeleteFramebuffers/glDeleteFramebuffersOES";
	case 0x1518: return "glGenFramebuffers/glGenFramebuffersOES";
	case 0x1520: return "glCheckFramebufferStatus/glCheckFramebufferStatusOES";
	case 0x1530: return "glFramebufferTexture2D/glFramebufferTexture2DOES";
	case 0x1540: return "glFramebufferRenderbuffer/glFramebufferRenderbufferOES";
	case 0x1548: return "glGetFramebufferAttachmentParameteriv/glGetFramebufferAttachmentParameterivOES";
	case 0x1550: return "glGenerateMipmap/glGenerateMipmapOES";
	case 0x1590: return "glProgramParameteri/glProgramParameteriEXT";
	case 0x15a0: return "glFramebufferTextureLayer";
	case 0x15b0: return "glBindBufferRange";
	case 0x15c0: return "glBindBufferBase";
	case 0x15c8: return "glBeginTransformFeedback";
	case 0x15d0: return "glEndTransformFeedback";
	case 0x15d8: return "glTransformFeedbackVaryings";
	case 0x15e0: return "glGetTransformFeedbackVarying";
	case 0x15e8: return "glGetIntegeri_v";
	case 0x1658: return "glVertexAttribI4i";
	case 0x1678: return "glVertexAttribI4ui";
	case 0x1698: return "glVertexAttribI4iv";
	case 0x16b8: return "glVertexAttribI4uiv";
	case 0x16e0: return "glVertexAttribIPointer";
	case 0x16e8: return "glGetVertexAttribIiv";
	case 0x16f0: return "glGetVertexAttribIuiv";
	case 0x16f8: return "glUniform1ui";
	case 0x1700: return "glUniform2ui";
	case 0x1708: return "glUniform3ui";
	case 0x1710: return "glUniform4ui";
	case 0x1718: return "glUniform1uiv";
	case 0x1720: return "glUniform2uiv";
	case 0x1728: return "glUniform3uiv";
	case 0x1730: return "glUniform4uiv";
	case 0x1738: return "glGetUniformuiv";
	case 0x1748: return "glGetFragDataLocation";
	case 0x1770: return "glUniformMatrix2x3fv";
	case 0x1778: return "glUniformMatrix3x2fv";
	case 0x1780: return "glUniformMatrix2x4fv";
	case 0x1788: return "glUniformMatrix4x2fv";
	case 0x1790: return "glUniformMatrix3x4fv";
	case 0x1798: return "glUniformMatrix4x3fv";
	case 0x17a0: return "glBlitFramebuffer";
	case 0x17a8: return "glRenderbufferStorageMultisample/glRenderbufferStorageMultisampleAPPLE";
	case 0x17c0: return "glGetAttachedShaders";
	case 0x17d0: return "glVertexAttribDivisor/glVertexAttribDivisorEXT";
	case 0x17d8: return "glDrawArraysInstanced/glDrawArraysInstancedEXT";
	case 0x17e0: return "glDrawElementsInstanced/glDrawElementsInstancedEXT";
	case 0x1808: return "glBindVertexArray/glBindVertexArrayOES";
	case 0x1810: return "glDeleteVertexArrays/glDeleteVertexArraysOES";
	case 0x1818: return "glGenVertexArrays/glGenVertexArraysOES";
	case 0x1820: return "glIsVertexArray/glIsVertexArrayOES";
	case 0x1828: return "glPointSizePointerOES";
	case 0x1838: return "glClearBufferiv";
	case 0x1840: return "glClearBufferuiv";
	case 0x1848: return "glClearBufferfv";
	case 0x1850: return "glClearBufferfi";
	case 0x1858: return "glGetStringi";
	case 0x1860: return "glFenceSync/glFenceSyncAPPLE";
	case 0x1868: return "glIsSync/glIsSyncAPPLE";
	case 0x1870: return "glDeleteSync/glDeleteSyncAPPLE";
	case 0x1878: return "glClientWaitSync/glClientWaitSyncAPPLE";
	case 0x1880: return "glWaitSync/glWaitSyncAPPLE";
	case 0x1888: return "glGetInteger64v/glGetInteger64vAPPLE";
	case 0x1890: return "glGetSynciv/glGetSyncivAPPLE";
	case 0x18c0: return "glCopyBufferSubData";
	case 0x18e0: return "glMapBufferRange/glMapBufferRangeEXT";
	case 0x18e8: return "glFlushMappedBufferRange/glFlushMappedBufferRangeEXT";
	case 0x18f8: return "glGetInteger64i_v";
	case 0x1900: return "glGetBufferParameteri64v";
	case 0x1908: return "glGenSamplers";
	case 0x1910: return "glDeleteSamplers";
	case 0x1918: return "glIsSampler";
	case 0x1920: return "glBindSampler";
	case 0x1928: return "glSamplerParameteri";
	case 0x1930: return "glSamplerParameteriv";
	case 0x1938: return "glSamplerParameterf";
	case 0x1940: return "glSamplerParameterfv";
	case 0x1958: return "glGetSamplerParameteriv";
	case 0x1960: return "glGetSamplerParameterfv";
	case 0x1978: return "glLabelObjectEXT";
	case 0x1980: return "glGetObjectLabelEXT";
	case 0x1988: return "glInsertEventMarkerEXT";
	case 0x1990: return "glPushGroupMarkerEXT";
	case 0x1998: return "glPopGroupMarkerEXT";
	case 0x19a0: return "glUseProgramStagesEXT";
	case 0x19a8: return "glActiveShaderProgramEXT";
	case 0x19b0: return "glCreateShaderProgramvEXT";
	case 0x19b8: return "glBindProgramPipelineEXT";
	case 0x19c0: return "glDeleteProgramPipelinesEXT";
	case 0x19c8: return "glGenProgramPipelinesEXT";
	case 0x19d0: return "glIsProgramPipelineEXT";
	case 0x19d8: return "glGetProgramPipelineivEXT";
	case 0x19e0: return "glValidateProgramPipelineEXT";
	case 0x19e8: return "glGetProgramPipelineInfoLogEXT";
	case 0x19f0: return "glProgramUniform1iEXT";
	case 0x19f8: return "glProgramUniform2iEXT";
	case 0x1a00: return "glProgramUniform3iEXT";
	case 0x1a08: return "glProgramUniform4iEXT";
	case 0x1a10: return "glProgramUniform1fEXT";
	case 0x1a18: return "glProgramUniform2fEXT";
	case 0x1a20: return "glProgramUniform3fEXT";
	case 0x1a28: return "glProgramUniform4fEXT";
	case 0x1a30: return "glProgramUniform1ivEXT";
	case 0x1a38: return "glProgramUniform2ivEXT";
	case 0x1a40: return "glProgramUniform3ivEXT";
	case 0x1a48: return "glProgramUniform4ivEXT";
	case 0x1a50: return "glProgramUniform1fvEXT";
	case 0x1a58: return "glProgramUniform2fvEXT";
	case 0x1a60: return "glProgramUniform3fvEXT";
	case 0x1a68: return "glProgramUniform4fvEXT";
	case 0x1a70: return "glProgramUniformMatrix2fvEXT";
	case 0x1a78: return "glProgramUniformMatrix3fvEXT";
	case 0x1a80: return "glProgramUniformMatrix4fvEXT";
	case 0x1a88: return "glProgramUniform1uiEXT";
	case 0x1a90: return "glProgramUniform2uiEXT";
	case 0x1a98: return "glProgramUniform3uiEXT";
	case 0x1aa0: return "glProgramUniform4uiEXT";
	case 0x1aa8: return "glProgramUniform1uivEXT";
	case 0x1ab0: return "glProgramUniform2uivEXT";
	case 0x1ab8: return "glProgramUniform3uivEXT";
	case 0x1ac0: return "glProgramUniform4uivEXT";
	case 0x1ac8: return "glProgramUniformMatrix2x3fvEXT";
	case 0x1ad0: return "glProgramUniformMatrix3x2fvEXT";
	case 0x1ad8: return "glProgramUniformMatrix2x4fvEXT";
	case 0x1ae0: return "glProgramUniformMatrix4x2fvEXT";
	case 0x1ae8: return "glProgramUniformMatrix3x4fvEXT";
	case 0x1af0: return "glProgramUniformMatrix4x3fvEXT";
	case 0x1b58: return "glReleaseShaderCompiler";
	case 0x1b60: return "glShaderBinary";
	case 0x1b68: return "glGetShaderPrecisionFormat";
	case 0x1b70: return "glDepthRangef";
	case 0x1b78: return "glClearDepthf";
	case 0x1bc0: return "glGetProgramBinary";
	case 0x1bc8: return "glProgramBinary";
	case 0x1c48: return "glBindTransformFeedback";
	case 0x1c50: return "glGenTransformFeedbacks";
	case 0x1c58: return "glDeleteTransformFeedbacks";
	case 0x1c60: return "glPauseTransformFeedback";
	case 0x1c68: return "glResumeTransformFeedback";
	case 0x1c70: return "glIsTransformFeedback";
	case 0x1e48: return "glAlphaFuncx";
	case 0x1e50: return "glClearColorx";
	case 0x1e58: return "glClearDepthx";
	case 0x1e60: return "glClipPlanef";
	case 0x1e68: return "glClipPlanex";
	case 0x1e70: return "glColor4x";
	case 0x1e78: return "glDepthRangex";
	case 0x1e80: return "glFogx";
	case 0x1e88: return "glFogxv";
	case 0x1e90: return "glFrustumf";
	case 0x1e98: return "glFrustumx";
	case 0x1ea0: return "glGetClipPlanef";
	case 0x1ea8: return "glGetClipPlanex";
	case 0x1eb0: return "glGetFixedv";
	case 0x1eb8: return "glGetLightxv";
	case 0x1ec0: return "glGetMaterialxv";
	case 0x1ec8: return "glGetTexEnvxv";
	case 0x1ed0: return "glGetTexParameterxv";
	case 0x1ed8: return "glLightModelx";
	case 0x1ee0: return "glLightModelxv";
	case 0x1ee8: return "glLightx";
	case 0x1ef0: return "glLightxv";
	case 0x1ef8: return "glLineWidthx";
	case 0x1f00: return "glLoadMatrixx";
	case 0x1f08: return "glMaterialx";
	case 0x1f10: return "glMaterialxv";
	case 0x1f18: return "glMultMatrixx";
	case 0x1f20: return "glNormal3x";
	case 0x1f28: return "glOrthof";
	case 0x1f30: return "glOrthox";
	case 0x1f38: return "glPointSizex";
	case 0x1f40: return "glPolygonOffsetx";
	case 0x1f48: return "glRotatex";
	case 0x1f50: return "glScalex";
	case 0x1f58: return "glTexEnvx";
	case 0x1f60: return "glTexEnvxv";
	case 0x1f68: return "glTexParameterx";
	case 0x1f70: return "glTexParameterxv";
	case 0x1f78: return "glTranslatex";
	case 0x1f80: return "glMultiTexCoord4x";
	case 0x1f88: return "glSampleCoveragex";
	case 0x1f90: return "glPointParameterx";
	case 0x1f98: return "glPointParameterxv";
	case 0x1fa0: return "glCurrentPaletteMatrixOES";
	case 0x1fa8: return "glLoadPaletteFromModelViewMatrixOES";
	case 0x1fb0: return "glMatrixIndexPointerOES";
	case 0x1fb8: return "glWeightPointerOES";
	case 0x1fc0: return "glDrawTexsOES";
	case 0x1fc8: return "glDrawTexiOES";
	case 0x1fd0: return "glDrawTexxOES";
	case 0x1fd8: return "glDrawTexsvOES";
	case 0x1fe0: return "glDrawTexivOES";
	case 0x1fe8: return "glDrawTexxvOES";
	case 0x1ff0: return "glDrawTexfOES";
	case 0x1ff8: return "glDrawTexfvOES";
	case 0x2000: return "glDiscardFramebufferEXT/glInvalidateFramebuffer";
	case 0x2008: return "glFramebufferParameteriAPPLE";
	case 0x2010: return "glGetFramebufferParameteriAPPLE";
	case 0x2018: return "glResolveMultisampleFramebufferAPPLE";
	case 0x2020: return "glCopyTextureLevelsAPPLE";
	case 0x2028: return "glInvalidateSubFramebuffer";
	case 0x2030: return "glGetInternalformativ";
	case 0x2040: return "glTexStorage2D/glTexStorage2DEXT";
	case 0x2048: return "glTexStorage3D";
	default: return "?";
	}
}

/* the entries, at their offsets in eagl.c's numbering: the context is table[0] */
static void
eagl_fill_table(void **table)
{
	eagl_load_functions();
	table[0x2] = (void *)eagl_gen_glAlphaFunc;
	table[0x6] = (void *)my_glBindTexture;
	table[0x8] = (void *)eagl_gen_glBlendFunc;
	table[0xb] = (void *)my_glClear;
	table[0xd] = (void *)eagl_gen_glClearColor;
	table[0x10] = (void *)eagl_gen_glClearStencil;
	table[0x26] = (void *)eagl_gen_glColor4f;
	table[0x2c] = (void *)eagl_gen_glColor4ub;
	table[0x32] = (void *)eagl_gen_glColorMask;
	table[0x34] = (void *)eagl_gen_glColorPointer;
	table[0x37] = (void *)eagl_gen_glCopyTexImage2D;
	table[0x39] = (void *)my_glCopyTexSubImage2D;
	table[0x3a] = (void *)eagl_gen_glCullFace;
	table[0x3c] = (void *)my_glDeleteTextures;
	table[0x3d] = (void *)eagl_gen_glDepthFunc;
	table[0x3e] = (void *)eagl_gen_glDepthMask;
	table[0x40] = (void *)eagl_gen_glDisable;
	table[0x41] = (void *)eagl_gen_glDisableClientState;
	table[0x42] = (void *)my_glDrawArrays;
	table[0x44] = (void *)my_glDrawElements;
	table[0x49] = (void *)eagl_gen_glEnable;
	table[0x4a] = (void *)eagl_gen_glEnableClientState;
	table[0x5a] = (void *)my_glFinish;
	table[0x5b] = (void *)my_glFlush;
	table[0x5c] = (void *)eagl_gen_glFogf;
	table[0x5d] = (void *)eagl_gen_glFogfv;
	table[0x60] = (void *)eagl_gen_glFrontFace;
	table[0x63] = (void *)eagl_gen_glGenTextures;
	table[0x64] = (void *)eagl_gen_glGetBooleanv;
	table[0x67] = (void *)eagl_gen_glGetError;
	table[0x68] = (void *)eagl_gen_glGetFloatv;
	table[0x69] = (void *)my_glGetIntegerv;
	table[0x6a] = (void *)eagl_gen_glGetLightfv;
	table[0x6f] = (void *)eagl_gen_glGetMaterialfv;
	table[0x74] = (void *)eagl_gen_glGetPointerv;
	table[0x76] = (void *)my_glGetString;
	table[0x77] = (void *)eagl_gen_glGetTexEnvfv;
	table[0x78] = (void *)eagl_gen_glGetTexEnviv;
	table[0x7c] = (void *)eagl_gen_glGetTexImage;
	table[0x7d] = (void *)eagl_gen_glGetTexLevelParameterfv;
	table[0x7e] = (void *)eagl_gen_glGetTexLevelParameteriv;
	table[0x7f] = (void *)eagl_gen_glGetTexParameterfv;
	table[0x80] = (void *)eagl_gen_glGetTexParameteriv;
	table[0x81] = (void *)eagl_gen_glHint;
	table[0x90] = (void *)eagl_gen_glIsEnabled;
	table[0x92] = (void *)eagl_gen_glIsTexture;
	table[0x93] = (void *)eagl_gen_glLightModelf;
	table[0x94] = (void *)eagl_gen_glLightModelfv;
	table[0x97] = (void *)eagl_gen_glLightf;
	table[0x98] = (void *)eagl_gen_glLightfv;
	table[0x9c] = (void *)eagl_gen_glLineWidth;
	table[0x9e] = (void *)eagl_gen_glLoadIdentity;
	table[0xa0] = (void *)eagl_gen_glLoadMatrixf;
	table[0xa2] = (void *)eagl_gen_glLogicOp;
	table[0xab] = (void *)eagl_gen_glMaterialf;
	table[0xac] = (void *)eagl_gen_glMaterialfv;
	table[0xaf] = (void *)eagl_gen_glMatrixMode;
	table[0xb1] = (void *)eagl_gen_glMultMatrixf;
	table[0xb7] = (void *)eagl_gen_glNormal3f;
	table[0xbd] = (void *)eagl_gen_glNormalPointer;
	table[0xc4] = (void *)eagl_gen_glPixelStorei;
	table[0xc8] = (void *)eagl_gen_glPointSize;
	table[0xca] = (void *)eagl_gen_glPolygonOffset;
	table[0xce] = (void *)eagl_gen_glPopMatrix;
	table[0xd3] = (void *)eagl_gen_glPushMatrix;
	table[0xed] = (void *)eagl_gen_glReadBuffer;
	table[0xee] = (void *)eagl_gen_glReadPixels;
	table[0xf9] = (void *)eagl_gen_glRotatef;
	table[0xfb] = (void *)eagl_gen_glScalef;
	table[0xfc] = (void *)eagl_gen_glScissor;
	table[0xfe] = (void *)eagl_gen_glShadeModel;
	table[0xff] = (void *)eagl_gen_glStencilFunc;
	table[0x100] = (void *)eagl_gen_glStencilMask;
	table[0x101] = (void *)eagl_gen_glStencilOp;
	table[0x122] = (void *)eagl_gen_glTexCoordPointer;
	table[0x123] = (void *)eagl_gen_glTexEnvf;
	table[0x124] = (void *)eagl_gen_glTexEnvfv;
	table[0x125] = (void *)eagl_gen_glTexEnvi;
	table[0x126] = (void *)eagl_gen_glTexEnviv;
	table[0x12e] = (void *)my_glTexImage2D;
	table[0x12f] = (void *)eagl_gen_glTexParameterf;
	table[0x130] = (void *)eagl_gen_glTexParameterfv;
	table[0x131] = (void *)eagl_gen_glTexParameteri;
	table[0x132] = (void *)eagl_gen_glTexParameteriv;
	table[0x134] = (void *)my_glTexSubImage2D;
	table[0x136] = (void *)eagl_gen_glTranslatef;
	table[0x14f] = (void *)eagl_gen_glVertexPointer;
	table[0x150] = (void *)eagl_gen_glViewport;
	table[0x151] = (void *)eagl_gen_glBlendFuncSeparate;
	table[0x152] = (void *)eagl_gen_glBlendColor;
	table[0x153] = (void *)eagl_gen_glBlendEquation;
	table[0x156] = (void *)eagl_gen_glClientActiveTexture;
	table[0x157] = (void *)my_glActiveTexture;
	table[0x172] = (void *)eagl_gen_glMultiTexCoord4f;
	table[0x17c] = (void *)eagl_gen_glCompressedTexImage3D;
	table[0x17d] = (void *)my_glCompressedTexImage2D;
	table[0x17f] = (void *)eagl_gen_glCompressedTexSubImage3D;
	table[0x180] = (void *)eagl_gen_glCompressedTexSubImage2D;
	table[0x196] = (void *)eagl_gen_glDrawRangeElements;
	table[0x1b7] = (void *)eagl_gen_glTexImage3D;
	table[0x1b8] = (void *)eagl_gen_glTexSubImage3D;
	table[0x1b9] = (void *)eagl_gen_glCopyTexSubImage3D;
	table[0x1ba] = (void *)eagl_gen_glGetUniformIndices;
	table[0x1bb] = (void *)eagl_gen_glGetActiveUniformsiv;
	table[0x1bd] = (void *)eagl_gen_glGetUniformBlockIndex;
	table[0x1be] = (void *)eagl_gen_glGetActiveUniformBlockiv;
	table[0x1bf] = (void *)eagl_gen_glGetActiveUniformBlockName;
	table[0x1c0] = (void *)eagl_gen_glUniformBlockBinding;
	table[0x1cb] = (void *)eagl_gen_glBlendEquationSeparate;
	table[0x1cc] = (void *)eagl_gen_glSampleCoverage;
	table[0x1d0] = (void *)eagl_gen_glGenFencesAPPLE;
	table[0x1d1] = (void *)eagl_gen_glDeleteFencesAPPLE;
	table[0x1d2] = (void *)eagl_gen_glSetFenceAPPLE;
	table[0x1d3] = (void *)eagl_gen_glIsFenceAPPLE;
	table[0x1d4] = (void *)eagl_gen_glTestFenceAPPLE;
	table[0x1d5] = (void *)eagl_gen_glFinishFenceAPPLE;
	table[0x1d6] = (void *)eagl_gen_glTestObjectAPPLE;
	table[0x1d7] = (void *)my_glFinishObjectAPPLE;
	table[0x1dd] = (void *)eagl_gen_glVertexAttrib1f;
	table[0x1e0] = (void *)eagl_gen_glVertexAttrib2f;
	table[0x1e3] = (void *)eagl_gen_glVertexAttrib3f;
	table[0x1e6] = (void *)eagl_gen_glVertexAttrib4f;
	table[0x1ea] = (void *)eagl_gen_glVertexAttrib1fv;
	table[0x1ed] = (void *)eagl_gen_glVertexAttrib2fv;
	table[0x1f0] = (void *)eagl_gen_glVertexAttrib3fv;
	table[0x1f8] = (void *)eagl_gen_glVertexAttrib4fv;
	table[0x200] = (void *)my_glVertexAttribPointer;
	table[0x201] = (void *)eagl_gen_glEnableVertexAttribArray;
	table[0x202] = (void *)eagl_gen_glDisableVertexAttribArray;
	table[0x204] = (void *)eagl_gen_glGetVertexAttribfv;
	table[0x205] = (void *)eagl_gen_glGetVertexAttribiv;
	table[0x206] = (void *)eagl_gen_glGetVertexAttribPointerv;
	table[0x21d] = (void *)eagl_gen_glPointParameterf;
	table[0x21e] = (void *)eagl_gen_glPointParameterfv;
	table[0x24b] = (void *)eagl_gen_glStencilOpSeparate;
	table[0x250] = (void *)my_glDeleteProgram;
	table[0x252] = (void *)eagl_gen_glDetachShader;
	table[0x253] = (void *)my_glCreateShader;
	table[0x254] = (void *)my_glShaderSource;
	table[0x255] = (void *)my_glCompileShader;
	table[0x256] = (void *)eagl_gen_glCreateProgram;
	table[0x257] = (void *)eagl_gen_glAttachShader;
	table[0x258] = (void *)my_glLinkProgram;
	table[0x259] = (void *)my_glUseProgram;
	table[0x25a] = (void *)eagl_gen_glValidateProgram;
	table[0x25b] = (void *)eagl_gen_glUniform1f;
	table[0x25c] = (void *)eagl_gen_glUniform2f;
	table[0x25d] = (void *)eagl_gen_glUniform3f;
	table[0x25e] = (void *)eagl_gen_glUniform4f;
	table[0x25f] = (void *)eagl_gen_glUniform1i;
	table[0x260] = (void *)eagl_gen_glUniform2i;
	table[0x261] = (void *)eagl_gen_glUniform3i;
	table[0x262] = (void *)eagl_gen_glUniform4i;
	table[0x263] = (void *)eagl_gen_glUniform1fv;
	table[0x264] = (void *)eagl_gen_glUniform2fv;
	table[0x265] = (void *)eagl_gen_glUniform3fv;
	table[0x266] = (void *)eagl_gen_glUniform4fv;
	table[0x267] = (void *)eagl_gen_glUniform1iv;
	table[0x268] = (void *)eagl_gen_glUniform2iv;
	table[0x269] = (void *)eagl_gen_glUniform3iv;
	table[0x26a] = (void *)eagl_gen_glUniform4iv;
	table[0x26b] = (void *)eagl_gen_glUniformMatrix2fv;
	table[0x26c] = (void *)eagl_gen_glUniformMatrix3fv;
	table[0x26d] = (void *)my_glUniformMatrix4fv;
	table[0x272] = (void *)eagl_gen_glGetUniformLocation;
	table[0x273] = (void *)eagl_gen_glGetActiveUniform;
	table[0x274] = (void *)eagl_gen_glGetUniformfv;
	table[0x275] = (void *)eagl_gen_glGetUniformiv;
	table[0x276] = (void *)eagl_gen_glGetShaderSource;
	table[0x277] = (void *)eagl_gen_glBindAttribLocation;
	table[0x278] = (void *)eagl_gen_glGetActiveAttrib;
	table[0x279] = (void *)eagl_gen_glGetAttribLocation;
	table[0x27b] = (void *)eagl_gen_glGenQueries;
	table[0x27c] = (void *)eagl_gen_glDeleteQueries;
	table[0x27d] = (void *)eagl_gen_glIsQuery;
	table[0x27e] = (void *)eagl_gen_glBeginQuery;
	table[0x27f] = (void *)eagl_gen_glEndQuery;
	table[0x280] = (void *)eagl_gen_glGetQueryiv;
	table[0x281] = (void *)eagl_gen_glGetQueryObjectivEXT;
	table[0x282] = (void *)eagl_gen_glGetQueryObjectuiv;
	table[0x283] = (void *)eagl_gen_glBindBuffer;
	table[0x284] = (void *)eagl_gen_glDeleteBuffers;
	table[0x285] = (void *)eagl_gen_glGenBuffers;
	table[0x286] = (void *)eagl_gen_glIsBuffer;
	table[0x287] = (void *)eagl_gen_glBufferData;
	table[0x288] = (void *)eagl_gen_glBufferSubData;
	table[0x28a] = (void *)eagl_gen_glMapBufferOES;
	table[0x28b] = (void *)eagl_gen_glUnmapBuffer;
	table[0x28c] = (void *)eagl_gen_glGetBufferParameteriv;
	table[0x28d] = (void *)eagl_gen_glGetBufferPointerv;
	table[0x28f] = (void *)eagl_gen_glDrawBuffers;
	table[0x290] = (void *)eagl_gen_glIsShader;
	table[0x291] = (void *)eagl_gen_glIsProgram;
	table[0x292] = (void *)eagl_gen_glGetShaderiv;
	table[0x293] = (void *)eagl_gen_glGetProgramiv;
	table[0x294] = (void *)eagl_gen_glGetShaderInfoLog;
	table[0x295] = (void *)eagl_gen_glGetProgramInfoLog;
	table[0x296] = (void *)eagl_gen_glStencilFuncSeparate;
	table[0x297] = (void *)eagl_gen_glStencilMaskSeparate;
	table[0x29a] = (void *)eagl_gen_glIsRenderbuffer;
	table[0x29b] = (void *)eagl_gen_glBindRenderbuffer;
	table[0x29c] = (void *)eagl_gen_glDeleteRenderbuffers;
	table[0x29d] = (void *)eagl_gen_glGenRenderbuffers;
	table[0x29e] = (void *)eagl_gen_glRenderbufferStorage;
	table[0x29f] = (void *)eagl_gen_glGetRenderbufferParameteriv;
	table[0x2a0] = (void *)eagl_gen_glIsFramebuffer;
	table[0x2a1] = (void *)my_glBindFramebuffer;
	table[0x2a2] = (void *)my_glDeleteFramebuffers;
	table[0x2a3] = (void *)eagl_gen_glGenFramebuffers;
	table[0x2a4] = (void *)eagl_gen_glCheckFramebufferStatus;
	table[0x2a6] = (void *)my_glFramebufferTexture2D;
	table[0x2a8] = (void *)eagl_gen_glFramebufferRenderbuffer;
	table[0x2a9] = (void *)eagl_gen_glGetFramebufferAttachmentParameteriv;
	table[0x2aa] = (void *)eagl_gen_glGenerateMipmap;
	table[0x2b2] = (void *)eagl_gen_glProgramParameteri;
	table[0x2b4] = (void *)eagl_gen_glFramebufferTextureLayer;
	table[0x2b6] = (void *)eagl_gen_glBindBufferRange;
	table[0x2b8] = (void *)eagl_gen_glBindBufferBase;
	table[0x2b9] = (void *)eagl_gen_glBeginTransformFeedback;
	table[0x2ba] = (void *)eagl_gen_glEndTransformFeedback;
	table[0x2bb] = (void *)eagl_gen_glTransformFeedbackVaryings;
	table[0x2bc] = (void *)eagl_gen_glGetTransformFeedbackVarying;
	table[0x2bd] = (void *)eagl_gen_glGetIntegeri_v;
	table[0x2cb] = (void *)eagl_gen_glVertexAttribI4i;
	table[0x2cf] = (void *)eagl_gen_glVertexAttribI4ui;
	table[0x2d3] = (void *)eagl_gen_glVertexAttribI4iv;
	table[0x2d7] = (void *)eagl_gen_glVertexAttribI4uiv;
	table[0x2dc] = (void *)eagl_gen_glVertexAttribIPointer;
	table[0x2dd] = (void *)eagl_gen_glGetVertexAttribIiv;
	table[0x2de] = (void *)eagl_gen_glGetVertexAttribIuiv;
	table[0x2df] = (void *)eagl_gen_glUniform1ui;
	table[0x2e0] = (void *)eagl_gen_glUniform2ui;
	table[0x2e1] = (void *)eagl_gen_glUniform3ui;
	table[0x2e2] = (void *)eagl_gen_glUniform4ui;
	table[0x2e3] = (void *)eagl_gen_glUniform1uiv;
	table[0x2e4] = (void *)eagl_gen_glUniform2uiv;
	table[0x2e5] = (void *)eagl_gen_glUniform3uiv;
	table[0x2e6] = (void *)eagl_gen_glUniform4uiv;
	table[0x2e7] = (void *)eagl_gen_glGetUniformuiv;
	table[0x2e9] = (void *)eagl_gen_glGetFragDataLocation;
	table[0x2ee] = (void *)eagl_gen_glUniformMatrix2x3fv;
	table[0x2ef] = (void *)eagl_gen_glUniformMatrix3x2fv;
	table[0x2f0] = (void *)eagl_gen_glUniformMatrix2x4fv;
	table[0x2f1] = (void *)eagl_gen_glUniformMatrix4x2fv;
	table[0x2f2] = (void *)eagl_gen_glUniformMatrix3x4fv;
	table[0x2f3] = (void *)eagl_gen_glUniformMatrix4x3fv;
	table[0x2f4] = (void *)eagl_gen_glBlitFramebuffer;
	table[0x2f5] = (void *)eagl_gen_glRenderbufferStorageMultisample;
	table[0x2f8] = (void *)eagl_gen_glGetAttachedShaders;
	table[0x2fa] = (void *)eagl_gen_glVertexAttribDivisor;
	table[0x2fb] = (void *)eagl_gen_glDrawArraysInstanced;
	table[0x2fc] = (void *)eagl_gen_glDrawElementsInstanced;
	table[0x301] = (void *)eagl_gen_glBindVertexArray;
	table[0x302] = (void *)eagl_gen_glDeleteVertexArrays;
	table[0x303] = (void *)eagl_gen_glGenVertexArrays;
	table[0x304] = (void *)eagl_gen_glIsVertexArray;
	table[0x305] = (void *)eagl_gen_glPointSizePointerOES;
	table[0x307] = (void *)eagl_gen_glClearBufferiv;
	table[0x308] = (void *)eagl_gen_glClearBufferuiv;
	table[0x309] = (void *)eagl_gen_glClearBufferfv;
	table[0x30a] = (void *)eagl_gen_glClearBufferfi;
	table[0x30b] = (void *)eagl_gen_glGetStringi;
	table[0x30c] = (void *)eagl_gen_glFenceSync;
	table[0x30d] = (void *)eagl_gen_glIsSync;
	table[0x30e] = (void *)eagl_gen_glDeleteSync;
	table[0x30f] = (void *)eagl_gen_glClientWaitSync;
	table[0x310] = (void *)eagl_gen_glWaitSync;
	table[0x311] = (void *)eagl_gen_glGetInteger64v;
	table[0x312] = (void *)eagl_gen_glGetSynciv;
	table[0x318] = (void *)eagl_gen_glCopyBufferSubData;
	table[0x31c] = (void *)eagl_gen_glMapBufferRange;
	table[0x31d] = (void *)eagl_gen_glFlushMappedBufferRange;
	table[0x31f] = (void *)eagl_gen_glGetInteger64i_v;
	table[0x320] = (void *)eagl_gen_glGetBufferParameteri64v;
	table[0x321] = (void *)eagl_gen_glGenSamplers;
	table[0x322] = (void *)eagl_gen_glDeleteSamplers;
	table[0x323] = (void *)eagl_gen_glIsSampler;
	table[0x324] = (void *)eagl_gen_glBindSampler;
	table[0x325] = (void *)eagl_gen_glSamplerParameteri;
	table[0x326] = (void *)eagl_gen_glSamplerParameteriv;
	table[0x327] = (void *)eagl_gen_glSamplerParameterf;
	table[0x328] = (void *)eagl_gen_glSamplerParameterfv;
	table[0x32b] = (void *)eagl_gen_glGetSamplerParameteriv;
	table[0x32c] = (void *)eagl_gen_glGetSamplerParameterfv;
	table[0x32f] = (void *)eagl_gen_glLabelObjectEXT;
	table[0x330] = (void *)eagl_gen_glGetObjectLabelEXT;
	table[0x331] = (void *)my_glInsertEventMarkerEXT;
	table[0x332] = (void *)my_glPushGroupMarkerEXT;
	table[0x333] = (void *)my_glPopGroupMarkerEXT;
	table[0x334] = (void *)eagl_gen_glUseProgramStagesEXT;
	table[0x335] = (void *)eagl_gen_glActiveShaderProgramEXT;
	table[0x336] = (void *)eagl_gen_glCreateShaderProgramvEXT;
	table[0x337] = (void *)eagl_gen_glBindProgramPipelineEXT;
	table[0x338] = (void *)eagl_gen_glDeleteProgramPipelinesEXT;
	table[0x339] = (void *)eagl_gen_glGenProgramPipelinesEXT;
	table[0x33a] = (void *)eagl_gen_glIsProgramPipelineEXT;
	table[0x33b] = (void *)eagl_gen_glGetProgramPipelineivEXT;
	table[0x33c] = (void *)eagl_gen_glValidateProgramPipelineEXT;
	table[0x33d] = (void *)eagl_gen_glGetProgramPipelineInfoLogEXT;
	table[0x33e] = (void *)eagl_gen_glProgramUniform1iEXT;
	table[0x33f] = (void *)eagl_gen_glProgramUniform2iEXT;
	table[0x340] = (void *)eagl_gen_glProgramUniform3iEXT;
	table[0x341] = (void *)eagl_gen_glProgramUniform4iEXT;
	table[0x342] = (void *)eagl_gen_glProgramUniform1fEXT;
	table[0x343] = (void *)eagl_gen_glProgramUniform2fEXT;
	table[0x344] = (void *)eagl_gen_glProgramUniform3fEXT;
	table[0x345] = (void *)eagl_gen_glProgramUniform4fEXT;
	table[0x346] = (void *)eagl_gen_glProgramUniform1ivEXT;
	table[0x347] = (void *)eagl_gen_glProgramUniform2ivEXT;
	table[0x348] = (void *)eagl_gen_glProgramUniform3ivEXT;
	table[0x349] = (void *)eagl_gen_glProgramUniform4ivEXT;
	table[0x34a] = (void *)eagl_gen_glProgramUniform1fvEXT;
	table[0x34b] = (void *)eagl_gen_glProgramUniform2fvEXT;
	table[0x34c] = (void *)eagl_gen_glProgramUniform3fvEXT;
	table[0x34d] = (void *)eagl_gen_glProgramUniform4fvEXT;
	table[0x34e] = (void *)eagl_gen_glProgramUniformMatrix2fvEXT;
	table[0x34f] = (void *)eagl_gen_glProgramUniformMatrix3fvEXT;
	table[0x350] = (void *)eagl_gen_glProgramUniformMatrix4fvEXT;
	table[0x351] = (void *)eagl_gen_glProgramUniform1uiEXT;
	table[0x352] = (void *)eagl_gen_glProgramUniform2uiEXT;
	table[0x353] = (void *)eagl_gen_glProgramUniform3uiEXT;
	table[0x354] = (void *)eagl_gen_glProgramUniform4uiEXT;
	table[0x355] = (void *)eagl_gen_glProgramUniform1uivEXT;
	table[0x356] = (void *)eagl_gen_glProgramUniform2uivEXT;
	table[0x357] = (void *)eagl_gen_glProgramUniform3uivEXT;
	table[0x358] = (void *)eagl_gen_glProgramUniform4uivEXT;
	table[0x359] = (void *)eagl_gen_glProgramUniformMatrix2x3fvEXT;
	table[0x35a] = (void *)eagl_gen_glProgramUniformMatrix3x2fvEXT;
	table[0x35b] = (void *)eagl_gen_glProgramUniformMatrix2x4fvEXT;
	table[0x35c] = (void *)eagl_gen_glProgramUniformMatrix4x2fvEXT;
	table[0x35d] = (void *)eagl_gen_glProgramUniformMatrix3x4fvEXT;
	table[0x35e] = (void *)eagl_gen_glProgramUniformMatrix4x3fvEXT;
	table[0x36b] = (void *)eagl_gen_glReleaseShaderCompiler;
	table[0x36c] = (void *)eagl_gen_glShaderBinary;
	table[0x36d] = (void *)eagl_gen_glGetShaderPrecisionFormat;
	table[0x36e] = (void *)eagl_gen_glDepthRangef;
	table[0x36f] = (void *)eagl_gen_glClearDepthf;
	table[0x378] = (void *)eagl_gen_glGetProgramBinary;
	table[0x379] = (void *)eagl_gen_glProgramBinary;
	table[0x389] = (void *)eagl_gen_glBindTransformFeedback;
	table[0x38a] = (void *)eagl_gen_glGenTransformFeedbacks;
	table[0x38b] = (void *)eagl_gen_glDeleteTransformFeedbacks;
	table[0x38c] = (void *)eagl_gen_glPauseTransformFeedback;
	table[0x38d] = (void *)eagl_gen_glResumeTransformFeedback;
	table[0x38e] = (void *)eagl_gen_glIsTransformFeedback;
	table[0x3c9] = (void *)eagl_gen_glAlphaFuncx;
	table[0x3ca] = (void *)eagl_gen_glClearColorx;
	table[0x3cb] = (void *)eagl_gen_glClearDepthx;
	table[0x3cc] = (void *)eagl_gen_glClipPlanef;
	table[0x3cd] = (void *)eagl_gen_glClipPlanex;
	table[0x3ce] = (void *)eagl_gen_glColor4x;
	table[0x3cf] = (void *)eagl_gen_glDepthRangex;
	table[0x3d0] = (void *)eagl_gen_glFogx;
	table[0x3d1] = (void *)eagl_gen_glFogxv;
	table[0x3d2] = (void *)eagl_gen_glFrustumf;
	table[0x3d3] = (void *)eagl_gen_glFrustumx;
	table[0x3d4] = (void *)eagl_gen_glGetClipPlanef;
	table[0x3d5] = (void *)eagl_gen_glGetClipPlanex;
	table[0x3d6] = (void *)eagl_gen_glGetFixedv;
	table[0x3d7] = (void *)eagl_gen_glGetLightxv;
	table[0x3d8] = (void *)eagl_gen_glGetMaterialxv;
	table[0x3d9] = (void *)eagl_gen_glGetTexEnvxv;
	table[0x3da] = (void *)eagl_gen_glGetTexParameterxv;
	table[0x3db] = (void *)eagl_gen_glLightModelx;
	table[0x3dc] = (void *)eagl_gen_glLightModelxv;
	table[0x3dd] = (void *)eagl_gen_glLightx;
	table[0x3de] = (void *)eagl_gen_glLightxv;
	table[0x3df] = (void *)eagl_gen_glLineWidthx;
	table[0x3e0] = (void *)eagl_gen_glLoadMatrixx;
	table[0x3e1] = (void *)eagl_gen_glMaterialx;
	table[0x3e2] = (void *)eagl_gen_glMaterialxv;
	table[0x3e3] = (void *)eagl_gen_glMultMatrixx;
	table[0x3e4] = (void *)eagl_gen_glNormal3x;
	table[0x3e5] = (void *)eagl_gen_glOrthof;
	table[0x3e6] = (void *)eagl_gen_glOrthox;
	table[0x3e7] = (void *)eagl_gen_glPointSizex;
	table[0x3e8] = (void *)eagl_gen_glPolygonOffsetx;
	table[0x3e9] = (void *)eagl_gen_glRotatex;
	table[0x3ea] = (void *)eagl_gen_glScalex;
	table[0x3eb] = (void *)eagl_gen_glTexEnvx;
	table[0x3ec] = (void *)eagl_gen_glTexEnvxv;
	table[0x3ed] = (void *)eagl_gen_glTexParameterx;
	table[0x3ee] = (void *)eagl_gen_glTexParameterxv;
	table[0x3ef] = (void *)eagl_gen_glTranslatex;
	table[0x3f0] = (void *)eagl_gen_glMultiTexCoord4x;
	table[0x3f1] = (void *)eagl_gen_glSampleCoveragex;
	table[0x3f2] = (void *)eagl_gen_glPointParameterx;
	table[0x3f3] = (void *)eagl_gen_glPointParameterxv;
	table[0x3f4] = (void *)eagl_gen_glCurrentPaletteMatrixOES;
	table[0x3f5] = (void *)eagl_gen_glLoadPaletteFromModelViewMatrixOES;
	table[0x3f6] = (void *)eagl_gen_glMatrixIndexPointerOES;
	table[0x3f7] = (void *)eagl_gen_glWeightPointerOES;
	table[0x3f8] = (void *)eagl_gen_glDrawTexsOES;
	table[0x3f9] = (void *)eagl_gen_glDrawTexiOES;
	table[0x3fa] = (void *)eagl_gen_glDrawTexxOES;
	table[0x3fb] = (void *)eagl_gen_glDrawTexsvOES;
	table[0x3fc] = (void *)eagl_gen_glDrawTexivOES;
	table[0x3fd] = (void *)eagl_gen_glDrawTexxvOES;
	table[0x3fe] = (void *)eagl_gen_glDrawTexfOES;
	table[0x3ff] = (void *)eagl_gen_glDrawTexfvOES;
	table[0x400] = (void *)eagl_gen_glDiscardFramebufferEXT;
	table[0x401] = (void *)my_glFramebufferParameteriAPPLE;
	table[0x402] = (void *)eagl_gen_missing_2010;
	table[0x403] = (void *)eagl_gen_glResolveMultisampleFramebufferAPPLE;
	table[0x404] = (void *)eagl_gen_glCopyTextureLevelsAPPLE;
	table[0x405] = (void *)eagl_gen_glInvalidateSubFramebuffer;
	table[0x406] = (void *)eagl_gen_glGetInternalformativ;
	table[0x408] = (void *)eagl_gen_glTexStorage2D;
	table[0x409] = (void *)eagl_gen_glTexStorage3D;
	table[0x1] = (void *)eagl_gen_missing_8;
	table[0x3] = (void *)eagl_gen_missing_18;
	table[0x4] = (void *)eagl_gen_missing_20;
	table[0x5] = (void *)eagl_gen_missing_28;
	table[0x7] = (void *)eagl_gen_missing_38;
	table[0x9] = (void *)eagl_gen_missing_48;
	table[0xa] = (void *)eagl_gen_missing_50;
	table[0xc] = (void *)eagl_gen_missing_60;
	table[0xe] = (void *)eagl_gen_missing_70;
	table[0xf] = (void *)eagl_gen_missing_78;
	table[0x11] = (void *)eagl_gen_missing_88;
	table[0x12] = (void *)eagl_gen_missing_90;
	table[0x13] = (void *)eagl_gen_missing_98;
	table[0x14] = (void *)eagl_gen_missing_a0;
	table[0x15] = (void *)eagl_gen_missing_a8;
	table[0x16] = (void *)eagl_gen_missing_b0;
	table[0x17] = (void *)eagl_gen_missing_b8;
	table[0x18] = (void *)eagl_gen_missing_c0;
	table[0x19] = (void *)eagl_gen_missing_c8;
	table[0x1a] = (void *)eagl_gen_missing_d0;
	table[0x1b] = (void *)eagl_gen_missing_d8;
	table[0x1c] = (void *)eagl_gen_missing_e0;
	table[0x1d] = (void *)eagl_gen_missing_e8;
	table[0x1e] = (void *)eagl_gen_missing_f0;
	table[0x1f] = (void *)eagl_gen_missing_f8;
	table[0x20] = (void *)eagl_gen_missing_100;
	table[0x21] = (void *)eagl_gen_missing_108;
	table[0x22] = (void *)eagl_gen_missing_110;
	table[0x23] = (void *)eagl_gen_missing_118;
	table[0x24] = (void *)eagl_gen_missing_120;
	table[0x25] = (void *)eagl_gen_missing_128;
	table[0x27] = (void *)eagl_gen_missing_138;
	table[0x28] = (void *)eagl_gen_missing_140;
	table[0x29] = (void *)eagl_gen_missing_148;
	table[0x2a] = (void *)eagl_gen_missing_150;
	table[0x2b] = (void *)eagl_gen_missing_158;
	table[0x2d] = (void *)eagl_gen_missing_168;
	table[0x2e] = (void *)eagl_gen_missing_170;
	table[0x2f] = (void *)eagl_gen_missing_178;
	table[0x30] = (void *)eagl_gen_missing_180;
	table[0x31] = (void *)eagl_gen_missing_188;
	table[0x33] = (void *)eagl_gen_missing_198;
	table[0x35] = (void *)eagl_gen_missing_1a8;
	table[0x36] = (void *)eagl_gen_missing_1b0;
	table[0x38] = (void *)eagl_gen_missing_1c0;
	table[0x3b] = (void *)eagl_gen_missing_1d8;
	table[0x3f] = (void *)eagl_gen_missing_1f8;
	table[0x43] = (void *)eagl_gen_missing_218;
	table[0x45] = (void *)eagl_gen_missing_228;
	table[0x46] = (void *)eagl_gen_missing_230;
	table[0x47] = (void *)eagl_gen_missing_238;
	table[0x48] = (void *)eagl_gen_missing_240;
	table[0x4b] = (void *)eagl_gen_missing_258;
	table[0x4c] = (void *)eagl_gen_missing_260;
	table[0x4d] = (void *)eagl_gen_missing_268;
	table[0x4e] = (void *)eagl_gen_missing_270;
	table[0x4f] = (void *)eagl_gen_missing_278;
	table[0x50] = (void *)eagl_gen_missing_280;
	table[0x51] = (void *)eagl_gen_missing_288;
	table[0x52] = (void *)eagl_gen_missing_290;
	table[0x53] = (void *)eagl_gen_missing_298;
	table[0x54] = (void *)eagl_gen_missing_2a0;
	table[0x55] = (void *)eagl_gen_missing_2a8;
	table[0x56] = (void *)eagl_gen_missing_2b0;
	table[0x57] = (void *)eagl_gen_missing_2b8;
	table[0x58] = (void *)eagl_gen_missing_2c0;
	table[0x59] = (void *)eagl_gen_missing_2c8;
	table[0x5e] = (void *)eagl_gen_missing_2f0;
	table[0x5f] = (void *)eagl_gen_missing_2f8;
	table[0x61] = (void *)eagl_gen_missing_308;
	table[0x62] = (void *)eagl_gen_missing_310;
	table[0x65] = (void *)eagl_gen_missing_328;
	table[0x66] = (void *)eagl_gen_missing_330;
	table[0x6b] = (void *)eagl_gen_missing_358;
	table[0x6c] = (void *)eagl_gen_missing_360;
	table[0x6d] = (void *)eagl_gen_missing_368;
	table[0x6e] = (void *)eagl_gen_missing_370;
	table[0x70] = (void *)eagl_gen_missing_380;
	table[0x71] = (void *)eagl_gen_missing_388;
	table[0x72] = (void *)eagl_gen_missing_390;
	table[0x73] = (void *)eagl_gen_missing_398;
	table[0x75] = (void *)eagl_gen_missing_3a8;
	table[0x79] = (void *)eagl_gen_missing_3c8;
	table[0x7a] = (void *)eagl_gen_missing_3d0;
	table[0x7b] = (void *)eagl_gen_missing_3d8;
	table[0x82] = (void *)eagl_gen_missing_410;
	table[0x83] = (void *)eagl_gen_missing_418;
	table[0x84] = (void *)eagl_gen_missing_420;
	table[0x85] = (void *)eagl_gen_missing_428;
	table[0x86] = (void *)eagl_gen_missing_430;
	table[0x87] = (void *)eagl_gen_missing_438;
	table[0x88] = (void *)eagl_gen_missing_440;
	table[0x89] = (void *)eagl_gen_missing_448;
	table[0x8a] = (void *)eagl_gen_missing_450;
	table[0x8b] = (void *)eagl_gen_missing_458;
	table[0x8c] = (void *)eagl_gen_missing_460;
	table[0x8d] = (void *)eagl_gen_missing_468;
	table[0x8e] = (void *)eagl_gen_missing_470;
	table[0x8f] = (void *)eagl_gen_missing_478;
	table[0x91] = (void *)eagl_gen_missing_488;
	table[0x95] = (void *)eagl_gen_missing_4a8;
	table[0x96] = (void *)eagl_gen_missing_4b0;
	table[0x99] = (void *)eagl_gen_missing_4c8;
	table[0x9a] = (void *)eagl_gen_missing_4d0;
	table[0x9b] = (void *)eagl_gen_missing_4d8;
	table[0x9d] = (void *)eagl_gen_missing_4e8;
	table[0x9f] = (void *)eagl_gen_missing_4f8;
	table[0xa1] = (void *)eagl_gen_missing_508;
	table[0xa3] = (void *)eagl_gen_missing_518;
	table[0xa4] = (void *)eagl_gen_missing_520;
	table[0xa5] = (void *)eagl_gen_missing_528;
	table[0xa6] = (void *)eagl_gen_missing_530;
	table[0xa7] = (void *)eagl_gen_missing_538;
	table[0xa8] = (void *)eagl_gen_missing_540;
	table[0xa9] = (void *)eagl_gen_missing_548;
	table[0xaa] = (void *)eagl_gen_missing_550;
	table[0xad] = (void *)eagl_gen_missing_568;
	table[0xae] = (void *)eagl_gen_missing_570;
	table[0xb0] = (void *)eagl_gen_missing_580;
	table[0xb2] = (void *)eagl_gen_missing_590;
	table[0xb3] = (void *)eagl_gen_missing_598;
	table[0xb4] = (void *)eagl_gen_missing_5a0;
	table[0xb5] = (void *)eagl_gen_missing_5a8;
	table[0xb6] = (void *)eagl_gen_missing_5b0;
	table[0xb8] = (void *)eagl_gen_missing_5c0;
	table[0xb9] = (void *)eagl_gen_missing_5c8;
	table[0xba] = (void *)eagl_gen_missing_5d0;
	table[0xbb] = (void *)eagl_gen_missing_5d8;
	table[0xbc] = (void *)eagl_gen_missing_5e0;
	table[0xbe] = (void *)eagl_gen_missing_5f0;
	table[0xbf] = (void *)eagl_gen_missing_5f8;
	table[0xc0] = (void *)eagl_gen_missing_600;
	table[0xc1] = (void *)eagl_gen_missing_608;
	table[0xc2] = (void *)eagl_gen_missing_610;
	table[0xc3] = (void *)eagl_gen_missing_618;
	table[0xc5] = (void *)eagl_gen_missing_628;
	table[0xc6] = (void *)eagl_gen_missing_630;
	table[0xc7] = (void *)eagl_gen_missing_638;
	table[0xc9] = (void *)eagl_gen_missing_648;
	table[0xcb] = (void *)eagl_gen_missing_658;
	table[0xcc] = (void *)eagl_gen_missing_660;
	table[0xcd] = (void *)eagl_gen_missing_668;
	table[0xcf] = (void *)eagl_gen_missing_678;
	table[0xd0] = (void *)eagl_gen_missing_680;
	table[0xd1] = (void *)eagl_gen_missing_688;
	table[0xd2] = (void *)eagl_gen_missing_690;
	table[0xd4] = (void *)eagl_gen_missing_6a0;
	table[0xd5] = (void *)eagl_gen_missing_6a8;
	table[0xd6] = (void *)eagl_gen_missing_6b0;
	table[0xd7] = (void *)eagl_gen_missing_6b8;
	table[0xd8] = (void *)eagl_gen_missing_6c0;
	table[0xd9] = (void *)eagl_gen_missing_6c8;
	table[0xda] = (void *)eagl_gen_missing_6d0;
	table[0xdb] = (void *)eagl_gen_missing_6d8;
	table[0xdc] = (void *)eagl_gen_missing_6e0;
	table[0xdd] = (void *)eagl_gen_missing_6e8;
	table[0xde] = (void *)eagl_gen_missing_6f0;
	table[0xdf] = (void *)eagl_gen_missing_6f8;
	table[0xe0] = (void *)eagl_gen_missing_700;
	table[0xe1] = (void *)eagl_gen_missing_708;
	table[0xe2] = (void *)eagl_gen_missing_710;
	table[0xe3] = (void *)eagl_gen_missing_718;
	table[0xe4] = (void *)eagl_gen_missing_720;
	table[0xe5] = (void *)eagl_gen_missing_728;
	table[0xe6] = (void *)eagl_gen_missing_730;
	table[0xe7] = (void *)eagl_gen_missing_738;
	table[0xe8] = (void *)eagl_gen_missing_740;
	table[0xe9] = (void *)eagl_gen_missing_748;
	table[0xea] = (void *)eagl_gen_missing_750;
	table[0xeb] = (void *)eagl_gen_missing_758;
	table[0xec] = (void *)eagl_gen_missing_760;
	table[0xef] = (void *)eagl_gen_missing_778;
	table[0xf0] = (void *)eagl_gen_missing_780;
	table[0xf1] = (void *)eagl_gen_missing_788;
	table[0xf2] = (void *)eagl_gen_missing_790;
	table[0xf3] = (void *)eagl_gen_missing_798;
	table[0xf4] = (void *)eagl_gen_missing_7a0;
	table[0xf5] = (void *)eagl_gen_missing_7a8;
	table[0xf6] = (void *)eagl_gen_missing_7b0;
	table[0xf7] = (void *)eagl_gen_missing_7b8;
	table[0xf8] = (void *)eagl_gen_missing_7c0;
	table[0xfa] = (void *)eagl_gen_missing_7d0;
	table[0xfd] = (void *)eagl_gen_missing_7e8;
	table[0x102] = (void *)eagl_gen_missing_810;
	table[0x103] = (void *)eagl_gen_missing_818;
	table[0x104] = (void *)eagl_gen_missing_820;
	table[0x105] = (void *)eagl_gen_missing_828;
	table[0x106] = (void *)eagl_gen_missing_830;
	table[0x107] = (void *)eagl_gen_missing_838;
	table[0x108] = (void *)eagl_gen_missing_840;
	table[0x109] = (void *)eagl_gen_missing_848;
	table[0x10a] = (void *)eagl_gen_missing_850;
	table[0x10b] = (void *)eagl_gen_missing_858;
	table[0x10c] = (void *)eagl_gen_missing_860;
	table[0x10d] = (void *)eagl_gen_missing_868;
	table[0x10e] = (void *)eagl_gen_missing_870;
	table[0x10f] = (void *)eagl_gen_missing_878;
	table[0x110] = (void *)eagl_gen_missing_880;
	table[0x111] = (void *)eagl_gen_missing_888;
	table[0x112] = (void *)eagl_gen_missing_890;
	table[0x113] = (void *)eagl_gen_missing_898;
	table[0x114] = (void *)eagl_gen_missing_8a0;
	table[0x115] = (void *)eagl_gen_missing_8a8;
	table[0x116] = (void *)eagl_gen_missing_8b0;
	table[0x117] = (void *)eagl_gen_missing_8b8;
	table[0x118] = (void *)eagl_gen_missing_8c0;
	table[0x119] = (void *)eagl_gen_missing_8c8;
	table[0x11a] = (void *)eagl_gen_missing_8d0;
	table[0x11b] = (void *)eagl_gen_missing_8d8;
	table[0x11c] = (void *)eagl_gen_missing_8e0;
	table[0x11d] = (void *)eagl_gen_missing_8e8;
	table[0x11e] = (void *)eagl_gen_missing_8f0;
	table[0x11f] = (void *)eagl_gen_missing_8f8;
	table[0x120] = (void *)eagl_gen_missing_900;
	table[0x121] = (void *)eagl_gen_missing_908;
	table[0x127] = (void *)eagl_gen_missing_938;
	table[0x128] = (void *)eagl_gen_missing_940;
	table[0x129] = (void *)eagl_gen_missing_948;
	table[0x12a] = (void *)eagl_gen_missing_950;
	table[0x12b] = (void *)eagl_gen_missing_958;
	table[0x12c] = (void *)eagl_gen_missing_960;
	table[0x12d] = (void *)eagl_gen_missing_968;
	table[0x133] = (void *)eagl_gen_missing_998;
	table[0x135] = (void *)eagl_gen_missing_9a8;
	table[0x137] = (void *)eagl_gen_missing_9b8;
	table[0x138] = (void *)eagl_gen_missing_9c0;
	table[0x139] = (void *)eagl_gen_missing_9c8;
	table[0x13a] = (void *)eagl_gen_missing_9d0;
	table[0x13b] = (void *)eagl_gen_missing_9d8;
	table[0x13c] = (void *)eagl_gen_missing_9e0;
	table[0x13d] = (void *)eagl_gen_missing_9e8;
	table[0x13e] = (void *)eagl_gen_missing_9f0;
	table[0x13f] = (void *)eagl_gen_missing_9f8;
	table[0x140] = (void *)eagl_gen_missing_a00;
	table[0x141] = (void *)eagl_gen_missing_a08;
	table[0x142] = (void *)eagl_gen_missing_a10;
	table[0x143] = (void *)eagl_gen_missing_a18;
	table[0x144] = (void *)eagl_gen_missing_a20;
	table[0x145] = (void *)eagl_gen_missing_a28;
	table[0x146] = (void *)eagl_gen_missing_a30;
	table[0x147] = (void *)eagl_gen_missing_a38;
	table[0x148] = (void *)eagl_gen_missing_a40;
	table[0x149] = (void *)eagl_gen_missing_a48;
	table[0x14a] = (void *)eagl_gen_missing_a50;
	table[0x14b] = (void *)eagl_gen_missing_a58;
	table[0x14c] = (void *)eagl_gen_missing_a60;
	table[0x14d] = (void *)eagl_gen_missing_a68;
	table[0x14e] = (void *)eagl_gen_missing_a70;
	table[0x154] = (void *)eagl_gen_missing_aa0;
	table[0x155] = (void *)eagl_gen_missing_aa8;
	table[0x158] = (void *)eagl_gen_missing_ac0;
	table[0x159] = (void *)eagl_gen_missing_ac8;
	table[0x15a] = (void *)eagl_gen_missing_ad0;
	table[0x15b] = (void *)eagl_gen_missing_ad8;
	table[0x15c] = (void *)eagl_gen_missing_ae0;
	table[0x15d] = (void *)eagl_gen_missing_ae8;
	table[0x15e] = (void *)eagl_gen_missing_af0;
	table[0x15f] = (void *)eagl_gen_missing_af8;
	table[0x160] = (void *)eagl_gen_missing_b00;
	table[0x161] = (void *)eagl_gen_missing_b08;
	table[0x162] = (void *)eagl_gen_missing_b10;
	table[0x163] = (void *)eagl_gen_missing_b18;
	table[0x164] = (void *)eagl_gen_missing_b20;
	table[0x165] = (void *)eagl_gen_missing_b28;
	table[0x166] = (void *)eagl_gen_missing_b30;
	table[0x167] = (void *)eagl_gen_missing_b38;
	table[0x168] = (void *)eagl_gen_missing_b40;
	table[0x169] = (void *)eagl_gen_missing_b48;
	table[0x16a] = (void *)eagl_gen_missing_b50;
	table[0x16b] = (void *)eagl_gen_missing_b58;
	table[0x16c] = (void *)eagl_gen_missing_b60;
	table[0x16d] = (void *)eagl_gen_missing_b68;
	table[0x16e] = (void *)eagl_gen_missing_b70;
	table[0x16f] = (void *)eagl_gen_missing_b78;
	table[0x170] = (void *)eagl_gen_missing_b80;
	table[0x171] = (void *)eagl_gen_missing_b88;
	table[0x173] = (void *)eagl_gen_missing_b98;
	table[0x174] = (void *)eagl_gen_missing_ba0;
	table[0x175] = (void *)eagl_gen_missing_ba8;
	table[0x176] = (void *)eagl_gen_missing_bb0;
	table[0x177] = (void *)eagl_gen_missing_bb8;
	table[0x178] = (void *)eagl_gen_missing_bc0;
	table[0x179] = (void *)eagl_gen_missing_bc8;
	table[0x17a] = (void *)eagl_gen_missing_bd0;
	table[0x17b] = (void *)eagl_gen_missing_bd8;
	table[0x17e] = (void *)eagl_gen_missing_bf0;
	table[0x181] = (void *)eagl_gen_missing_c08;
	table[0x182] = (void *)eagl_gen_missing_c10;
	table[0x183] = (void *)eagl_gen_missing_c18;
	table[0x184] = (void *)eagl_gen_missing_c20;
	table[0x185] = (void *)eagl_gen_missing_c28;
	table[0x186] = (void *)eagl_gen_missing_c30;
	table[0x187] = (void *)eagl_gen_missing_c38;
	table[0x188] = (void *)eagl_gen_missing_c40;
	table[0x189] = (void *)eagl_gen_missing_c48;
	table[0x18a] = (void *)eagl_gen_missing_c50;
	table[0x18b] = (void *)eagl_gen_missing_c58;
	table[0x18c] = (void *)eagl_gen_missing_c60;
	table[0x18d] = (void *)eagl_gen_missing_c68;
	table[0x18e] = (void *)eagl_gen_missing_c70;
	table[0x18f] = (void *)eagl_gen_missing_c78;
	table[0x190] = (void *)eagl_gen_missing_c80;
	table[0x191] = (void *)eagl_gen_missing_c88;
	table[0x192] = (void *)eagl_gen_missing_c90;
	table[0x193] = (void *)eagl_gen_missing_c98;
	table[0x194] = (void *)eagl_gen_missing_ca0;
	table[0x195] = (void *)eagl_gen_missing_ca8;
	table[0x197] = (void *)eagl_gen_missing_cb8;
	table[0x198] = (void *)eagl_gen_missing_cc0;
	table[0x199] = (void *)eagl_gen_missing_cc8;
	table[0x19a] = (void *)eagl_gen_missing_cd0;
	table[0x19b] = (void *)eagl_gen_missing_cd8;
	table[0x19c] = (void *)eagl_gen_missing_ce0;
	table[0x19d] = (void *)eagl_gen_missing_ce8;
	table[0x19e] = (void *)eagl_gen_missing_cf0;
	table[0x19f] = (void *)eagl_gen_missing_cf8;
	table[0x1a0] = (void *)eagl_gen_missing_d00;
	table[0x1a1] = (void *)eagl_gen_missing_d08;
	table[0x1a2] = (void *)eagl_gen_missing_d10;
	table[0x1a3] = (void *)eagl_gen_missing_d18;
	table[0x1a4] = (void *)eagl_gen_missing_d20;
	table[0x1a5] = (void *)eagl_gen_missing_d28;
	table[0x1a6] = (void *)eagl_gen_missing_d30;
	table[0x1a7] = (void *)eagl_gen_missing_d38;
	table[0x1a8] = (void *)eagl_gen_missing_d40;
	table[0x1a9] = (void *)eagl_gen_missing_d48;
	table[0x1aa] = (void *)eagl_gen_missing_d50;
	table[0x1ab] = (void *)eagl_gen_missing_d58;
	table[0x1ac] = (void *)eagl_gen_missing_d60;
	table[0x1ad] = (void *)eagl_gen_missing_d68;
	table[0x1ae] = (void *)eagl_gen_missing_d70;
	table[0x1af] = (void *)eagl_gen_missing_d78;
	table[0x1b0] = (void *)eagl_gen_missing_d80;
	table[0x1b1] = (void *)eagl_gen_missing_d88;
	table[0x1b2] = (void *)eagl_gen_missing_d90;
	table[0x1b3] = (void *)eagl_gen_missing_d98;
	table[0x1b4] = (void *)eagl_gen_missing_da0;
	table[0x1b5] = (void *)eagl_gen_missing_da8;
	table[0x1b6] = (void *)eagl_gen_missing_db0;
	table[0x1bc] = (void *)eagl_gen_missing_de0;
	table[0x1c1] = (void *)eagl_gen_missing_e08;
	table[0x1c2] = (void *)eagl_gen_missing_e10;
	table[0x1c3] = (void *)eagl_gen_missing_e18;
	table[0x1c4] = (void *)eagl_gen_missing_e20;
	table[0x1c5] = (void *)eagl_gen_missing_e28;
	table[0x1c6] = (void *)eagl_gen_missing_e30;
	table[0x1c7] = (void *)eagl_gen_missing_e38;
	table[0x1c8] = (void *)eagl_gen_missing_e40;
	table[0x1c9] = (void *)eagl_gen_missing_e48;
	table[0x1ca] = (void *)eagl_gen_missing_e50;
	table[0x1cd] = (void *)eagl_gen_missing_e68;
	table[0x1ce] = (void *)eagl_gen_missing_e70;
	table[0x1cf] = (void *)eagl_gen_missing_e78;
	table[0x1d8] = (void *)eagl_gen_missing_ec0;
	table[0x1d9] = (void *)eagl_gen_missing_ec8;
	table[0x1da] = (void *)eagl_gen_missing_ed0;
	table[0x1db] = (void *)eagl_gen_missing_ed8;
	table[0x1dc] = (void *)eagl_gen_missing_ee0;
	table[0x1de] = (void *)eagl_gen_missing_ef0;
	table[0x1df] = (void *)eagl_gen_missing_ef8;
	table[0x1e1] = (void *)eagl_gen_missing_f08;
	table[0x1e2] = (void *)eagl_gen_missing_f10;
	table[0x1e4] = (void *)eagl_gen_missing_f20;
	table[0x1e5] = (void *)eagl_gen_missing_f28;
	table[0x1e7] = (void *)eagl_gen_missing_f38;
	table[0x1e8] = (void *)eagl_gen_missing_f40;
	table[0x1e9] = (void *)eagl_gen_missing_f48;
	table[0x1eb] = (void *)eagl_gen_missing_f58;
	table[0x1ec] = (void *)eagl_gen_missing_f60;
	table[0x1ee] = (void *)eagl_gen_missing_f70;
	table[0x1ef] = (void *)eagl_gen_missing_f78;
	table[0x1f1] = (void *)eagl_gen_missing_f88;
	table[0x1f2] = (void *)eagl_gen_missing_f90;
	table[0x1f3] = (void *)eagl_gen_missing_f98;
	table[0x1f4] = (void *)eagl_gen_missing_fa0;
	table[0x1f5] = (void *)eagl_gen_missing_fa8;
	table[0x1f6] = (void *)eagl_gen_missing_fb0;
	table[0x1f7] = (void *)eagl_gen_missing_fb8;
	table[0x1f9] = (void *)eagl_gen_missing_fc8;
	table[0x1fa] = (void *)eagl_gen_missing_fd0;
	table[0x1fb] = (void *)eagl_gen_missing_fd8;
	table[0x1fc] = (void *)eagl_gen_missing_fe0;
	table[0x1fd] = (void *)eagl_gen_missing_fe8;
	table[0x1fe] = (void *)eagl_gen_missing_ff0;
	table[0x1ff] = (void *)eagl_gen_missing_ff8;
	table[0x203] = (void *)eagl_gen_missing_1018;
	table[0x207] = (void *)eagl_gen_missing_1038;
	table[0x208] = (void *)eagl_gen_missing_1040;
	table[0x209] = (void *)eagl_gen_missing_1048;
	table[0x20a] = (void *)eagl_gen_missing_1050;
	table[0x20b] = (void *)eagl_gen_missing_1058;
	table[0x20c] = (void *)eagl_gen_missing_1060;
	table[0x20d] = (void *)eagl_gen_missing_1068;
	table[0x20e] = (void *)eagl_gen_missing_1070;
	table[0x20f] = (void *)eagl_gen_missing_1078;
	table[0x210] = (void *)eagl_gen_missing_1080;
	table[0x211] = (void *)eagl_gen_missing_1088;
	table[0x212] = (void *)eagl_gen_missing_1090;
	table[0x213] = (void *)eagl_gen_missing_1098;
	table[0x214] = (void *)eagl_gen_missing_10a0;
	table[0x215] = (void *)eagl_gen_missing_10a8;
	table[0x216] = (void *)eagl_gen_missing_10b0;
	table[0x217] = (void *)eagl_gen_missing_10b8;
	table[0x218] = (void *)eagl_gen_missing_10c0;
	table[0x219] = (void *)eagl_gen_missing_10c8;
	table[0x21a] = (void *)eagl_gen_missing_10d0;
	table[0x21b] = (void *)eagl_gen_missing_10d8;
	table[0x21c] = (void *)eagl_gen_missing_10e0;
	table[0x21f] = (void *)eagl_gen_missing_10f8;
	table[0x220] = (void *)eagl_gen_missing_1100;
	table[0x221] = (void *)eagl_gen_missing_1108;
	table[0x222] = (void *)eagl_gen_missing_1110;
	table[0x223] = (void *)eagl_gen_missing_1118;
	table[0x224] = (void *)eagl_gen_missing_1120;
	table[0x225] = (void *)eagl_gen_missing_1128;
	table[0x226] = (void *)eagl_gen_missing_1130;
	table[0x227] = (void *)eagl_gen_missing_1138;
	table[0x228] = (void *)eagl_gen_missing_1140;
	table[0x229] = (void *)eagl_gen_missing_1148;
	table[0x22a] = (void *)eagl_gen_missing_1150;
	table[0x22b] = (void *)eagl_gen_missing_1158;
	table[0x22c] = (void *)eagl_gen_missing_1160;
	table[0x22d] = (void *)eagl_gen_missing_1168;
	table[0x22e] = (void *)eagl_gen_missing_1170;
	table[0x22f] = (void *)eagl_gen_missing_1178;
	table[0x230] = (void *)eagl_gen_missing_1180;
	table[0x231] = (void *)eagl_gen_missing_1188;
	table[0x232] = (void *)eagl_gen_missing_1190;
	table[0x233] = (void *)eagl_gen_missing_1198;
	table[0x234] = (void *)eagl_gen_missing_11a0;
	table[0x235] = (void *)eagl_gen_missing_11a8;
	table[0x236] = (void *)eagl_gen_missing_11b0;
	table[0x237] = (void *)eagl_gen_missing_11b8;
	table[0x238] = (void *)eagl_gen_missing_11c0;
	table[0x239] = (void *)eagl_gen_missing_11c8;
	table[0x23a] = (void *)eagl_gen_missing_11d0;
	table[0x23b] = (void *)eagl_gen_missing_11d8;
	table[0x23c] = (void *)eagl_gen_missing_11e0;
	table[0x23d] = (void *)eagl_gen_missing_11e8;
	table[0x23e] = (void *)eagl_gen_missing_11f0;
	table[0x23f] = (void *)eagl_gen_missing_11f8;
	table[0x240] = (void *)eagl_gen_missing_1200;
	table[0x241] = (void *)eagl_gen_missing_1208;
	table[0x242] = (void *)eagl_gen_missing_1210;
	table[0x243] = (void *)eagl_gen_missing_1218;
	table[0x244] = (void *)eagl_gen_missing_1220;
	table[0x245] = (void *)eagl_gen_missing_1228;
	table[0x246] = (void *)eagl_gen_missing_1230;
	table[0x247] = (void *)eagl_gen_missing_1238;
	table[0x248] = (void *)eagl_gen_missing_1240;
	table[0x249] = (void *)eagl_gen_missing_1248;
	table[0x24a] = (void *)eagl_gen_missing_1250;
	table[0x24c] = (void *)eagl_gen_missing_1260;
	table[0x24d] = (void *)eagl_gen_missing_1268;
	table[0x24e] = (void *)eagl_gen_missing_1270;
	table[0x24f] = (void *)eagl_gen_missing_1278;
	table[0x251] = (void *)eagl_gen_missing_1288;
	table[0x26e] = (void *)eagl_gen_missing_1370;
	table[0x26f] = (void *)eagl_gen_missing_1378;
	table[0x270] = (void *)eagl_gen_missing_1380;
	table[0x271] = (void *)eagl_gen_missing_1388;
	table[0x27a] = (void *)eagl_gen_missing_13d0;
	table[0x289] = (void *)eagl_gen_missing_1448;
	table[0x28e] = (void *)eagl_gen_missing_1470;
	table[0x298] = (void *)eagl_gen_missing_14c0;
	table[0x299] = (void *)eagl_gen_missing_14c8;
	table[0x2a5] = (void *)eagl_gen_missing_1528;
	table[0x2a7] = (void *)eagl_gen_missing_1538;
	table[0x2ab] = (void *)eagl_gen_missing_1558;
	table[0x2ac] = (void *)eagl_gen_missing_1560;
	table[0x2ad] = (void *)eagl_gen_missing_1568;
	table[0x2ae] = (void *)eagl_gen_missing_1570;
	table[0x2af] = (void *)eagl_gen_missing_1578;
	table[0x2b0] = (void *)eagl_gen_missing_1580;
	table[0x2b1] = (void *)eagl_gen_missing_1588;
	table[0x2b3] = (void *)eagl_gen_missing_1598;
	table[0x2b5] = (void *)eagl_gen_missing_15a8;
	table[0x2b7] = (void *)eagl_gen_missing_15b8;
	table[0x2be] = (void *)eagl_gen_missing_15f0;
	table[0x2bf] = (void *)eagl_gen_missing_15f8;
	table[0x2c0] = (void *)eagl_gen_missing_1600;
	table[0x2c1] = (void *)eagl_gen_missing_1608;
	table[0x2c2] = (void *)eagl_gen_missing_1610;
	table[0x2c3] = (void *)eagl_gen_missing_1618;
	table[0x2c4] = (void *)eagl_gen_missing_1620;
	table[0x2c5] = (void *)eagl_gen_missing_1628;
	table[0x2c6] = (void *)eagl_gen_missing_1630;
	table[0x2c7] = (void *)eagl_gen_missing_1638;
	table[0x2c8] = (void *)eagl_gen_missing_1640;
	table[0x2c9] = (void *)eagl_gen_missing_1648;
	table[0x2ca] = (void *)eagl_gen_missing_1650;
	table[0x2cc] = (void *)eagl_gen_missing_1660;
	table[0x2cd] = (void *)eagl_gen_missing_1668;
	table[0x2ce] = (void *)eagl_gen_missing_1670;
	table[0x2d0] = (void *)eagl_gen_missing_1680;
	table[0x2d1] = (void *)eagl_gen_missing_1688;
	table[0x2d2] = (void *)eagl_gen_missing_1690;
	table[0x2d4] = (void *)eagl_gen_missing_16a0;
	table[0x2d5] = (void *)eagl_gen_missing_16a8;
	table[0x2d6] = (void *)eagl_gen_missing_16b0;
	table[0x2d8] = (void *)eagl_gen_missing_16c0;
	table[0x2d9] = (void *)eagl_gen_missing_16c8;
	table[0x2da] = (void *)eagl_gen_missing_16d0;
	table[0x2db] = (void *)eagl_gen_missing_16d8;
	table[0x2e8] = (void *)eagl_gen_missing_1740;
	table[0x2ea] = (void *)eagl_gen_missing_1750;
	table[0x2eb] = (void *)eagl_gen_missing_1758;
	table[0x2ec] = (void *)eagl_gen_missing_1760;
	table[0x2ed] = (void *)eagl_gen_missing_1768;
	table[0x2f6] = (void *)eagl_gen_missing_17b0;
	table[0x2f7] = (void *)eagl_gen_missing_17b8;
	table[0x2f9] = (void *)eagl_gen_missing_17c8;
	table[0x2fd] = (void *)eagl_gen_missing_17e8;
	table[0x2fe] = (void *)eagl_gen_missing_17f0;
	table[0x2ff] = (void *)eagl_gen_missing_17f8;
	table[0x300] = (void *)eagl_gen_missing_1800;
	table[0x306] = (void *)eagl_gen_missing_1830;
	table[0x313] = (void *)eagl_gen_missing_1898;
	table[0x314] = (void *)eagl_gen_missing_18a0;
	table[0x315] = (void *)eagl_gen_missing_18a8;
	table[0x316] = (void *)eagl_gen_missing_18b0;
	table[0x317] = (void *)eagl_gen_missing_18b8;
	table[0x319] = (void *)eagl_gen_missing_18c8;
	table[0x31a] = (void *)eagl_gen_missing_18d0;
	table[0x31b] = (void *)eagl_gen_missing_18d8;
	table[0x31e] = (void *)eagl_gen_missing_18f0;
	table[0x329] = (void *)eagl_gen_missing_1948;
	table[0x32a] = (void *)eagl_gen_missing_1950;
	table[0x32d] = (void *)eagl_gen_missing_1968;
	table[0x32e] = (void *)eagl_gen_missing_1970;
	table[0x35f] = (void *)eagl_gen_missing_1af8;
	table[0x360] = (void *)eagl_gen_missing_1b00;
	table[0x361] = (void *)eagl_gen_missing_1b08;
	table[0x362] = (void *)eagl_gen_missing_1b10;
	table[0x363] = (void *)eagl_gen_missing_1b18;
	table[0x364] = (void *)eagl_gen_missing_1b20;
	table[0x365] = (void *)eagl_gen_missing_1b28;
	table[0x366] = (void *)eagl_gen_missing_1b30;
	table[0x367] = (void *)eagl_gen_missing_1b38;
	table[0x368] = (void *)eagl_gen_missing_1b40;
	table[0x369] = (void *)eagl_gen_missing_1b48;
	table[0x36a] = (void *)eagl_gen_missing_1b50;
	table[0x370] = (void *)eagl_gen_missing_1b80;
	table[0x371] = (void *)eagl_gen_missing_1b88;
	table[0x372] = (void *)eagl_gen_missing_1b90;
	table[0x373] = (void *)eagl_gen_missing_1b98;
	table[0x374] = (void *)eagl_gen_missing_1ba0;
	table[0x375] = (void *)eagl_gen_missing_1ba8;
	table[0x376] = (void *)eagl_gen_missing_1bb0;
	table[0x377] = (void *)eagl_gen_missing_1bb8;
	table[0x37a] = (void *)eagl_gen_missing_1bd0;
	table[0x37b] = (void *)eagl_gen_missing_1bd8;
	table[0x37c] = (void *)eagl_gen_missing_1be0;
	table[0x37d] = (void *)eagl_gen_missing_1be8;
	table[0x37e] = (void *)eagl_gen_missing_1bf0;
	table[0x37f] = (void *)eagl_gen_missing_1bf8;
	table[0x380] = (void *)eagl_gen_missing_1c00;
	table[0x381] = (void *)eagl_gen_missing_1c08;
	table[0x382] = (void *)eagl_gen_missing_1c10;
	table[0x383] = (void *)eagl_gen_missing_1c18;
	table[0x384] = (void *)eagl_gen_missing_1c20;
	table[0x385] = (void *)eagl_gen_missing_1c28;
	table[0x386] = (void *)eagl_gen_missing_1c30;
	table[0x387] = (void *)eagl_gen_missing_1c38;
	table[0x388] = (void *)eagl_gen_missing_1c40;
	table[0x38f] = (void *)eagl_gen_missing_1c78;
	table[0x390] = (void *)eagl_gen_missing_1c80;
	table[0x391] = (void *)eagl_gen_missing_1c88;
	table[0x392] = (void *)eagl_gen_missing_1c90;
	table[0x393] = (void *)eagl_gen_missing_1c98;
	table[0x394] = (void *)eagl_gen_missing_1ca0;
	table[0x395] = (void *)eagl_gen_missing_1ca8;
	table[0x396] = (void *)eagl_gen_missing_1cb0;
	table[0x397] = (void *)eagl_gen_missing_1cb8;
	table[0x398] = (void *)eagl_gen_missing_1cc0;
	table[0x399] = (void *)eagl_gen_missing_1cc8;
	table[0x39a] = (void *)eagl_gen_missing_1cd0;
	table[0x39b] = (void *)eagl_gen_missing_1cd8;
	table[0x39c] = (void *)eagl_gen_missing_1ce0;
	table[0x39d] = (void *)eagl_gen_missing_1ce8;
	table[0x39e] = (void *)eagl_gen_missing_1cf0;
	table[0x39f] = (void *)eagl_gen_missing_1cf8;
	table[0x3a0] = (void *)eagl_gen_missing_1d00;
	table[0x3a1] = (void *)eagl_gen_missing_1d08;
	table[0x3a2] = (void *)eagl_gen_missing_1d10;
	table[0x3a3] = (void *)eagl_gen_missing_1d18;
	table[0x3a4] = (void *)eagl_gen_missing_1d20;
	table[0x3a5] = (void *)eagl_gen_missing_1d28;
	table[0x3a6] = (void *)eagl_gen_missing_1d30;
	table[0x3a7] = (void *)eagl_gen_missing_1d38;
	table[0x3a8] = (void *)eagl_gen_missing_1d40;
	table[0x3a9] = (void *)eagl_gen_missing_1d48;
	table[0x3aa] = (void *)eagl_gen_missing_1d50;
	table[0x3ab] = (void *)eagl_gen_missing_1d58;
	table[0x3ac] = (void *)eagl_gen_missing_1d60;
	table[0x3ad] = (void *)eagl_gen_missing_1d68;
	table[0x3ae] = (void *)eagl_gen_missing_1d70;
	table[0x3af] = (void *)eagl_gen_missing_1d78;
	table[0x3b0] = (void *)eagl_gen_missing_1d80;
	table[0x3b1] = (void *)eagl_gen_missing_1d88;
	table[0x3b2] = (void *)eagl_gen_missing_1d90;
	table[0x3b3] = (void *)eagl_gen_missing_1d98;
	table[0x3b4] = (void *)eagl_gen_missing_1da0;
	table[0x3b5] = (void *)eagl_gen_missing_1da8;
	table[0x3b6] = (void *)eagl_gen_missing_1db0;
	table[0x3b7] = (void *)eagl_gen_missing_1db8;
	table[0x3b8] = (void *)eagl_gen_missing_1dc0;
	table[0x3b9] = (void *)eagl_gen_missing_1dc8;
	table[0x3ba] = (void *)eagl_gen_missing_1dd0;
	table[0x3bb] = (void *)eagl_gen_missing_1dd8;
	table[0x3bc] = (void *)eagl_gen_missing_1de0;
	table[0x3bd] = (void *)eagl_gen_missing_1de8;
	table[0x3be] = (void *)eagl_gen_missing_1df0;
	table[0x3bf] = (void *)eagl_gen_missing_1df8;
	table[0x3c0] = (void *)eagl_gen_missing_1e00;
	table[0x3c1] = (void *)eagl_gen_missing_1e08;
	table[0x3c2] = (void *)eagl_gen_missing_1e10;
	table[0x3c3] = (void *)eagl_gen_missing_1e18;
	table[0x3c4] = (void *)eagl_gen_missing_1e20;
	table[0x3c5] = (void *)eagl_gen_missing_1e28;
	table[0x3c6] = (void *)eagl_gen_missing_1e30;
	table[0x3c7] = (void *)eagl_gen_missing_1e38;
	table[0x3c8] = (void *)eagl_gen_missing_1e40;
	table[0x407] = (void *)eagl_gen_missing_2038;
	table[0x40a] = (void *)eagl_gen_missing_2050;
	table[0x40b] = (void *)eagl_gen_missing_2058;
	table[0x40c] = (void *)eagl_gen_missing_2060;
	table[0x40d] = (void *)eagl_gen_missing_2068;
	table[0x40e] = (void *)eagl_gen_missing_2070;
	table[0x40f] = (void *)eagl_gen_missing_2078;
	table[0x410] = (void *)eagl_gen_missing_2080;
	table[0x411] = (void *)eagl_gen_missing_2088;
	table[0x412] = (void *)eagl_gen_missing_2090;
	table[0x413] = (void *)eagl_gen_missing_2098;
	table[0x414] = (void *)eagl_gen_missing_20a0;
	table[0x415] = (void *)eagl_gen_missing_20a8;
	table[0x416] = (void *)eagl_gen_missing_20b0;
	table[0x417] = (void *)eagl_gen_missing_20b8;
	table[0x418] = (void *)eagl_gen_missing_20c0;
	table[0x419] = (void *)eagl_gen_missing_20c8;
	table[0x41a] = (void *)eagl_gen_missing_20d0;
	table[0x41b] = (void *)eagl_gen_missing_20d8;
	table[0x41c] = (void *)eagl_gen_missing_20e0;
	table[0x41d] = (void *)eagl_gen_missing_20e8;
	table[0x41e] = (void *)eagl_gen_missing_20f0;
	table[0x41f] = (void *)eagl_gen_missing_20f8;
	table[0x420] = (void *)eagl_gen_missing_2100;
	table[0x421] = (void *)eagl_gen_missing_2108;
	table[0x422] = (void *)eagl_gen_missing_2110;
	table[0x423] = (void *)eagl_gen_missing_2118;
	table[0x424] = (void *)eagl_gen_missing_2120;
	table[0x425] = (void *)eagl_gen_missing_2128;
	table[0x426] = (void *)eagl_gen_missing_2130;
	table[0x427] = (void *)eagl_gen_missing_2138;
	table[0x428] = (void *)eagl_gen_missing_2140;
	table[0x429] = (void *)eagl_gen_missing_2148;
	table[0x42a] = (void *)eagl_gen_missing_2150;
	table[0x42b] = (void *)eagl_gen_missing_2158;
	table[0x42c] = (void *)eagl_gen_missing_2160;
	table[0x42d] = (void *)eagl_gen_missing_2168;
	table[0x42e] = (void *)eagl_gen_missing_2170;
	table[0x42f] = (void *)eagl_gen_missing_2178;
	table[0x430] = (void *)eagl_gen_missing_2180;
	table[0x431] = (void *)eagl_gen_missing_2188;
	table[0x432] = (void *)eagl_gen_missing_2190;
	table[0x433] = (void *)eagl_gen_missing_2198;
	table[0x434] = (void *)eagl_gen_missing_21a0;
	table[0x435] = (void *)eagl_gen_missing_21a8;
	table[0x436] = (void *)eagl_gen_missing_21b0;
	table[0x437] = (void *)eagl_gen_missing_21b8;
	table[0x438] = (void *)eagl_gen_missing_21c0;
	table[0x439] = (void *)eagl_gen_missing_21c8;
	table[0x43a] = (void *)eagl_gen_missing_21d0;
	table[0x43b] = (void *)eagl_gen_missing_21d8;
	table[0x43c] = (void *)eagl_gen_missing_21e0;
	table[0x43d] = (void *)eagl_gen_missing_21e8;
	table[0x43e] = (void *)eagl_gen_missing_21f0;
	table[0x43f] = (void *)eagl_gen_missing_21f8;
}
#endif /* EAGL_GEN_TABLE */
