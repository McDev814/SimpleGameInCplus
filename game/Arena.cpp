/* 
 * File:   Arena.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 * 
 * Created on February 25, 2018, 5:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <time.h>
#include "Player.h"
#include "Arena.h"
using namespace std;

Arena::Arena(Player p, float diff)
:p(p), difficulty(diff)
{
}

void Arena::play() {
    
    generateEnemy();
    generateItems();
    int sentinal;
    int rounds = 0;
    string t;
    
    cout << "Welcome to Mt. Moridoryiama, do you think you have\n";
    cout << "What it takes to conquer the steep mountain side?\n";
    cout << "Along the way you will encounter some awful people and monsters!\n";
    cout << "You will also come across some items to help keep you alive.\n";
    cout << "Good Luck!\n\n";
    cout << "How many rounds do you think it will take to get to the top? ";
    cin >> sentinal;
    
    
    while (rounds < sentinal && p.getHealth() > 0) {
        system("clear");
        srand(time(NULL));
        int mult = rand() % 3 + 1;
        cout << "You have come across a ";
        if (comeAcross()) {
            Item i = getItem();
            cout << i.get() << " which will increase your health by " << i.use() << " points!\n";
            p.heal(i.use());
        } else {
            Enemy e = getEnemy();
            int i = e.fight(difficulty);
            int a = i * mult;
            cout << e.getName() << "! Who says:\n\n" << e.speak() << endl;
            cout << "\nAfter that fight, your health is at " << i << " points!\n";
            p.award(a);
            cout << "Though, you did get " << a << " points for your battle!";
        }
        p.award(rand() % 20);
        cout << "Press Enter to keep going, you must finish!";
        cin >> t;
    }
    
    system("clear");
    
    if (rounds != sentinal) {
        cout << "Uh oh, it looks like you died!\n\n";
    } else {
        cout << "Congratulations, you made it to the top of\n";
        cout << "Mt. Moridoryiama!!!!!!!!!!!!!!!!!\n\n";
    }
    cout << "Your score is: " << p.getScore() << endl;
    cout << "Your previous all time best was: " << p.getAllTime() << endl;
    cout << "\n\nPress Enter to go back to the main menu.";
    
    
}

int Arena::comeAcross() {
    srand(time(NULL));
    return rand() % 2;
}

Enemy Arena::getEnemy() {
    
    srand(time(NULL));
    int pos = rand() % enemies.size_type + 1;
    return enemies.at(pos);
    
}

Item Arena::getItem() {
    srand(time(NULL));
    int pos = rand() % items.size_type + 1;
    return items.at(pos);
}

void Arena::generateEnemy() {
    Ninja ninja;
    Monster monster;
    Warrior warrior;
    enemies.push_back(ninja);
    enemies.push_back(monster);
    enemies.push_back(warrior);
    
}

void Arena::generateItems() {
    HerbalTea tea;
    Potion potion;
    Food food;
    items.push_back(tea);
    items.push_back(potion);
    items.push_back(food);
}