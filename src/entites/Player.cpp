//
// Created by Jason Evans on 22/06/2026.
//

#include "Player.h"
#include "raylib.h"

Player::Player() : position(300, 500), speed(200), width(25), height(25) {}

void Player::Draw() const {
    DrawRectangle(static_cast<int>(position.x), static_cast<int>(position.y), width, height, GREEN);
}

void Player::Update(float deltaTime) {


    if (IsKeyDown(KEY_D)) {
        position.x += speed * deltaTime;
    }
    if (IsKeyDown(KEY_A)) {
        position.x -= speed * deltaTime;
    }
    if (IsKeyDown(KEY_W)) {
        position.y -= speed * deltaTime;
    }
    if (IsKeyDown(KEY_S)) {
        position.y += speed * deltaTime;
    }

}

Player::~Player() = default;
