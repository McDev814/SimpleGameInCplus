/* 
 * File:   HerbalTea.h
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 25, 2018, 11:24 PM
 */

#ifndef HERBALTEA_H
#define HERBALTEA_H

#include "Item.h"
#include <string>

class HerbalTea : public Item {
public:
    HerbalTea();
    int use();
    std::string get();
private:
    int effect;
    std::string name;
};
#endif /* HERBALTEA_H */

