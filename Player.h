//
//  Player.h
//  AIGobang
//
//  Created by Meidi on 18/4/25.
//  @authors Di Mei, Crystal Wang, Lindsay Ning
//

#ifndef __AIGobang__Player__
#define __AIGobang__Player__

#include <iostream>

class Player{
public:

    int x; // horizontal position
    int y; // vertical position
    const char notation2 = 'X';
    
    int getX();
    int getY();
    void setChess(char[15][15]);
    
};

#endif /* defined(__AIGobang__Player__) */

