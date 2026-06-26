//
// Created by Jason Evans on 22/06/2026.
//

#ifndef DODGEANDSURVIVE_GAME_H
#define DODGEANDSURVIVE_GAME_H
#include "../entites/Player.h"
#include "../entites/Enemy.h"
#include "GameState.h"

class Game {
public:
    Game();
    Player player;
    Enemy enemy;
    GameState state;
    void Draw() const;
    void Update(float deltaTime);
    ~Game();
};



#endif //DODGEANDSURVIVE_GAME_H
