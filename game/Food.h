/* 
 * File:   Food.h
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 26, 2018, 12:05 AM
 */

#ifndef FOOD_H
#define FOOD_H

#include "Item.h"
#include <string>

class Food : public Item {
public:
    Food();
    int use();
    std::string get();
private:
    int effect;
    std::string name;
};

#endif /* FOOD_H */

