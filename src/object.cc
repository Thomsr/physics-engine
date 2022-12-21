#include "../include/object.h"

// Object::Object(SDL_Window * &Window){
//     Uint32 render_flags = SDL_RENDERER_ACCELERATED;
//     // creates a renderer to render our images
// 	rend = SDL_CreateRenderer(Window, -1, render_flags);

// 	// creates a surface to load an image into the main memory
// 	SDL_Surface* surface;

// 	// please provide a path for your image
// 	surface = IMG_Load("./textures/Gui.png");

// 	// loads image to our graphics hardware memory.
// 	tex = SDL_CreateTextureFromSurface(rend, surface);

// 	// clears main-memory
// 	SDL_FreeSurface(surface);

// 	// let us control our image position
// 	// so that we can move it with our keyboard.
// 	SDL_Rect dest;
//     while(true){
//         // connects our texture with dest to control position
//         SDL_RenderClear(rend);
//         SDL_QueryTexture(tex, NULL, NULL, &dest.w, &dest.h);

//         SDL_RenderCopy(rend, tex, NULL, &dest);
    
//         // triggers the double buffers
//         // for multiple rendering
//         SDL_RenderPresent(rend);s
    
//         // calculates to 60 fps
//         SDL_Delay(1000 / 60);
//     }
// }

// bool Object::applyGravity(){
//     return true;
// }

Object::Object(SDL_Window *Window){
    // triggers the program that controls
    // your graphics hardware and sets flags
    Uint32 render_flags = SDL_RENDERER_ACCELERATED;
 
    // creates a renderer to render our images
    SDL_Renderer* rend = SDL_CreateRenderer(Window, -1, render_flags);
 
    // creates a surface to load an image into the main memory
    SDL_Surface* surface;
 
    // please provide a path for your image
    surface = IMG_Load("./textures/Gui.png");
 
    // loads image to our graphics hardware memory.
    SDL_Texture* tex = SDL_CreateTextureFromSurface(rend, surface);
 
    // clears main-memory
    SDL_FreeSurface(surface);
 
    // connects our texture with dest to control position
    SDL_QueryTexture(tex, NULL, NULL, &dest.w, &dest.h);
 
    // sets initial x-position of object
    dest.x = (1000 - dest.w) / 2;
 
    // sets initial y-position of object
    dest.y = (1000 - dest.h) / 2;
}

void Object::Update(){
        std::cout << "Hier" << std::endl;
        SDL_RenderClear(rend);
        SDL_RenderCopy(rend, tex, NULL, &dest);
        std::cout << "Hier" << std::endl;
 
        // triggers the double buffers
        // for multiple rendering
        SDL_RenderPresent(rend);
 
        // calculates to 60 fps
        SDL_Delay(1000 / 60);
}

void Object::Destroy(){
    // destroy texture
	SDL_DestroyTexture(tex);

	// destroy renderer
	SDL_DestroyRenderer(rend);
}