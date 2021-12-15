#pragma once
enum class SCENE
{
	TITLE, GAME_MENU
};

class SceneManager
{
public:
	void ChangeScene(SCENE sceneNo);
	void Update();
};

