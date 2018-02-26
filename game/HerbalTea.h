/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

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

