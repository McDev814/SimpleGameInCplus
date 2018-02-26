/* 
 * File:   Potion.h
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 25, 2018, 11:10 PM
 */

#ifndef POTION_H
#define POTION_H

#include "Item.h"
#include <string>

class Potion : public Item {
public:
    Potion();
    int use();
    std::string get();
private:
    int effect;
    std::string name;

};

#endif /* POTION_H */

