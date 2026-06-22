//
// Created by Jason Evans on 22/06/2026.
//

#ifndef DODGEANDSURVIVE_GAME_H
#define DODGEANDSURVIVE_GAME_H
#include "../entites/Player.h"


class Game {
public:
    Game();
    Player player;
    void Draw() const;
    void Update(float deltaTime);
    ~Game();
};



#endif //DODGEANDSURVIVE_GAME_H
