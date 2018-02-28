/* 
 * File:   Player.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 * 
 * Created on February 24, 2018, 10:57 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "Player.h"
using namespace std;

Player::Player() {
    
}

void Player::init() {
    
    // Clear variable members if previously initialized
    if (name != "") {
        id = 0;
        name = "";
        score = 0;
        allTimeScore = 0;
        
    }
    
    bool isSet = false;
    string wantName;
    string tempName;
    int tempID = 0;
    int tempScore = 0;
    
    cout << "Enter a player name \n";
    cout << "Each player name will have a different history.\n";
    cout << "Name: ";
    cin >> wantName;
    system("clear");
    
    
    // Try to find player in players.txt
    fstream fh("players.txt", ios::in);
    fh.seekg(ios::beg);
    while(fh >> tempID >> tempName >> tempScore) {
        // If a match is found, load values to member variables
        if (tempName == wantName) {
            id = tempID;
            name = tempName;
            health = 100;
            score = 0;
            allTimeScore = tempScore;
            printf("Great, your highest score so far is %d points!\n\n", allTimeScore);
            isSet = true;
            break;
        }
    }
    fh.close();
    if (!isSet) {
        // If no player was found, add new one to players.txt
        fh.open("players.txt", ios::app);
        cout << "Great, you're a new player!\n\n";
        id = tempID + 1;
        name = wantName;
        health = 100;
        score = 0;
        allTimeScore = 0;
        fh << id << ' ' << name << ' ' << allTimeScore << ' ' << endl;
    }
    fh.close();
}

void Player::save() {
    
    string tempName;
    int tempID;
    int tempScore;
    
    // Copy players.txt to temp.txt, and update score if player has bested themselves
    ifstream ifh("players.txt");
    ofstream ofh("temp.txt");
    while(ifh >> tempID >> tempName >> tempScore) {
        if (id == tempID && score > tempScore) {
            ofh << tempID << ' ' << tempName << ' ' << score << ' ' << endl;
        } else {
            ofh << tempID << ' ' << tempName << ' ' << tempScore << ' ' << endl;
        }
    }
    ifh.close();
    ofh.close();
    // Write contents of temp.txt back to players.txt
    ifh.open("temp.txt");
    ofh.open("players.txt");
    while(ifh >> tempID >> tempName >> tempScore) {
        ofh << tempID << ' ' << tempName << ' ' << tempScore << ' ' << endl;
    }
    ifh.close();
    ofh.close();
    // Delete the temp file
    system("rm temp.txt");
    
}

void Player::damage(int change) {
    health -= change;
}

void Player::heal(int change) {
    health += change;
}

void Player::award(int pts) {
    score += pts;
}

int Player::getHealth() {
    return health;
}

int Player::getScore() {
    return score;
}

int Player::getAllTime() {
    return allTimeScore;
}