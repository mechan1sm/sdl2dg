

#include "sdl2dg.h"

SDL_Window* SDL_CreateWindowAndInitializeDiligentEngine(
        const char *title, int x, int y, int w, int h,unsigned int flags, 
        //const SDL2DG_API api) {
        std::vector <SDL2DG_API> apis) {
    SDL_Window* SDL_window = nullptr;

    for(SDL2DG_API api : apis) {
        switch(api) {
    #if GL_SUPPORTED || GLES_SUPPORTED
        case SDL2DG_API_OPENGL:
        // opengl init
        break;
    #endif
    #if VULKAN_SUPPORTED
        case SDL2DG_API_VULKAN:
        // vulkan init
        break;
    #endif
    #if D3D12_SUPPORTED
        case SDL2DG_API_D3D12:
        // d3d12 init
        break;
    #endif
    #if D3D11_SUPPORTED
        case SDL2DG_API_D3D11:
        // d3d11 init
        break;
    #endif
    #if METAL_SUPPORTED
        case SDL2DG_API_METAL:
        // metal init
        break;
    #endif
        default:
            //return SDL_window;
            continue;
        }
    } // for
    // if code goes here
    // ERROR
    return SDL_window;
}