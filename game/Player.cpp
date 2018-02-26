/* 
 * File:   Player.cpp
 * Author: Matt McCain <mmccain814@gmail.com>
 * 
 * Created on February 24, 2018, 10:57 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
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
    double tempScore = 0;
    
    cout << "Enter a player name \n";
    cout << "Each player name will have a different history.\n";
    cout << "Name: ";
    cin >> wantName;
    system("clear");
    
    
    // Try to find player in players.txt
    fstream fh("players.txt", ios::in);
    fh.seekg(ios::beg);
    while(fh >> tempID >> tempName >> tempScore) {
        // If a match is found, add to players.txt
        if (tempName == wantName) {
            id = tempID;
            name = tempName;
            health = 100;
            score = 0;
            allTimeScore = tempScore;
            printf("Great, your highest score so far is %.2f points!\n\n", allTimeScore);
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
    int tempID = 0;
    double tempScore = 0;
    
    fstream fh("players.txt", ios::in | ios::out);
    fh.seekg(ios::beg);
    while(fh >> tempID >> tempName >> tempScore) {
        // When a match is found, update players.txt
        if (id == tempID && tempScore > score) {
            streampos x = fh.tellg();
            x = x - (long) 1;
            fh.seekp(x);
            fh << score;
            break;
        }
    }
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

double Player::getScore() {
    return score;
}

double Player::getAllTime() {
    return allTimeScore;
}