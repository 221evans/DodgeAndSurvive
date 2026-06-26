#include <iostream>
#include "raylib.h"
#include "src/engine/Game.h"
#define RAYGUI_IMPLEMENTATION
#include "raygui/src/raygui.h"

int main() {
    InitWindow(800,600, "Dodge & Survive");
    SetTargetFPS(60);
    Game game;

    while (!WindowShouldClose()) {
        float deltaTime = GetFrameTime();
        BeginDrawing();
        game.Update(deltaTime);
        ClearBackground(RAYWHITE);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
