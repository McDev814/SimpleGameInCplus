/* 
 * File:   Player.h
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 24, 2018, 10:57 AM
 */

#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
    Player();
    void init();
    void save();
    void damage(int change);
    void heal(int change);
    void award(int pts);
private:
    int id;
    std::string name;
    int health;
    double score;
    double allTimeScore;
};

#endif /* PLAYER_H */

