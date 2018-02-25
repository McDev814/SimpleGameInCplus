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

int id;
string name;
double score;
double allTimeScore;

Player::Player() {
    
}
Player::~Player() {
    
}

void Player::initPlayer() {
    
    bool isSet = false;
    string wantName;
    string tempName;
    int tempID = 0;
    double tempScore = 0;
    
    system("clear");
    cout << "Enter a player name \n";
    cout << "Each player name will have a different history.\n";
    cout << "Name: ";
    getline(cin, wantName);
    system("clear");
    
    
    // Try to find player in players.txt
    fstream fh("players.txt", ios::in);
    fh.seekg(ios::beg);
    while(fh >> tempID >> tempName >> tempScore) {
        // If a match is found, add to players.txt
        if (tempName == wantName) {
            id = tempID;
            name = tempName;
            score = 0;
            allTimeScore = tempScore;
            printf("Great, your highest score so far is %.2f points!", allTimeScore);
            isSet = true;
            break;
        }
    }
    fh.close();
    if (!isSet) {
        // If no player was found, add new one to players.txt
        fh.open("players.txt", ios::app);
        cout << "Great, you're a new player!\n";
        id = tempID + 1;
        name = wantName;
        score = 0;
        allTimeScore = 0;
        fh << id << ' ' << name << ' ' << allTimeScore << ' ' << endl;
    }
    fh.close();
}

// !!!!!!!!!!!!NEED TO COMPARE CURRENT AND ALL TIME SCORES!!!!!!!!!!
void Player::savePlayer() {
    
    string tempName;
    int tempID = 0;
    double tempScore = 0;
    
    fstream fh("players.txt", ios::in | ios::out);
    fh.seekg(ios::beg);
    while(fh >> tempID >> tempName >> tempScore) {
        // When a match is found, update players.txt
        if (id == tempID) {
            streampos x = fh.tellg();
            x = x - (long) 1;
            fh.seekp(x);
            fh << score;
            break;
        }
    }
}