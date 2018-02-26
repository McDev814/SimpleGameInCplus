/* 
 * File:   Warrior.h
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 25, 2018, 10:50 PM
 */

#ifndef WARRIOR_H
#define WARRIOR_H

#include "Enemy.h"
#include <vector>
#include <string>

class Warrior : public Enemy {
public:
    Warrior();
    int fight(float diff);
    std::string speak();
    std::string getName();
private:
    std::string name;
    std::vector<std::string> sayings;
    int threatLevel;
};

#endif /* WARRIOR_H */

