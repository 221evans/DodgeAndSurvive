//
// Created by Jason Evans on 22/06/2026.
//

#ifndef DODGEANDSURVIVE_PLAYER_H
#define DODGEANDSURVIVE_PLAYER_H
#include "raylib.h"


class Player {
public:
    Player();
    Vector2 position;
    float speed;
    int width;
    int height;


    void Draw() const;
    void Update(float deltaTime);

    ~Player();

};


#endif //DODGEANDSURVIVE_PLAYER_H
