//
// Created by Jason Evans on 22/06/2026.
//

#include "Player.h"
#include "raylib.h"

Player::Player() : posX(200), posY(200), speed(200), width(25), height(25) {}

void Player::Draw() const {
    DrawRectangle(static_cast<int>(posX), static_cast<int>(posY), width, height, GREEN);
}

void Player::Update(float deltaTime) {
    if (IsKeyDown(KEY_D)) {
        posX += speed * deltaTime;
    }
    if (IsKeyDown(KEY_A)) {
        posX -= speed * deltaTime;
    }
    if (IsKeyDown(KEY_W)) {
        posY -= speed * deltaTime;
    }
    if (IsKeyDown(KEY_S)) {
        posY += speed * deltaTime;
    }
}

Player::~Player() = default;
