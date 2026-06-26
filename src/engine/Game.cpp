//
// Created by Jason Evans on 22/06/2026.
//

#include "Game.h"

#include <iostream>
#include <ostream>

#include "../../raygui/src/raygui.h"

Game::Game() {
    state = MENU;
}

void Game::Draw() const {

    if (state == PLAYING) {
        player.Draw();
        enemy.Draw();
    }

}

void Game::Update(float deltaTime) {

    if (state == MENU) {
        if (GuiButton(Rectangle{GetScreenWidth() / 2.0f - 100, 200,120, 40}, "Start Game")) {
            state = PLAYING;
        }
    }

    if (state == PLAYING) {
        player.Update(deltaTime);
        enemy.Update(deltaTime, &player);
    }

    if (state == GAME_OVER) {
        DrawText("Game Over", 100, 100, 20, RED);
    }

    if (CheckCollisionRecs(player.collisionRec, enemy.collisionRec)) {
        state = GAME_OVER;
    }
}

Game::~Game() = default;
