#ifndef OBJECT
#define OBJECT

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>

#include <iostream>

class Object{
public:
    Object(SDL_Window * Window);
    void Update();
    bool applyGravity(); 
    void Destroy();

    SDL_Renderer * getRend(){ return rend; }
    SDL_Texture * getTex(){ return tex; }
    SDL_Rect getDest(){ return dest; }
protected:
private:
    const double gravitySpeed = 9.8;
    SDL_Renderer* rend;
    SDL_Texture* tex;
    SDL_Rect dest;
};

#endif