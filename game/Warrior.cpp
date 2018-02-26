/* 
 * File:   Warrior.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 * 
 * Created on February 25, 2018, 10:50 PM
 */

#include "Warrior.h"
#include "Enemy.h"
#include <cstdlib>
#include <time.h>
using namespace std;

Warrior::Warrior()
:name("Warrior"), threatLevel(7),
    sayings({"After what I've been through, this will be like stealing candy from a baby!",
    "I'm about to make mincemeat out of you!",
    "Are you hiring a developer intern? You should hire Matt McCain. After I whip your butt."
    "Say hello to my little friend!",
    "Looking at me??? Oh, this machete? Don't worry, I haven't killed that many people with it."})
{
}

int Warrior::fight(float diff) {
    
    return threatLevel * diff;
    
}

string Warrior::speak() {
    
    srand (time(NULL));
    int i = rand() % sayings.size() + 1;
    return sayings.at(i);
    
}

string Warrior::getName() {
    return name;
}