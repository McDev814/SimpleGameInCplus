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
using namespace std;

class Player {
public:
    Player();
    void initPlayer();
protected:
    void setID(int x);
    int getID();
    void setName(string s);
    string getName();
    void setScore(double x);
    double getScore();
    void setAllTimeScore(double x);
    double getAllTimeScore();
private:
    int id;
    string name;
    double score;
    double allTimeScore;
};

#endif /* PLAYER_H */

