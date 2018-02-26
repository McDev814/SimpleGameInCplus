/* 
 * File:   Arena.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 * 
 * Created on February 25, 2018, 5:58 PM
 */

#include <cstdlib>
#include <iostream>
#include "Player.h"
#include "Arena.h"
using namespace std;

Player p;
float difficulty;

Arena::Arena(Player p, float diff)
:p(p), difficulty(diff)
{
}

void Arena::play() {
    
    cout << "Will implement play later.";
    
    
}