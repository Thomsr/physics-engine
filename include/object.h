#ifndef OBJECT
#define OBJECT

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>

#include <iostream>

class Object{
public:
    void Set(SDL_Renderer * &Renderer);
    void Update();
    void Render(SDL_Renderer * &Renderer);
    bool applyGravity(); 
    void Destroy();

    SDL_Texture * getTex(){ return Texture; }
    SDL_Rect getDest(){ return Rect; }
protected:
private:
    const double gravitySpeed = 9.8;
    SDL_Surface* Surface;
    SDL_Texture* Texture;
    SDL_Rect Rect;
};

#endif