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

void Player::initPlayer() {
    
    bool isSet = false;
    string wantName;
    string tempName;
    int tempID = 0;
    double tempScore = 0;
    
    cout << "Enter a player name \n";
    cout << "Each player name will have a different history.\n";
    cout << "Name: ";
    getline(cin, wantName);
    
    
    
    fstream fh("players.txt", ios::in);
    fh.seekg(ios::beg);
    while(fh >> tempID >> tempName >> tempScore) {
        if (tempName == wantName) {
            id = tempID;
            name = tempName;
            score = 0;
            allTimeScore = tempScore;
            printf("Great, your highest score so far is %f points!", allTimeScore);
            isSet = true;
            break;
        }
    }
    fh.close();
    if (!isSet) {
        fh.open("players.txt", ios::app);
        cout << "Great, you're a new player!\n";
        id = tempID + 1;
        name = wantName;
        score = tempScore;
        allTimeScore = tempScore;
        fh << id << name << allTimeScore;
    }
    fh.close();
}

void Player::setID(int x) {
    id = x;
}

int Player::getID() {
    return id;
}

void Player::setName(string s) {
    name = s;
}

string Player::getName() {
    return name;
}

void Player::setScore(double x) {
    score = x;
}

double Player::getScore() {
    return score;
}

void Player::setAllTimeScore(double x) {
    allTimeScore = x;
}

double Player::getAllTimeScore() {
    return allTimeScore;
}