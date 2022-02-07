#include <iostream>
#include <GL/glew.h>
#include <GL/glu.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>

int main(int, char**) {
    std::cout << "Hello, world!\n";
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow( "window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_OPENGL );
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION,4);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION,6);
    SDL_GLContext context = SDL_GL_CreateContext(window);
    bool quit = false;
    SDL_Event event;
    while(!quit){
        while(SDL_PollEvent( &event ) != 0){
            if(event.type == SDL_QUIT){
                quit = true;
            }
        }
    }
    SDL_DestroyWindow( window );
    SDL_Quit();
    return 0;
}
