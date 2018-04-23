
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:33 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_INGR_blend_func_separate__
#define __GLUX_GL_INGR_blend_func_separate__

GLUX_NEW_PLUGIN(GL_INGR_blend_func_separate);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glBlendFuncSeparateINGR
typedef void (APIENTRYP PFNGLUXBLENDFUNCSEPARATEINGRPROC) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glBlendFuncSeparateINGR
extern PFNGLUXBLENDFUNCSEPARATEINGRPROC glBlendFuncSeparateINGR;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------