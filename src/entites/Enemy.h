//
// Created by Jason Evans on 22/06/2026.
//

#ifndef DODGEANDSURVIVE_ENEMY_H
#define DODGEANDSURVIVE_ENEMY_H
#include "raylib.h"
#include "Player.h"

class Enemy {
public:
    Enemy();
    Vector2 position;
    float speed;
    float width;
    float height;


    void Draw() const;
    void Update(float deltaTime, Player* player);

    ~Enemy();

};


#endif //DODGEANDSURVIVE_ENEMY_H
