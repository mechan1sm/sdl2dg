

// SDL2 incldes
#include "SDL2/SDL.h"


// Diligent Graphics includes
#if D3D11_SUPPORTED
#    include "EngineFactoryD3D11.h"
#endif

#if D3D12_SUPPORTED
#    include "EngineFactoryD3D12.h"
#endif

#if GL_SUPPORTED || GLES_SUPPORTED
#    include "EngineFactoryOpenGL.h"
#endif

#if VULKAN_SUPPORTED
#    include "EngineFactoryVk.h"
#endif

#if METAL_SUPPORTED
#    include "EngineFactoryMtl.h"
#endif

/*#include "imgui.h"
#include "ImGuiImplDiligent.hpp"
#include "ImGuiUtils.hpp"*/

//sdl2dg includes
#include <vector>

enum SDL2DG_API
{
#if VULKAN_SUPPORTED // Vulkan
    SDL2DG_API_VULKAN = 1 << 0,
#endif
#if GL_SUPPORTED || GLES_SUPPORTED  // OpenGL or OpenGLES
    SDL2DG_API_OPENGL = 1 << 1,
#endif
#if D3D11_SUPPORTED // DirectX 11
    SDL2DG_API_D3D11  = 1 << 2,
#endif
#if D3D12_SUPPORTED // DirectX 12
    SDL2DG_API_D3D12  = 1 << 3,
#endif
#if METAL_SUPPORTED // Apple Metal - "only for commercial" with Diligent Engine F
    SDL2DG_API_METAL  = 1 << 4
#endif
};

SDL_Window* SDL_CreateWindowAndInitializeDiligentEngine(
    const char *title, int x, int y, int w, int h, unsigned int flags, 
    //const SDL2DG_API api);
    std::vector<SDL2DG_API> apis);