#include "game.h"
#include <raylib.h>

void Game::start() {

    setState(STATE_MENU);

    // Initialize Window
    InitWindow(1280, 720, "Breakout");

    // Start Main Loop
    mainLoop();

    // Once everything is done, cleanup...
    cleanup();
}

void Game::mainLoop() {
    while (!WindowShouldClose()) {
        BeginDrawing();

        if (gameState == STATE_MENU) {
            ClearBackground(BLACK);
        } else if (gameState == STATE_GAME) {
            ClearBackground(RAYWHITE);
        }

        if (IsKeyPressed(KEY_SPACE)) {
            setState(STATE_GAME);
        }

        DrawFPS(10, 10);

        EndDrawing();
    }
}

void Game::cleanup() {
    CloseWindow();
}

State Game::getState() {
   return this->gameState;
}

void Game::setState(State state) {
    this->gameState = state;
}
