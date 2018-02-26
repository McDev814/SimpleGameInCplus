/* 
 * File:   Monster.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 * 
 * Created on February 25, 2018, 10:36 PM
 */

#include "Monster.h"
#include "Enemy.h"
#include <cstdlib>
#include <time.h>
using namespace std;

Monster::Monster()
:name("Monster"), threatLevel(5),
        sayings({"LOOK! Rocks are falling from the sky!",
        "Argh, I'm going to smash your ugly face with my fists!",
        "Everyone says I'm ugly, so I'm going to make you ugly too!",
        "Are you hiring a developer intern? You should hire Matt McCain. After I crush your skull.",
        "Hey, I'm just going to toss you off this cliff, let me know if you find anything down there."})
{
}

int Monster::fight(float diff) {
    
    return threatLevel * diff;
    
}

string Monster::speak() {
    
    srand (time(NULL));
    int i = rand() % sayings.size();
    return sayings.at(i);
    
}

string Monster::getName() {
    return name;
}