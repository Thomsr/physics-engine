#include "../include/physics-engine.h"

int PhysicsEngine::OnExecute(){
	if(!OnInit()) return -1;

	SDL_Event Event;

	while(Running){
		while(SDL_PollEvent(&Event)) OnEvent(&Event);
		OnLoop();
		OnRender();
	}
	OnCleanup();
	return 0;
}

bool PhysicsEngine::OnInit(){
	if(SDL_Init(SDL_INIT_EVERYTHING) < 0) return false;
	Window = SDL_CreateWindow("Physics Engine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);
	if(Window == NULL) return false;
	Uint32 render_flags = SDL_RENDERER_ACCELERATED;
	Renderer = SDL_CreateRenderer(Window, -1, render_flags);
	o.Set(Renderer);
	return true;
}

void PhysicsEngine::OnEvent(SDL_Event * Event){
	// Screen = SDL_GetWindowSurface(Window);
	if(Event->type == SDL_QUIT) Running = false;
	if(Event->type == SDL_MOUSEBUTTONDOWN && Event->button.button == SDL_BUTTON_RIGHT){
		// SDL_LockSurface(Screen);
		// SDL_memset(Screen->pixels, 255, Screen->h * Screen->pitch);
		// SDL_UnlockSurface(Screen);
		int x, y;
		SDL_GetMouseState(&x, &y);
		std::cout << "Mouse at: " << x << " " << y << std::endl;
	}
}

void PhysicsEngine::OnLoop(){

}

void PhysicsEngine::OnRender(){
	// SDL_UpdateWindowSurface(Window);
	SDL_RenderClear(Renderer);
	o.Render(Renderer);
    // triggers the double buffers
    // for multiple rendering
    SDL_RenderPresent(Renderer);
	SDL_Delay(1000 / 60);
}

void PhysicsEngine::OnCleanup(){
	SDL_Quit();
}

int main(int argc, char *argv[]){
	PhysicsEngine p;
	return p.OnExecute();
}
