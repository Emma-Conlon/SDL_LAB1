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

    void CAN();
    void update();
    void render();

    void cleanUp();

    bool m_gameIsRunning;

};