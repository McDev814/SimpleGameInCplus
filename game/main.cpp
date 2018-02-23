/* 
 * File:   main.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 23, 2018, 3:50 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int getChoice();
void displayItems(int x);

// Main Function
int main(int argc, char** argv) {

    int choice;
    
    
    while (choice != 4) {
        choice = getChoice();
        switch(choice) {
            case 1: 
                displayItems(1);
                break;
            case 2: 
                displayItems(2);
                break;
            case 3: 
                displayItems(3);
                break;
        }
        choice = getChoice();
    }
    
}

// getChoice function
int getChoice() {
    int choice;
    
    cout << "1 - plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit program" << endl;
    
    cin >> choice;
    return choice;
    
}

// display items function
void displayItems(int x) {
    
    ifstream objectsFile("objects.txt");
    string name;
    double power;
    
    if (x == 1) {
        while(objectsFile >> name >> power) {
            if (power == 0) {
                cout << name << " " << power << endl;
            }
        }
    }
    if (x == 2) {
        while(objectsFile >> name >> power) {
            if (power > 0) {
                cout << name << " " << power << endl;
            }
        }
    }
    if (x == 3) {
        while(objectsFile >> name >> power) {
            if (power < 0) {
                cout << name << " " << power << endl;
            }
        }
    }
    
}