#include "player.h";

Player::Player() {}
Player::~Player() {}

void Player::draw() {
	DrawRectangle(player_rect.x, player_rect.y, player_rect.width, player_rect.height, BLACK);
}

void Player::update() {
	movement();
	apply_gravity();
}

void Player::movement() {
	if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D)) {
		player_rect.x += 5.0f;
	}
	if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A)) {
		player_rect.x -= 5.0f;
	}
	if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) {
		player_rect.y += jump_height;
	}
}

void Player::apply_gravity() {
	player_rect.y += gravity;
}

void Player::jump() {
	player_rect.y -= jump_height;
}