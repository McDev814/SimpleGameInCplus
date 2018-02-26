/* 
 * File:   Enemy.h
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 25, 2018, 3:07 PM
 */

#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <vector>

class Enemy {
public:
    Enemy();
    virtual int fight(float diff)=0;
    virtual std::string speak()=0;
protected:
    std::string name;
    std::vector<std::string> sayings;
    int threatLevel;

};

#endif /* ENEMY_H */

