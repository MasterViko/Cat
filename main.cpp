#include "./src/include/SDL2/SDL.h"
#include <iostream>

const int WIDTH = 800, HEIGHT = 600;

void drawBigPixel(SDL_Renderer *renderer, int x, int y, int size) {
  for (int i = x; i < x + size; i++) {
    for (int j = y; j < y + size; j++) {
      SDL_RenderDrawPoint(renderer, i, j);
    }
  }
}

void fillBackground(SDL_Renderer *renderer, int r, int g, int b, int a) {
  SDL_SetRenderDrawColor(renderer, 0, g, b, a);
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      drawBigPixel(renderer, i * 10, j * 10, 10);
    }
  }
}

void drawPusheen(SDL_Renderer *renderer) {
  fillBackground(renderer, 0, 0, 255, 255);
  SDL_SetRenderDrawColor(renderer, 160, 160, 160, 255); // Grey color
  for (int i = 0; i <= 22; i++) {
    for (int j = 0; j <= 21; j++) {
      if (i == 0 && (j >= 12 && j <= 18)) {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        drawBigPixel(renderer, i * 10, j * 10, 10);
      }
      switch (i) {
      case 1: {
        if ((j >= 8 && j <= 11) || j == 19) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 12 || j == 13 || j == 15 || j == 16 || j == 18) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 14 || j == 17) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 2: {
        if ((j >= 5 && j <= 7) || j == 20) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 8 || j == 9 || j == 12 || j == 15 || j == 19) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 10|| j == 11 || j == 13 || j == 14 || (j >= 16 && j <= 18)) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
       case 3: {
        if (j ==3 || j == 4 || j == 20) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 5) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j >= 6 && j <= 19) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
       case 4: {
        if (j == 2|| j == 1 || (j >= 17 && j <= 21)) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 3) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j >= 4 && j <= 16) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 5: {
        if (j == 0 || j == 6 || j == 21) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 6: {
        if (j == 1 || (j >= 17 && j <= 21)) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 2) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j >= 3 && j <= 16) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }   
        break;
      }
      case 7: {
        if (j == 2 || j == 20) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 3) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j >= 4 && j <= 19) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 8: {
        if (j == 2 || j == 8 || j == 20) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 3) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if(j >= 4 && j <= 19) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 9: {
        if (j == 2 || j == 7 || j == 8 || j == 20) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 3) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j >= 4 && j <= 19) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 10: {
        if (j == 2 || j == 8 || j == 20) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 3) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j >= 4 && j <= 19) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 11: {
        if (j == 1 || (j >= 17 && j <= 21)) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 2) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j >= 3 && j <= 16) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
     case 12: {
        if (j == 0 || j == 6 || j == 21) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 13: {
        if (j == 1 || j == 2 || (j >= 17 && j <= 21)) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 3) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j >= 4 && j <= 16) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 14: {
        if (j == 3 || j == 4 || j == 20) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 5) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j >= 6 && j <= 19) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 15: {
        if (j == 5 || j == 6 || j == 7 || j == 20) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 8 || j == 9 || j == 12 || j == 15 || j == 19) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if ( j == 10 || j == 11 || j == 13 || j == 14 || j == 16 || j == 17 || j == 18) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 16: {
        if ((j >= 8 && j <= 11) || j == 19 || j == 20) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 12 || j == 13 || j == 15 || j == 16 || j == 18) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if ( j == 14 || j == 17) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 17: {
        if ((j >= 12 && j <= 18) || j == 20) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if ( j == 19) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 18: {
        if (j == 18 || j == 20) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if ( j == 19) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 19: {
        if (j == 18 || j == 20 || j == 15) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if ( j == 19) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 20: {
        if (j == 14 || j == 16 || j == 17 || j == 20) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if ( j == 15 || j == 18 || j == 19) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 21: {
        if (j == 14 || j == 19) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if (j == 16) {
          SDL_SetRenderDrawColor(renderer, 108, 161, 151, 255); //gray
          drawBigPixel(renderer, i * 10, j * 10, 10);
        } else if ( j == 15 || j == 17 || j == 18) {
          SDL_SetRenderDrawColor(renderer, 81, 224, 198, 255); //blue
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      case 22: {
        if (j >= 15 && j <= 18) {
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); //black
          drawBigPixel(renderer, i * 10, j * 10, 10);
        }
        break;
      }
      }
    }
  }
}

int main(int argc, char *argv[]) {
  if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
    std::cout << "Could not initialize SDL: " << SDL_GetError() << std::endl;
    return 1;
  }

  SDL_Window *window = SDL_CreateWindow("Pusheen Cat", SDL_WINDOWPOS_UNDEFINED,
                                        SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT,
                                        SDL_WINDOW_ALLOW_HIGHDPI);
  if (NULL == window) {
    std::cout << "Could not create window: " << SDL_GetError() << std::endl;
    SDL_Quit();
    return 1;
  }

  SDL_Renderer *renderer =
      SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
  if (renderer == NULL) {
    std::cout << "Could not create renderer: " << SDL_GetError() << std::endl;
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 1;
  }

  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); 
  SDL_RenderClear(renderer);

  drawPusheen(renderer);

  SDL_RenderPresent(renderer);

  SDL_Event windowEvent;
  while (true) {
    if (SDL_PollEvent(&windowEvent)) {
      if (SDL_QUIT == windowEvent.type)
        break;
    }
  }

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return EXIT_SUCCESS;
}
