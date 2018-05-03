//
//  Chessboard.h
//  AIGobang
//
//  Created by Meidi on 18/4/25.
//  @authors Di Mei, Crystal Wang, Lindsay Ning
//

#ifndef __AIGobang__Chessboard__
#define __AIGobang__Chessboard__

#include <iostream>

using namespace std;

class ChessBoard
{
public:
    enum{ROW = 15, COL = 15};
    char Board[ROW][COL];
    
    void initBoard(char[15][15]);
    void copyBoard(char[15][15]);
    void show();
};

#endif

