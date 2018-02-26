/* 
 * File:   Ninja.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 * 
 * Created on February 25, 2018, 5:55 PM
 */

#include "Ninja.h"
#include "Enemy.h"
#include <cstdlib>
#include <time.h>
using namespace std;

Ninja::Ninja()
:name("Ninja"), threatLevel(7),
    sayings({"I will chop you in half with my Samurai sword!",
    "My nunchaku will wear you down, silly foe.",
    "You better run, my throwing stars are as fast as lightning!",
    "Are you hiring a developer intern? You should hire Matt McCain. Though, after I swipe your face with my bear claw!",
    "You will feel weary from the poisonous darts of my blowgun.",
    "I'm a Ninja, do you really think you stand a chance?",
    "My turtle friends are not far behind, will you live to meet them?",
    "You will soon learn the confusion of my smoke bomb!"})
{
}

int Ninja::fight(float diff) {
    
    return threatLevel * diff;
    
}

string Ninja::speak() {
    
    srand (time(NULL));
    int i = rand() % sayings.size() + 1;
    return sayings.at(i);
    
}