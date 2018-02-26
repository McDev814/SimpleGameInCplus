/* 
 * File:   Arena.h
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 25, 2018, 5:58 PM
 */

#ifndef ARENA_H
#define ARENA_H

#include "Player.h"
#include "Enemy.h"
#include "Item.h"
#include <vector>

class Arena {
public:
    Arena(Player pt, float diff);
    void play();
protected:
private:
    float difficulty;
    Player player;
    std::vector<Enemy*> enemies;
    std::vector<Item*> items;
    Enemy* getEnemy();
    Item* getItem();
    int comeAcross();
    
};

#endif /* ARENA_H */

