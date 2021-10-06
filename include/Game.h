#include <SDL2/SDL.h>
#include<SDL2/SDL_test_images.h>
#include <iostream>
#include <string>

class Game
{
public:

    Game();
    ~Game();
    void run();

private:

    void proccesevents(SDL_Event e);
    void update();
    void render();
    SDL_Window *screen;
    SDL_Renderer *renderer;
    void cleanUp();

    bool m_gameIsRunning;

};