/* 
 * File:   Monster.h
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 25, 2018, 10:36 PM
 */

#ifndef MONSTER_H
#define MONSTER_H

#include "Enemy.h"
#include <vector>
#include <string>

class Monster : public Enemy {
public:
    Monster();
    int fight(float diff);
    std::string speak();
    std::string getName();
private:
    std::string name;
    std::vector<std::string> sayings;
    int threatLevel;
};

#endif /* MONSTER_H */

