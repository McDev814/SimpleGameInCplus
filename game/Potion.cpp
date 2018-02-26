/* 
 * File:   Potion.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 * 
 * Created on February 25, 2018, 11:10 PM
 */

#include "Potion.h"
#include <cstdlib>
#include <time.h>
using namespace std;

Potion::Potion() : name("potion") {
}


string Potion::get() {
    return name;
}

int Potion::use() {
    srand(time(NULL));
    return rand() % 15 + 5;
}