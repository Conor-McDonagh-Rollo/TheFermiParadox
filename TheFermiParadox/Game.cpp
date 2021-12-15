#include "Game.h"
#include <iostream>
#include "Utilities.hpp"

Game::Game()
{
	Loop();
}

void Game::Loop()
{
	while (true)
	{
		Update();
	}
}

void Game::Update()
{
	scmanager.Update();
	CU::CLS();
}
