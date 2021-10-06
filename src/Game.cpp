#include "../include/Game.h"

Game::Game() :
    m_gameIsRunning{ false }
{
    screen = SDL_CreateWindow("My application",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            640, 480,
            0);
    renderer = SDL_CreateRenderer(screen, -1, SDL_RENDERER_SOFTWARE);
}
    
Game::~Game()
{
    cleanUp();
}
    
void Game::run()
{
   

    m_gameIsRunning = true;
    SDL_Event event;
    while (m_gameIsRunning)
    {
        proccesevents(event);
        update();
        render();
    }
}

void Game::proccesevents(SDL_Event event)
{
    while (SDL_PollEvent(&event)!=0)
    {
        if(event.type==SDL_QUIT)
        {
            m_gameIsRunning = false;//CLOSES GAME LOOP :)
        }

        if(event.type==SDL_KEYDOWN)
        {
             m_gameIsRunning = false;//done
        }
    }
    
    std::cout << "THIS " << std::endl;
}

void Game::update()
{
    std::cout << "IS" << std::endl;
}

void Game::render()
{
    std::cout << "MINE" << std::endl;
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
}

void Game::cleanUp()
{
    SDL_DestroyWindow(screen);
    SDL_DestroyRenderer(renderer);
    std::cout << "Cleaning up" << std::endl;
}