#include "game.h";

Game::Game(int width, int height, std::string title) {
	assert(!GetWindowHandle());
	InitWindow(width, height, title.c_str());
}

Game::~Game() noexcept {
	assert(GetWindowHandle());
	CloseWindow();
}

bool Game::GameShouldClose() const {
	return WindowShouldClose();
}

void Game::GameLoop() {
	BeginDrawing();
	Update();
	Draw();
	EndDrawing();
}

void Game::Update() {
	player.update();
}

void Game::Draw() {
	ClearBackground(RAYWHITE);
	player.draw();
	DrawFPS(10, 10);
};