#include "../include/object.h"

void Object::SetRenderer(SDL_Renderer * &Renderer){
    Surface = IMG_Load("./textures/Gui.png");
	Texture = SDL_CreateTextureFromSurface(Renderer, Surface);
	SDL_FreeSurface(Surface);
	SDL_QueryTexture(Texture, NULL, NULL, &Rect.w, &Rect.h);
}

void Object::SetPos(int x, int y){
	Rect.x = x;
	Rect.y = y;
}

void Object::Update(){
}

void Object::Render(SDL_Renderer * &Renderer){
    SDL_RenderCopy(Renderer, Texture, NULL, &Rect);
}

void Object::Destroy(){
}