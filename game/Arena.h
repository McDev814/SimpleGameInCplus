/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arena.h
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 25, 2018, 5:58 PM
 */

#ifndef ARENA_H
#define ARENA_H

#include "Player.h"

class Arena {
public:
    Arena(Player p, float diff);
    void play();
private:
    float difficulty;
    Player p;

};

#endif /* ARENA_H */
