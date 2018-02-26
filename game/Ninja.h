/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ninja.h
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 25, 2018, 5:55 PM
 */

#ifndef NINJA_H
#define NINJA_H

class Ninja : public Enemy {
public:
    Ninja();
    int fight(float diff);
    void speak();
private:

};

#endif /* NINJA_H */

