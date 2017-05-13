#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <iostream>
#include <GLFW/glfw3.h>


class GameManager {
private:

	GameManager();
	~GameManager();

public:

	static GameManager& getGameManager();
	static void destroyGameManager();

};

#endif // GAMEMANAGER
