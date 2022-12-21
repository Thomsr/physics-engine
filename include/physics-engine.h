#ifndef PHYSICS_ENGINE
    #define PHYSICS_ENGINE

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>

#include <iostream>

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
};

#endif