/* 
 * File:   Ninja.h
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 25, 2018, 5:55 PM
 */

#ifndef NINJA_H
#define NINJA_H

#include "Enemy.h"
#include <vector>
#include <string>

class Ninja : public Enemy {
public:
    Ninja();
    int fight(float diff);
    std::string speak();
    std::string getName();
private:
    std::string name;
    std::vector<std::string> sayings;
    int threatLevel;
};

#endif /* NINJA_H */

