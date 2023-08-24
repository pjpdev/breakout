#pragma once

#include <raylib.h>

enum State {
    STATE_MENU,
    STATE_GAME,
    STATE_HIGHSCORE
};

class Game {
    private:
        State gameState;
    public:
        void start();
        void init();
        void mainLoop();
        void cleanup();
        State getState();
        void setState(State state);
};
