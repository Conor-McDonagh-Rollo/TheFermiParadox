#pragma once
#include "SceneManager.h"

class Game
{
private:
	SceneManager scmanager;
public:
	Game();
	void Loop();
	void Update();
};