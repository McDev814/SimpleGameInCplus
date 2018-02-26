/* 
 * File:   HerbalTea.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 * 
 * Created on February 25, 2018, 11:24 PM
 */

#include "HerbalTea.h"
#include <cstdlib>
#include <time.h>
using namespace std;

HerbalTea::HerbalTea() : name("herbal tea") {
}


string HerbalTea::get() {
    return name;
}

int HerbalTea::use() {
    srand(time(NULL));
    return rand() % 10 + 5;
}