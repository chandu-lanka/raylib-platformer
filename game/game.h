#pragma once
#include "raylib.h";
#include <string>
#include <assert.h>
#include "player.h"

class Game
{
public:
	Game(int width, int height, std::string title);
	~Game() noexcept;

	bool GameShouldClose() const;
	void GameLoop();

	Player player;

private:
	void Update();
	void Draw();
};
