#include "SceneManager.h"
#include "Scenes.h"

SCENE CurrentScene = SCENE::TITLE;

void SceneManager::ChangeScene(SCENE sceneNo)
{
	CurrentScene = sceneNo;
}

void SceneManager::Update()
{
	switch (CurrentScene)
	{
	case SCENE::TITLE:
		Scenes::Title();
		break;
	}
}
