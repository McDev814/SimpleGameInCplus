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
    Arena(Player p, float diff);
    void play();
protected:
private:
    float difficulty;
    Player p;
    std::vector<Enemy*> enemies;
    void generateEnemy();
    std::vector<Item*> items;
    void generateItems();
    Enemy* getEnemy();
    Item* getItem();
    int comeAcross();
    
};

#endif /* ARENA_H */

