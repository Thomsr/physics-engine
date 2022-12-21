#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>

#include <iostream>

#include "../include/object.h"

int main(int argc, char *argv[])
{
	/*
	// returns zero on success else non-zero
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		printf("error initializing SDL: %s\n", SDL_GetError());
	}
	SDL_Window* win = SDL_CreateWindow("Physics Engine", // creates a window
									SDL_WINDOWPOS_CENTERED,
									SDL_WINDOWPOS_CENTERED,
									1000, 1000, 0);
	Object o(&win);
	SDL_Rect newRect;
	Uint32 render_flags = SDL_RENDERER_ACCELERATED;
	SDL_Renderer* rend = SDL_CreateRenderer(win, -1, render_flags);
	SDL_Surface* surface = IMG_Load("./textures/Gui.png");
	SDL_Texture* tex = SDL_CreateTextureFromSurface(rend, surface);
	SDL_FreeSurface(surface);
	SDL_QueryTexture(tex, NULL, NULL, &newRect.w, &newRect.h);
	
	bool Close = false;
	while(!Close){
		SDL_Event event;
		while(SDL_PollEvent(&event)){
            switch(event.type){
				case SDL_QUIT:{
					Close = true;
					break;
				}
				case SDL_KEYDOWN:
                	switch(event.key.keysym.scancode){
						case SDL_SCANCODE_X:{
						 	std::cout << "X" << std::endl;
							break;
						}
						default: break;
					}
			}
		}
		// newRect = o.getDest();
		// SDL_RenderClear(o.getRend());
        // SDL_RenderCopy(o.getRend(), o.getTex(), NULL, &newRect);
		o.Update();
		// SDL_RenderClear(rend);
        // SDL_RenderCopy(rend, tex, NULL, &newRect);
        // SDL_RenderPresent(rend);
        // SDL_Delay(1000 / 60);
	}
	o.Destroy();
	SDL_DestroyWindow(win);
	SDL_Quit();
	*/

	

	return 0;
}
