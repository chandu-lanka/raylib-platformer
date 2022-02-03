#include "raylib.h"
#include "game.h"

int main() {
	int windowWidth = 1024;
	int windowHeight = 600;

	Game game(windowWidth, windowHeight, "game");

	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		game.GameLoop();
	}

	CloseWindow();

	return 0;
}