//
//  Computer.h
//  AIGobang
//
//  Created by Meidi on 18/4/25.
//  @authors Di Mei, Crystal Wang
//

#ifndef __AIGobang__Computer__
#define __AIGobang__Computer__

#include <iostream>
#include <string>

using namespace std;

class Computer{
public:
    
    const char notation = 'O';
    
    int horizontalScore(int x, int y, char sign, char[15][15]);
    int verticalScore(int x, int y, char sign, char[15][15]);
    int topdownDiagonalScore(int x, int y, char sign, char[15][15]);
    int downtopDiagonalScore(int x, int y, char sign, char[15][15]);
    int finalSet(char[15][15]);
    
    
};


#endif /* defined(__AIGobang__Computer__) */

