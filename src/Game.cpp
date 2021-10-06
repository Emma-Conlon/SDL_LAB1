#include "../include/Game.h"

Game::Game() :
    m_gameIsRunning{ false }
{

}
    
Game::~Game()
{
    cleanUp();
}
    
void Game::run()
{
    m_gameIsRunning = true;
    while (m_gameIsRunning)
    {
        CAN();
        update();
        render();
    }
}

void Game::CAN()
{
    std::cout << "THIS " << std::endl;
}

void Game::update()
{
    std::cout << "IS" << std::endl;
}

void Game::render()
{
    std::cout << "MINE" << std::endl;
}

void Game::cleanUp()
{
    std::cout << "Cleaning up" << std::endl;
}