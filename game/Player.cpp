/* 
 * File:   Player.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 * 
 * Created on February 24, 2018, 10:57 AM
 */

#include <cstdlib>
#include <iostream>
#include "Player.h"
using namespace std;

string name;
int id;

Player::Player() {
    cout << "Enter a player name \n";
    cout << "You can create as many players as  you like!\n";
    cout << "Each player name will have a different history.\n";
    cout << "Name: ";
    getline(cin, name);    
}

Player::Player(string s)
:name(s)
{
}

Player::Player(const Player& orig) {
}

Player::~Player() {
}

void initName() {
    
}

void setName(string s) {
    name = s;
}

string getName() {
    return name;
}