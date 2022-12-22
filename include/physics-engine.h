#ifndef PHYSICS_ENGINE
    #define PHYSICS_ENGINE

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>

#include <iostream>

#include "../include/object.h"

class PhysicsEngine{
public:
    PhysicsEngine() : Running(true), Window(NULL){} 
    
    int OnExecute();

    bool OnInit();
    void OnEvent(SDL_Event* Event);
    void OnLoop();
    void OnRender();
    void OnCleanup();
private:
    bool Running;
    SDL_Window * Window;
    SDL_Surface * Screen;
    SDL_Renderer* Renderer;
    SDL_Surface* Surface;
    SDL_Texture* Texture;
    SDL_Rect Rect;
    Object o;
};

#endif