/* 
 * File:   Food.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 * 
 * Created on February 26, 2018, 12:05 AM
 */

#include "Food.h"

Food::Food() : name("food") {
}

string Food::get() {
    return name;
}

int Food::use() {
    srand(time(NULL));
    return rand() % 3 + 5;
}
