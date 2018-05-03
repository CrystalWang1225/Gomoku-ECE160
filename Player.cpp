//
//  Player.cpp
//  AIGobang
//
//  Created by Meidi on 18/4/25.
//  @authors Di Mei, Crystal Wang, Lindsay Ning
//

#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

int Player::getX(){
    cout << "x position input: ";
    cin >> x;
    return x;
}

int Player::getY(){
    cout << "y position input: ";
    cin >> y;
    return y;
}

void Player::setChess(char board[15][15]){
    board[x][y]=notation2;
}


