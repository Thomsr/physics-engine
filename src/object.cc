#include "../include/object.h"

void Object::Set(SDL_Renderer * &Renderer){
    Surface = IMG_Load("./textures/Gui.png");
	Texture = SDL_CreateTextureFromSurface(Renderer, Surface);
	SDL_FreeSurface(Surface);
	SDL_QueryTexture(Texture, NULL, NULL, &Rect.w, &Rect.h);
	Rect.x = 100;
	Rect.y = 100;
}

void Object::Update(){
}

void Object::Render(SDL_Renderer * &Renderer){
    SDL_RenderCopy(Renderer, Texture, NULL, &Rect);
}

void Object::Destroy(){
}