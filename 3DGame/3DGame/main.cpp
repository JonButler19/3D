#include <iostream>
#include "gamemanager.h"

int main(int argc, char* argv[])
{
	GameManager *gameManager = &GameManager::getGameManager();
	GameManager::destroyGameManager();
	system("pause");
	return 0;
}