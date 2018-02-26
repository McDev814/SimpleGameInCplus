/* 
 * File:   Enemy.h
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 25, 2018, 3:07 PM
 */

#ifndef ENEMY_H
#define ENEMY_H

#include <string>

class Enemy {
public:
    Enemy();
    virtual int fight(float diff)=0;
    virtual std::string speak()=0;
protected:


};

#endif /* ENEMY_H */

