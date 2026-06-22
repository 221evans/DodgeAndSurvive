//
// Created by Jason Evans on 22/06/2026.
//

#include "Enemy.h"

#include <iostream>


#include "raylib.h"
#include "raymath.h"

Enemy::Enemy() : position(200,200), speed(10), width(25), height(25) {}

void Enemy::Draw() const {
    DrawRectangle(static_cast<int>(position.x), static_cast<int>(position.y), 25, 25, RED);
}

void Enemy::Update(float deltaTime, Player* player) {
    Vector2 direction = Vector2Subtract(player->position, position);
    Vector2 normalised = Vector2Normalize(direction);

    position += normalised * speed * deltaTime;

    if (speed <= 150.0f) {
        speed += 2.0f * deltaTime;
    }


    std::cout << "Speed: " << speed << std::endl;

}

Enemy::~Enemy() = default;
