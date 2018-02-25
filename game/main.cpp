/* 
 * File:   main.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 23, 2018, 3:50 PM
 */

#include <cstdlib>
#include <iostream>
#include "Player.h"
using namespace std;

int menu();
int getChoice();
void displayMenu(int x);
Player p;

// Main Function
int main(int argc, char** argv) {
    
    p.initPlayer();
    return menu();
    
}

// Menu Function
int menu() {
    
    int choice;
    
    while (choice != 3) {
        choice = getChoice();
        switch(choice) {
            case 0: 
                cout << "\nchose to play game \n";
                break;
            case 1: 
                cout << "\nchose to play game \n";
                // Next bit of trickery to figure out
                /*
                p.savePlayer();
                p = new Player();
                p.initPlayer();
                */
                break;
            case 2: 
                cout << "\nchose to change settings \n";
                break;
            case 3:
                return 0;
                break;
            default:
                cout << "\nInvalid option! Press a key to choose: p, u, s, or q\n";
                break;
        }
    }
}

// getChoice function
int getChoice() {
    char choice;
    char options[4] = {'p','u','s','q'};
    
    cout << "\n   Main Menu\n";
    cout << "p - play game" << endl;
    cout << "u - change user" << endl;
    cout << "s - settings" << endl;
    cout << "q - quit\n" << endl;
    
    cin >> choice;
    
    system("clear");
    
    for (int x = 0; x < 4; x++) {
        if(choice == options[x]) { return x; }
    }
    
}