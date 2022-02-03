#pragma once
#include "raylib.h"

class Player
{
public:
	Player();
	~Player();

	// basic functions for player
	void draw();
	void update();

	Rectangle player_rect = { 100, 100, 50, 50 };

private:
	float gravity = 7.0f;
	float jump_height = -16.0f;

	// physics handling here
	void movement();
	void apply_gravity();
	void jump();
};
