/* 
 * File:   Arena.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 * 
 * Created on February 25, 2018, 5:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <time.h>
#include <vector>
#include "Arena.h"
#include "Enemy.h"
#include "Food.h"
#include "HerbalTea.h"
#include "Item.h"
#include "Monster.h"
#include "Ninja.h"
#include "Player.h"
#include "Potion.h"
#include "Warrior.h"
using namespace std;

Arena::Arena(Player pt, float diff)
:player(pt), difficulty(diff)
{
}

void Arena::play() {
    
    // Generate Enemy* vector
    Ninja ninja;
    Enemy* ne = &ninja;
    Monster monster;
    Enemy* me = &monster;
    Warrior warrior;
    Enemy* we = &warrior;
    enemies.push_back(ne);
    enemies.push_back(me);
    enemies.push_back(we);
    
    // Generate Items* vector
    HerbalTea tea;
    Item* t = &tea;
    Potion potion;
    Item* p = &potion;
    Food food;
    Item* f = &food;
    items.push_back(t);
    items.push_back(p);
    items.push_back(f);
    
    int sentinal;
    int rounds = 0;
    string temp;
    
    cout << "Welcome to Mt. Moridoryiama, do you think you have\n";
    cout << "What it takes to conquer the steep mountain side?\n";
    cout << "Along the way you will encounter some awful people and monsters!\n";
    cout << "You will also come across some items to help keep you alive.\n";
    cout << "Good Luck!\n\n";
    cout << "How many rounds do you think it will take to get to the top? ";
    cin >> sentinal;
    
    
    while (rounds < sentinal && player.getHealth() > 0) {
        system("clear");
        srand(time(NULL));
        int mult = rand() % 3 + 1;
        cout << "You have come across a ";
        if (comeAcross()) {
            Item* i = getItem();
            cout << i->get() << " which will increase your health by " << i->use() << " points!\n";
            player.heal(i->use());
        } else {
            Enemy* e = getEnemy();
            int i = e->fight(difficulty);
            int a = i * mult;
            cout << e->getName() << "! Who says:\n\n" << e->speak() << endl;
            cout << "\nAfter that fight, your health is at " << i << " points!\n";
            player.award(a);
            cout << "Though, you did get " << a << " points for your battle!";
        }
        player.award(rand() % 20);
        cout << "Press Enter to keep going, you must finish!";
        cin >> temp;
    }
    
    system("clear");
    
    if (rounds != sentinal) {
        cout << "Uh oh, it looks like you died!\n\n";
    } else {
        cout << "Congratulations, you made it to the top of\n";
        cout << "Mt. Moridoryiama!!!!!!!!!!!!!!!!!\n\n";
    }
    cout << "Your score is: " << player.getScore() << endl;
    cout << "Your previous all time best was: " << player.getAllTime() << endl;
    cout << "\n\nPress Enter to go back to the main menu.";
    
    
}

int Arena::comeAcross() {
    srand(time(NULL));
    return rand() % 2;
}

Enemy* Arena::getEnemy() {
    
    srand(time(NULL));
    int pos = rand() % enemies.size();
    return enemies.at(pos);
    
}

Item* Arena::getItem() {
    srand(time(NULL));
    int pos = rand() % items.size();
    return items.at(pos);
}
