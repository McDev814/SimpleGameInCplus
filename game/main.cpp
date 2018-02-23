/* 
 * File:   main.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 *
 * Created on February 23, 2018, 3:50 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int getChoice();

// Main Function
int main(int argc, char** argv) {

    int choice;
    
    choice = getChoice();
    
    while (choice != 4) {
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