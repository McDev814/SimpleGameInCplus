/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 24, 2018, 10:57 AM
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <cstdlib>
#include <iostream>
#include "Player.h"
using namespace std;

class Player {
public:
    Player();
    Player(string s);
    Player(const Player& orig);
    virtual ~Player();
    void initName();
    void setName(string s);
    string getName();
private:
    string name;
    int id;

};

#endif /* PLAYER_H */

