/* 
 * File:   main.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 23, 2018, 3:50 PM
 */

#include <cstdlib>
#include <iostream>
#include "Player.h"
#include "Arena.h"
using namespace std;

int menu();
int getChoice();
void changeDifficulty();
Player player;
float difficulty = 1;

int main() {
    
    player.init();
    return menu();
    
}

int menu() {
    
    int choice;
    
    while (choice != 3) {
        choice = getChoice();
        switch(choice) {
            case 0: 
            {
                Arena arena(player, difficulty);
                arena.play();
            }
                break;
            case 1: 
            {
                player.save();
                player.init();
            }
                break;
            case 2: 
            {
                changeDifficulty();
            }
                break;
            case 3:
            {
                return 0;
            }
                break;
            default:
            {
                cout << "\nInvalid option! Press a key to choose: p, u, s, or q\n";
            }
                break;
        }
    }
}

int getChoice() {
    char choice;
    char options[4] = {'p','u','d','q'};
    
    cout << "      Main Menu\n";
    cout << "---------------------\n";
    cout << "p - play game" << endl;
    cout << "u - change user" << endl;
    cout << "d - change difficulty" << endl;
    cout << "q - quit\n" << endl;
    
    cin >> choice;
    
    system("clear");
    
    for (int x = 0; x < 4; x++) {
        if(choice == options[x]) { return x; }
    }
    
}

void changeDifficulty() {
    int choice = 0;
    int count = 0;
    while (choice < 1 || choice > 5) {
        if (count > 0) { cout << "Invalid choice, please press keys 1 - 4 and Enter.\n"; }
        if (count > 4) {
            system("clear");
            break;
        }
        cout << "Choose Difficulty (1 - 4)\n";
        cout << "1) Easy\n";
        cout << "2) Normal (default)\n";
        cout << "3) Hard\n";
        cout << "4) Insane\n";
        cout << "Enter choice (1-4): ";
        cin >> choice;
        if (choice > 0) {
            switch(choice) {
                case 1:
                    difficulty = .5;
                    break;
                case 2:
                    difficulty = 1;
                    break;
                case 3:
                    difficulty = 2;
                    break;
                case 4:
                    difficulty = 3;
            }
        }
        count++;
        system("clear");
    }
}