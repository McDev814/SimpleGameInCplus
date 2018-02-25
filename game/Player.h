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
    void savePlayer();
private:
    int id;
    string name;
    double score;
    double allTimeScore;
};

#endif /* PLAYER_H */

