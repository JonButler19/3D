#include "GameManager.h"

GameManager::GameManager()
{
}
GameManager::~GameManager()
{
}

GameManager& GameManager::getGameManager()
{
	static GameManager *gameManager = NULL;

	if (gameManager == NULL)
	{
		gameManager = new GameManager();

		std::cout << "GameManager created" << std::endl;
	}
	return *gameManager;
}

void GameManager::destroyGameManager()
{
	GameManager *gameManager = &getGameManager();

	if (gameManager != NULL) delete gameManager;

	std::cout << "GameManager destroyed" << std::endl;
}