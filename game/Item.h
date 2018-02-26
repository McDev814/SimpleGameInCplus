/* 
 * File:   Item.h
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 25, 2018, 11:03 PM
 */

#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
public:
    Item();
    virtual int use()=0;
    virtual std::string get()=0;
private:

};

#endif /* ITEM_H */

