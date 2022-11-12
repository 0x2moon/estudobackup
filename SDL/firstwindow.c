#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_test_images.h>

//gcc main.c -o main -lSDL2

const char NAMESCREEN[] = "Snaker";
const int HEIGHT =  400, WIDTH = 400;

//snake
struct Snake{
   int x, y;
}snake[100];

struct Fruit{
   int x, y;
}fruit;

void randfruit(){
   fruit.x = rand() % WIDTH;   
   fruit.y = rand() % HEIGHT;
}

void createwindow(){
 
}

int main(int argc, char* argv[]){

    SDL_Window *window = SDL_CreateWindow(
                                 NAMESCREEN,
                                 SDL_WINDOWPOS_CENTERED,
                                 SDL_WINDOWPOS_CENTERED,
                                 WIDTH, HEIGHT,
                                 SDL_WINDOW_MAXIMIZED);

                                             //SDL_WINDOW_OPENGL // SDL_WINDOW_SHOWN);
      SDL_Surface *surface = SDL_GetWindowSurface(window);

      SDL_Rect rect = {0 /*Posição X*/, 
                        0/*Posição Y*/,
                        WIDTH /*Largura*/, 
                        HEIGHT /*Altura*/};
      
      
      SDL_FillRect(surface, &rect, SDL_MapRGB(surface->format, 240,10, 75));


   SDL_Renderer * renderer;
   renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
   SDL_Surface * image =  IMG_Load("image/gram.png");
   SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer,image);
   

   SDL_Surface *fundo, *carregaFundo;

   carregaFundo = IMG_Load("image/gram.png");
   
   fundo = SDL_DisplayFormat(carregaFundo);
   
   SDL_FillRect(surface, NULL, 0);
   
   SDL_BlitSurface(fundo, NULL, surface, NULL);




   while (!SDL_QuitRequested())
      {
         SDL_UpdateWindowSurface(window);
            // SDL_RenderCopy(renderer, texture, NULL, NULL);
            // SDL_RenderPresent(renderer);
      }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;

 }