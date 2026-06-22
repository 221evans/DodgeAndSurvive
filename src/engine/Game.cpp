//
// Created by Jason Evans on 22/06/2026.
//

#include "Game.h"

Game::Game() = default;

void Game::Draw() const {
    player.Draw();
}

void Game::Update(float deltaTime) {
    player.Update(deltaTime);
}

Game::~Game() = default;
