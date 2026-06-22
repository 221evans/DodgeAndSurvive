#include <iostream>
#include "raylib.h"
#include "src/engine/Game.h"

int main() {
    InitWindow(800,600, "Dodge & Survive");
    SetTargetFPS(60);
    Game game;

    while (!WindowShouldClose()) {
        float deltaTime = GetFrameTime();
        game.Update(deltaTime);
        BeginDrawing();
        ClearBackground(RAYWHITE);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
