//
//  Chessboard.cpp
//  AIGobang
//
//  Created by Meidi on 18/4/25.
//  @authors Di Mei, Crystal Wang, Lindsay Ning
//
//  29 "-", 14 "|"
//  | - - - |
//  | X | O |

#include "Chessboard.h"
#include <iostream>

using namespace std;

void ChessBoard::show(){
    
    for (int i = 0; i < ROW; i++) {
        cout << '|';
        for (int j = 0; j < 29; j++) {
            cout << " -";
        }
        cout << " |" << endl;
        cout << "| ";
        for (int k = 0; k < COL; k++) {
            cout << Board[i][k];
            cout << " | ";
        }
        cout << i << endl;
    }
    
    // last number line
    cout << '|';
    for (int j = 0; j < 29; j++) {
        cout << " -";
    }
    cout << " |" << endl;
    cout << "  ";
    for (int k = 0; k < 10; k++) {
        cout << k;
        cout << "   ";
    }
    for (int i = 0; i < 5; i++) {
        cout << i+10;
        cout << "  ";
    }
    cout << endl;
    
}

void ChessBoard::initBoard(char a[15][15]){
    for (int i=0; i<15; i++) {
        for (int j=0; j<15; j++) {
            a[i][j]=' ';
        }
    }
}

void ChessBoard::copyBoard(char a[15][15]){
    for (int i=0; i<15; i++) {
        for (int j=0; j<15; j++) {
            Board[i][j]=a[i][j];
        }
    }
}

