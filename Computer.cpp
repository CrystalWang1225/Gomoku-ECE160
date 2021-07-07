//test3
//
//  Computer.cpp
//  AIGobang
//
//  Created by Meidi on 18/4/25.
//  @authors Di Mei, Crystal Wang
//

#include "Computer.h"
#include <iostream>
#include <string>

int Computer::horizontalScore(int x, int y, char sign, char board[15][15]){
    
    int score = 0;
    
    board[x][y] = sign; // move in the chess
    
    if ((board[x][y]==sign && board[x][y+1]==sign && board[x][y+2]==sign &&
         board[x][y+3]==sign && board[x][y+4]==sign)||
        (board[x][y-1]==sign && board[x][y]==sign && board[x][y+1]==sign &&
         board[x][y+2]==sign && board[x][y+3]==sign)||
        (board[x][y-2]==sign && board[x][y-1]==sign && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==sign)||
        (board[x][y-3]==sign && board[x][y-2]==sign && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==sign)||
        (board[x][y-4]==sign && board[x][y-3]==sign && board[x][y-2]==sign &&
         board[x][y-1]==sign && board[x][y]==sign)) {
            score = 50000;
            cout << "horizon maximum called" << endl;
    }else if ((board[x][y-1]==' ' && board[x][y]==sign && board[x][y+1]==sign &&
         board[x][y+2]==sign && board[x][y+3]==sign && board[x][y+4]==' ')||
        (board[x][y-2]==' ' && board[x][y-1]==sign && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==sign && board[x][y+3]==' ')||
        (board[x][y-3]==' ' && board[x][y-2]==sign && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==sign && board[x][y+2]==' ')||
        (board[x][y-4]==' ' && board[x][y-3]==sign && board[x][y-2]==sign &&
         board[x][y-1]==sign && board[x][y]==sign && board[x][y+1]==' ')) {
            if (sign=='O') {
                score = 7000;
            }else{
                score = 4320;
            }
            // (2) +OOOO+
    }else if ((board[x][y-1]==' ' && board[x][y]==sign && board[x][y+1]==sign &&
         board[x][y+2]==sign && board[x][y+3]==' ' && board[x][y+4]==' ')||
        (board[x][y-2]==' ' && board[x][y-1]==sign && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==' ' && board[x][y+3]==' ')||
        (board[x][y-3]==' ' && board[x][y-2]==sign && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==' ' && board[x][y+2]==' ')) {
        score = 720;
    }else if ((board[x][y-2]==' ' && board[x][y-1]==' ' && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==sign && board[x][y+3]==' ')||
        (board[x][y-3]==' ' && board[x][y-2]==' ' && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==sign && board[x][y+2]==' ')||
        (board[x][y-4]==' ' && board[x][y-3]==' ' && board[x][y-2]==sign &&
         board[x][y-1]==sign && board[x][y]==sign && board[x][y+1]==' ')) {
        score = 720;
    }else if ((board[x][y-1]==' ' && board[x][y]==sign && board[x][y+1]==sign &&
         board[x][y+2]==' ' && board[x][y+3]==sign && board[x][y+4]==' ')||
        (board[x][y-2]==' ' && board[x][y-1]==sign && board[x][y]==sign &&
         board[x][y+1]==' ' && board[x][y+2]==sign && board[x][y+3]==' ')||
        (board[x][y-4]==' ' && board[x][y-3]==sign && board[x][y-2]==sign &&
         board[x][y-1]==' ' && board[x][y]==sign && board[x][y+1]==' ')) {
        score = 720;
    }else if ((board[x][y-1]==' ' && board[x][y]==sign && board[x][y+1]==' ' &&
         board[x][y+2]==sign && board[x][y+3]==sign && board[x][y+4]==' ')||
        (board[x][y-3]==' ' && board[x][y-2]==sign && board[x][y-1]==' ' &&
         board[x][y]==sign && board[x][y+1]==sign && board[x][y+2]==' ')||
        (board[x][y-4]==' ' && board[x][y-3]==sign && board[x][y-2]==' ' &&
         board[x][y-1]==sign && board[x][y]==sign && board[x][y+1]==' ')) {
        score = 720;
    }else if ((board[x][y]==sign && board[x][y+1]==sign && board[x][y+2]==sign &&
         board[x][y+3]==sign && board[x][y+4]==' ')||
        (board[x][y-1]==sign && board[x][y]==sign && board[x][y+1]==sign &&
         board[x][y+2]==sign && board[x][y+3]==' ')||
        (board[x][y-2]==sign && board[x][y-1]==sign && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==' ')||
        (board[x][y-3]==sign && board[x][y-2]==sign && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==' ')) {
        score = 720;
    }else if ((board[x][y-1]==' ' && board[x][y]==sign && board[x][y+1]==sign &&
         board[x][y+2]==sign && board[x][y+3]==sign)||
        (board[x][y-2]==' ' && board[x][y-1]==sign && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==sign)||
        (board[x][y-3]==' ' && board[x][y-2]==sign && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==sign)||
        (board[x][y-4]==' ' && board[x][y-3]==sign && board[x][y-2]==sign &&
         board[x][y-1]==sign && board[x][y]==sign)) {
        score=720;
    }else if ((board[x][y]==sign && board[x][y+1]==sign && board[x][y+2]==' ' &&
         board[x][y+3]==sign && board[x][y+4]==sign)||
        (board[x][y-1]==sign && board[x][y]==sign && board[x][y+1]==' ' &&
         board[x][y+2]==sign && board[x][y+3]==sign)||
        (board[x][y-3]==sign && board[x][y-2]==sign && board[x][y-1]==' ' &&
         board[x][y]==sign && board[x][y+1]==sign)||
        (board[x][y-4]==sign && board[x][y-3]==sign && board[x][y-2]==' ' &&
         board[x][y-1]==sign && board[x][y]==sign)) {
        score=720;
    }else if ((board[x][y]==sign && board[x][y+1]==' ' && board[x][y+2]==sign &&
         board[x][y+3]==sign && board[x][y+4]==sign)||
        (board[x][y-2]==sign && board[x][y-1]==' ' && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==sign)||
        (board[x][y-3]==sign && board[x][y-2]==' ' && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==sign)||
        (board[x][y-4]==sign && board[x][y-3]==' ' && board[x][y-2]==sign &&
         board[x][y-1]==sign && board[x][y]==sign)) {
        score=720;
    }else if ((board[x][y]==sign && board[x][y+1]==sign && board[x][y+2]==sign &&
         board[x][y+3]==' ' && board[x][y+4]==sign)||
        (board[x][y-1]==sign && board[x][y]==sign && board[x][y+1]==sign &&
         board[x][y+2]==' ' && board[x][y+3]==sign)||
        (board[x][y-2]==sign && board[x][y-1]==sign && board[x][y]==sign &&
         board[x][y+1]==' ' && board[x][y+2]==sign)||
        (board[x][y-4]==sign && board[x][y-3]==sign && board[x][y-2]==sign &&
         board[x][y-1]==' ' && board[x][y]==sign)) {
        score=720;
    }else if ((board[x][y-2]==' ' && board[x][y-1]==' ' && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==' ' && board[x][y+3]==' ')||
        (board[x][y-3]==' ' && board[x][y-2]==' ' && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==' ' && board[x][y+2]==' ')) {
        score = 120;
    }else if ((board[x][y-2]==' ' && board[x][y-1]==' ' && board[x][y]==sign &&
         board[x][y+1]==' ' && board[x][y+2]==sign && board[x][y+3]==' ')||
        (board[x][y-4]==' ' && board[x][y-3]==' ' && board[x][y-2]==sign &&
         board[x][y-1]==' ' && board[x][y]==sign && board[x][y+1]==' ')) {
        score = 120;
    }else if ((board[x][y-1]==' ' && board[x][y]==sign && board[x][y+1]==' ' &&
         board[x][y+2]==sign && board[x][y+3]==' ' && board[x][y+4]==' ')||
        (board[x][y-3]==' ' && board[x][y-2]==sign && board[x][y-1]==' ' &&
         board[x][y]==sign && board[x][y+1]==' ' && board[x][y+2]==' ')) {
            score = 120;
    }else if (board[x][y-3]==' ' && board[x][y-2]==' ' && board[x][y-1]==' ' &&
        board[x][y]==sign && board[x][y+1]==' ' && board[x][y+2]==' ') {
        score = 20;
    }else if (board[x][y-2]==' ' && board[x][y-1]==' ' && board[x][y]==sign &&
        board[x][y+1]==' ' && board[x][y+2]==' ' && board[x][y+3]==' ') {
        score = 20;
    }
    
    board[x][y] = ' '; // move out the chess
    
    return score;
    
}

// vertical direction score (same condition as the horizontal one )
int Computer::verticalScore(int x, int y, char sign, char board[15][15]){
    
    int score = 0;
    
    board[x][y]=sign;
    
    if ((board[x][y]==sign && board[x+1][y]==sign && board[x+2][y]==sign &&
         board[x+3][y]==sign && board[x+4][y]==sign)||
        (board[x-1][y]==sign && board[x][y]==sign && board[x+1][y]==sign &&
         board[x+2][y]==sign && board[x+3][y]==sign)||
        (board[x-2][y]==sign && board[x-1][y]==sign && board[x][y]==sign &&
         board[x+1][y]==sign && board[x+2][y]==sign)||
        (board[x-3][y]==sign && board[x-2][y]==sign && board[x-1][y]==sign &&
         board[x][y]==sign && board[x+1][y]==sign)||
        (board[x-4][y]==sign && board[x-3][y]==sign && board[x-2][y]==sign &&
         board[x-1][y]==sign && board[x][y]==sign)) {
            score = 50000; // (1) OOOOO
            cout << "vertical maximum called" << endl;
    }
    
    else if ((board[x-1][y]==' ' && board[x][y]==sign && board[x+1][y]==sign &&
              board[x+2][y]==sign && board[x+3][y]==sign && board[x+4][y]==' ')||
             (board[x-2][y]==' ' && board[x-1][y]==sign && board[x][y]==sign &&
              board[x+1][y]==sign && board[x+2][y]==sign && board[x+3][y]==' ')||
             (board[x-3][y]==' ' && board[x-2][y]==sign && board[x-1][y]==sign &&
              board[x][y]==sign && board[x+1][y]==sign && board[x+2][y]==' ')||
             (board[x-4][y]==' ' && board[x-3][y]==sign && board[x-2][y]==sign &&
              board[x-1][y]==sign && board[x][y]==sign && board[x+1][y]==' ')){
                 if (sign=='O') {
                     score = 7000;
                 }else{
                     score = 4320;
                 }
                 // (2) +OOOO+
    }
    
    else if ((board[x-1][y] == ' ' && board[x][y] == sign && board[x+1][y] == sign &&
              board[x+2][y] == sign && board[x+3][y] ==' ' && board[x+4][y] == ' ' )||
             (board[x-2][y] == ' ' && board[x-1][y] == sign && board[x][y] == sign &&
              board[x+1][y] == sign && board[x+2][y] ==' ' && board[x+3][y] == ' ')||
             (board[x-3][y] == ' ' && board[x-2][y] == sign && board[x-1][y] == sign &&
              board[x][y] == sign && board[x+1][y] == ' ' && board[x+2][y] == ' '))
    {
        score = 720; // (3) +OOO++
    }
    
    else if ((board[x-2][y] == ' ' && board[x-1][y] == ' ' && board[x][y] == sign &&
              board[x+1][y] == sign && board[x+2][y] == sign && board[x+3][y] == ' ')||
             (board[x-3][y] == ' ' && board[x-2][y] == ' ' && board[x-1][y] == sign &&
              board[x][y] == sign && board[x+1][y] == sign && board[x+2][y] == ' ')||
             (board[x-4][y] == ' ' && board[x-3][y] == ' ' && board[x-2][y] == sign &&
              board[x-1][y] == sign && board[x][y] == sign && board[x-1][y] == ' '))
    {
        score = 720; // (4) ++OOO+
    }
    
    else if ((board[x-1][y] == ' ' && board[x][y] == sign && board[x+1][y] == sign &&
              board[x+2][y] == ' ' && board[x+3][y] == sign && board[x+4][y] == ' ')||
             (board[x-2][y] == ' ' && board[x-1][y] == sign && board[x][y] == sign &&
              board[x+1][y] == ' ' && board[x+2][y] == sign && board[x+3][y] == ' ')||
             (board[x-4][y] == ' ' && board[x-3][y] == sign && board[x-2][y] == sign &&
              board[x-1][y] == ' ' && board[x][y] == sign && board[x+1][y] == ' '))
    {
        score = 720; // (5) +OO+O+
    }
    
    else if ((board[x-1][y] == ' ' && board[x][y] == sign && board[x+1][y] == ' ' &&
              board[x+2][y] == sign && board[x+3][y] == sign && board[x+4][y] == ' ')||
             (board[x-3][y] == ' ' && board[x-2][y] == sign && board[x-1][y] == ' ' &&
              board[x][y] == sign && board[x+1][y] == sign && board[x+2][y] == ' ')||
             (board[x-4][y] == ' ' && board[x-3][y] == sign && board[x-2][y] == ' ' &&
              board[x-1][y] == sign && board[x][y] == sign && board[x+1][y] == ' '))
    {
        score = 720; // (6) +O+OO+
    }
    
    else if ((board[x][y] == sign && board[x+1][y] == sign && board[x+2][y] == sign &&
              board[x+3][y] == sign && board[x+4][y] == ' ' )||
             (board[x-1][y] == sign && board[x][y] == sign && board[x+1][y] == sign &&
              board[x+2][y] == sign && board[x+3][y] == ' ' )||
             (board[x-2][y] == sign && board[x-1][y] == sign && board[x][y] == sign &&
              board[x+1][y] == sign && board[x+2][y] == ' ' )||
             (board[x-3][y] == sign && board[x-2][y] == sign && board[x-1][y] == sign &&
              board[x][y] == sign && board[x+1][y] == ' ' ))
    {
        score = 720; // (7) OOOO+
    }
    
    else if ((board[x][y] == sign && board[x+1][y] == sign && board[x+2][y] == ' ' &&
              board[x+3][y] == sign && board[x+4][y] == sign)||
             (board[x-1][y] == sign && board[x][y] == sign && board[x+1][y] == ' ' &&
              board[x+2][y] == sign && board[x+3][y] == sign)||
             (board[x-3][y] == sign && board[x-2][y] == sign && board[x-1][y] == ' ' &&
              board[x][y] == sign && board[x+1][y] == sign)||
             (board[x-4][y] == sign && board[x-3][y] == sign && board[x-2][y] == ' ' &&
              board[x-1][y] == sign && board[x][y] == sign))
    {
        score = 720; // (9) OO+OO
    }
    
    else if ((board[x-1][y] == ' ' && board[x][y] == sign && board[x+1][y] == sign &&
              board[x+2][y] == sign && board[x+3][y] == sign  )||
             (board[x-2][y] == ' ' && board[x-1][y] == sign && board[x][y] == sign &&
              board[x+1][y] == sign && board[x+2][y] == sign )||
             (board[x-3][y] == ' ' && board[x-2][y] == sign && board[x-1][y] == sign &&
              board[x][y] == sign && board[x+1][y] == sign )||
             (board[x-4][y] == ' ' && board[x-3][y] == sign && board[x-2][y] == sign &&
              board[x-1][y] == sign && board[x][y] == sign )){
                 score = 720; // (8) +OOOO
             }

    else if ((board[x][y] == sign && board[x+1][y] == ' ' && board[x+2][y] ==sign &&
             board[x+3][y] == sign && board[x+4][y] == sign)||
            (board[x-2][y] == sign && board[x-1][y] == ' ' && board[x][y] ==sign &&
             board[x+1][y] == sign && board[x+2][y] == sign)||
            (board[x-3][y] == sign && board[x-2][y] == ' ' && board[x-1][y] ==sign &&
             board[x][y] == sign && board[x+1][y] == sign)||
            (board[x-4][y] == sign && board[x-3][y] == ' ' && board[x-2][y] ==sign &&
             board[x-1][y] == sign && board[x][y] == sign)){
                score = 720; // (10) O+OOO
            }
    
    else if ((board[x][y] == sign && board[x+1][y] == sign && board[x+2][y] == sign &&
             board[x+3][y] == ' ' && board[x+4][y] == sign)||
            (board[x-1][y] == sign && board[x][y] == sign && board[x+1][y] == sign &&
             board[x+2][y] == ' ' && board[x+3][y] == sign)||
            (board[x-2][y] == sign && board[x-1][y] == sign && board[x][y] == sign &&
             board[x+1][y] == ' ' && board[x+2][y] == sign)||
            (board[x-4][y] == sign && board[x-3][y] == sign && board[x-2][y] == sign &&
             board[x-1][y] == ' ' && board[x][y] == sign))
            {
                score = 720; // (11) OOO+O
            }
                 
    else if ((board[x-2][y] == ' ' && board[x-1][y] == ' ' && board[x][y] == sign &&
             board[x+1][y] == sign && board[x+2][y] == ' ')||
            (board[x-3][y] == ' ' && board[x-2][y] == ' ' && board[x-1][y] == sign &&
             board[x][y] == sign && board[x+1][y] == ' '))
            {
                score = 120; // (12) ++OO++
            }
                 
    else if ((board[x-2][y] == ' ' && board[x-1][y] == ' ' && board[x][y] == sign &&
             board[x+1][y] == ' ' && board[x+2][y] == sign && board[x+3][y] ==' ')||
            (board[x-4][y] == ' ' && board[x-3][y] == ' ' && board[x-2][y] == sign &&
             board[x-1][y] == ' ' && board[x][y] == sign && board[x+1][y] ==' '))
            {
                score = 120; // (13) ++O+O+
            }
                 
    else if ((board[x-1][y] == ' ' && board[x][y] == sign && board[x+1][y] == ' ' &&
             board[x+2][y] == sign && board[x+3][y] == ' ' && board[x+4][y] == ' ' )||
            (board[x-3][y] == ' ' && board[x-2][y] == sign && board[x-1][y] == ' ' &&
             board[x][y] == sign && board[x+1][y] == ' ' && board[x+2][y] == ' ' ))
            {
                score = 120; // (14) +O+O++
            }
                 
    else if (board[x-3][y] == ' ' && board[x-2][y] == ' ' && board[x-1][y] == ' ' &&
             board[x][y] == sign && board[x+1][y] == ' ' && board[x+2][y] == ' ' )
            {
                score = 20; // (15) +++O++
            }
                 
    else if (board[x-2][y] == ' ' && board[x-1][y] == ' ' && board[x][y] == sign &&
             board[x+1][y] == ' ' && board[x+2][y] == ' ' && board[x+3][y] == ' ')
            {
                score = 20; // (16) ++O+++
            }
    
            board[x][y] =' ' ;
    
            return score;
                 
}

int Computer::topdownDiagonalScore(int x, int y, char sign, char board[15][15]){
    
    int score = 0;
    board[x][y] = sign;
    
    if ((board[x][y]==sign && board[x+1][y+1]==sign && board[x+2][y+2]==sign &&
         board[x+3][y+3]==sign && board[x+4][y+4]==sign)||
        (board[x-1][y-1]==sign && board[x][y]==sign && board[x+1][y+1]==sign &&
         board[x+2][y+2]==sign && board[x+3][y+3]==sign)||
        (board[x-2][y-2]==sign && board[x-1][y-1]==sign && board[x][y]==sign &&
         board[x+1][y+1]==sign && board[x+2][y+2]==sign)||
        (board[x-3][y-3]==sign && board[x-2][y-2]==sign && board[x-1][y-1]==sign &&
         board[x][y]==sign && board[x+1][y+1]==sign)||
        (board[x-4][y-4]==sign && board[x-3][y-3]==sign && board[x-2][y-2]==sign &&
         board[x-1][y-1]==sign && board[x][y]==sign)) {
            score = 50000; // (1) OOOOO
            cout << "topdown maximum called" << endl;
    }else if ((board[x-1][y-1]==' ' && board[x][y]==sign && board[x+1][y+1]==sign &&
         board[x+2][y+2]==sign && board[x+3][y+3]==sign && board[x+4][y+4]==' ')||
        (board[x-2][y-2]==' ' && board[x-1][y-1]==sign && board[x][y]==sign &&
         board[x+1][y+1]==sign && board[x+2][y+2]==sign && board[x+3][y+3]==' ')||
        (board[x-3][y-3]==' ' && board[x-2][y-2]==sign && board[x-1][y-1]==sign &&
         board[x][y]==sign && board[x+1][y+1]==sign && board[x+2][y+2]==' ')||
        (board[x-4][y-4]==' ' && board[x-3][y-3]==sign && board[x-2][y-2]==sign &&
         board[x-1][y-1]==sign && board[x][y]==sign && board[x+1][y+1]==' ')) {
            if (sign=='O') {
                score = 7000;
            }else{
                score = 4320;
            }
            // (2) +OOOO+
    }else if ((board[x-1][y-1]==' ' && board[x][y]==sign && board[x+1][y+1]==sign &&
         board[x+2][y+2]==sign && board[x+3][y+3]==' ' && board[x+4][y+4]==' ')||
        (board[x-2][y-2]==' ' && board[x-1][y-1]==sign && board[x][y]==sign &&
         board[x+1][y+1]==sign && board[x+2][y+2]==' ' && board[x+3][y+3]==' ')||
        (board[x-3][y-3]==' ' && board[x-2][y-2]==sign && board[x-1][y-1]==sign &&
         board[x][y]==sign && board[x+1][y+1]==' ' && board[x+2][y+2]==' ')) {
            score = 720; // (3) +OOO++
    }else if ((board[x-2][y-2]==' ' && board[x-1][y-1] && board[x][y]==sign &&
         board[x+1][y+1]==sign && board[x+2][y+2]==sign && board[x+3][y+3]==' ')||
        (board[x-3][y-3]==' ' && board[x-2][y-2] && board[x-1][y-1]==sign &&
         board[x][y]==sign && board[x+1][y+1]==sign && board[x+2][y+2]==' ')||
        (board[x-4][y-4]==' ' && board[x-3][y-3] && board[x-2][y-2]==sign &&
         board[x-1][y-1]==sign && board[x][y]==sign && board[x+1][y+1]==' ')) {
            score = 720; // (4) ++OOO+
    }else if ((board[x-1][y-1]==' ' && board[x][y]==sign && board[x+1][y+1]==sign &&
         board[x+2][y+2]==' ' && board[x+3][y+3]==sign && board[x+4][y+4]==' ')||
        (board[x-2][y-2]==' ' && board[x-1][y-1]==sign && board[x][y]==sign &&
         board[x+1][y+1]==' ' && board[x+2][y+2]==sign && board[x+3][y+3]==' ')||
        (board[x-4][y-4]==' ' && board[x-3][y-3]==sign && board[x-2][y-2]==sign &&
         board[x-1][y-1]==' ' && board[x][y]==sign && board[x+1][y+1]==' ')) {
            score = 720; // (5) +OO+O+
    }else if ((board[x-1][y-1]==' ' && board[x][y]==sign && board[x+1][y+1]==' ' &&
               board[x+2][y+2]==sign && board[x+3][y+3]==sign && board[x+4][y+4]==' ')||
              (board[x-3][y-3]==' ' && board[x-2][y-2]==sign && board[x-1][y-1]==' ' &&
               board[x][y]==sign && board[x+1][y+1]==sign && board[x+2][y+2]==' ')||
              (board[x-4][y-4]==' ' && board[x-3][y-3]==sign && board[x-2][y-2]==' ' &&
               board[x-1][y-1]==sign && board[x][y]==sign && board[x+1][y+1]==' ')){
            score = 720; // (6) +O+OO+
    }else if ((board[x][y]==sign && board[x+1][y+1]==sign && board[x+2][y+2]==sign &&
               board[x+3][y+3]==sign && board[x+4][y+4]==' ')||
              (board[x-1][y-1]==sign && board[x][y]==sign && board[x+1][y+1]==sign &&
               board[x+2][y+2]==sign && board[x+3][y+3]==' ')||
              (board[x-2][y-2]==sign && board[x-1][y-1]==sign && board[x][y]==sign &&
               board[x+1][y+1]==sign && board[x+2][y+2]==' ')||
              (board[x-3][y-3]==sign && board[x-2][y-2]==sign && board[x-1][y-1]==sign &&
               board[x][y]==sign && board[x+1][y+1]==' ')){
            score = 720; // (7) OOOO+
    }else if ((board[x-1][y-1]==' ' && board[x][y]==sign && board[x+1][y+1]==sign &&
               board[x+2][y+2]==sign && board[x+3][y+3]==sign)||
              (board[x-2][y-2]==' ' && board[x-1][y-1]==sign && board[x][y]==sign &&
               board[x+1][y+1]==sign && board[x+2][y+2]==sign)||
              (board[x-3][y-3]==' ' && board[x-2][y-2]==sign && board[x-1][y-1]==sign &&
               board[x][y]==sign && board[x+1][y+1]==sign)||
              (board[x-4][y-4]==' ' && board[x-3][y-3]==sign && board[x-2][y-2]==sign &&
               board[x-1][y-1]==sign && board[x][y]==sign)){
            score = 720; // (8) +OOOO
    }else if ((board[x][y]==sign && board[x+1][y+1]==sign && board[x+2][y+2]==' ' &&
               board[x+3][y+3]==sign && board[x+4][y+4]==sign)||
              (board[x-1][y-1]==sign && board[x][y]==sign && board[x+1][y+1]==' ' &&
               board[x+2][y+2]==sign && board[x+3][y+3]==sign)||
              (board[x-3][y-3]==sign && board[x-2][y-2]==sign && board[x-1][y-1]==' ' &&
               board[x][y]==sign && board[x+1][y+1]==sign)||
              (board[x-4][y-4]==sign && board[x-3][y-3]==sign && board[x-2][y-2]==' ' &&
               board[x-1][y-1]==sign && board[x][y]==sign)){
            score = 720; // (9) OO+OO
    }else if ((board[x][y]==sign && board[x+1][y+1]==' ' && board[x+2][y+2]==sign &&
               board[x+3][y+3]==sign && board[x+4][y+4]==sign)||
              (board[x-2][y-2]==sign && board[x-1][y-1]==' ' && board[x][y]==sign &&
               board[x+1][y+1]==sign && board[x+2][y+2]==sign)||
              (board[x-3][y-3]==sign && board[x-2][y-2]==' ' && board[x-1][y-1]==sign &&
               board[x][y]==sign && board[x+1][y+1]==sign)||
              (board[x-4][y-4]==sign && board[x-3][y-3]==' ' && board[x-2][y-2]==sign &&
               board[x-1][y-1]==sign && board[x][y]==sign)){
            score = 720; // (10) O+OOO
    }else if ((board[x][y]==sign && board[x+1][y+1]==sign && board[x+2][y+2]==sign &&
               board[x+3][y+3]==' ' && board[x+4][y+4]==sign)||
              (board[x-1][y-1]==sign && board[x][y]==sign && board[x+1][y+1]==sign &&
               board[x+2][y+2]==' ' && board[x+3][y+3]==sign)||
              (board[x-2][y-2]==sign && board[x-1][y-1]==sign && board[x][y]==sign &&
               board[x+1][y+1]==' ' && board[x+2][y+2]==sign)||
              (board[x-4][y-4]==sign && board[x-3][y-3]==sign && board[x-2][y-2]==sign &&
               board[x-1][y-1]==' ' && board[x][y]==sign)){
            score = 720; // (11) OOO+O
    }else if ((board[x-2][y-2]==' ' && board[x-1][y-1]==' ' && board[x][y]==sign &&
               board[x+1][y+1]==sign && board[x+2][y+2]==' ' && board[x+3][y+3]==' ')||
              (board[x-3][y-3]==' ' && board[x-2][y-2]==' ' && board[x-1][y-1]==sign &&
               board[x][y]==sign && board[x+1][y+1]==' ' && board[x+2][y+2]==' ')){
            score = 120; // (12) ++OO++
    }else if ((board[x-2][y-2]==' ' && board[x-1][y-1]==' ' && board[x][y]==sign &&
               board[x+1][y+1]==' ' && board[x+2][y+2]==sign && board[x+3][y+3]==' ')||
              (board[x-4][y-4]==' ' && board[x-3][y-3]==' ' && board[x-2][y-2]==sign &&
               board[x-1][y-1]==' ' && board[x][y]==sign && board[x+1][y+1]==' ')){
            score = 120; // (13) ++O+O+
    }else if ((board[x-1][y-1]==' ' && board[x][y]==sign && board[x+1][y+1]==' ' &&
               board[x+2][y+2]==sign && board[x+3][y+3]==' ' && board[x+4][y+4]==' ')||
              (board[x-3][y-3]==' ' && board[x-2][y-2]==sign && board[x-1][y-1]==' ' &&
               board[x][y]==sign && board[x+1][y+1]==' ' && board[x+2][y+2]==' ')){
            score = 120; // (14) +O+O++
    }else if (board[x-3][y-3]==' ' && board[x-2][y-2]==' ' && board[x-1][y-1]==' ' &&
              board[x][y]==sign && board[x+1][y+1]==' ' && board[x+2][y+2]==' '){
            score = 20; // (15) +++O++
    }else if (board[x-2][y-2]==' ' && board[x-1][y-1]==' ' && board[x][y]==sign &&
              board[x+1][y+1]==' ' && board[x+2][y+2]==' ' && board[x+3][y+3]==' '){
            score = 20; // (16) ++O+++
    }
    
    board[x][y] = ' ';
    
    return score;
}


int Computer::downtopDiagonalScore(int x, int y, char sign, char board[15][15]){
    
    int score = 0;
    
    board[x][y] = sign;
    
    // (1) OOOOO
    if ((board[x][y]==sign && board[x+1][y-1]==sign && board[x+2][y-2]==sign &&
         board[x+3][y-3]==sign && board[x+4][y-4]==sign)||
        (board[x-1][y+1]==sign && board[x][y]==sign && board[x+1][y-1]==sign &&
         board[x+2][y-2]==sign && board[x+3][y-3]==sign)||
        (board[x-2][y+2]==sign && board[x-1][y+1]==sign && board[x][y]==sign &&
         board[x+1][y-1]==sign && board[x+2][y-2]==sign)||
        (board[x-3][y+3]==sign && board[x-2][y+2]==sign && board[x-1][y+1]==sign &&
         board[x][y]==sign && board[x+1][y-1]==sign)||
        (board[x-4][y+4]==sign && board[x-3][y+3]==sign && board[x-2][y+2]==sign &&
         board[x-1][y+1]==sign && board[x][y]==sign)) {
            score = 50000;
            cout << "downtop maximum called" << endl;
    }
    
    // (2) +OOOO+
    else if ((board[x-1][y+1]==' ' && board[x][y]==sign && board[x+1][y-1]==sign &&
              board[x+2][y-2]==sign && board[x+3][y-3]==sign && board[x+4][y-4]==' ')||
             (board[x-2][y+2]==' ' && board[x-1][y+1]==sign && board[x][y]==sign &&
              board[x+1][y-1]==sign && board[x+2][y-2]==sign && board[x+3][y-3]==' ')||
             (board[x-3][y+3]==' ' && board[x-2][y+2]==sign && board[x-1][y+1]==sign &&
              board[x][y]==sign && board[x+1][y-1]==sign && board[x+2][y-2]==' ')||
             (board[x-4][y+4]==' ' && board[x-3][y+3]==sign && board[x-2][y+2]==sign &&
              board[x-1][y+1]==sign && board[x][y]==sign && board[x+1][y-1]==' ')){
                 if (sign=='O') {
                     score = 7000;
                 }else{
                     score = 4320;
                 }
                 // (2) +OOOO+
    }
    
    // (3) +OOO++
    else if ((board[x-1][y+1]==' ' && board[x][y]==sign && board[x+1][y-1]==sign &&
              board[x+2][y-2]==sign && board[x+3][y-3]==' ' && board[x+4][y-4]==' ')||
             (board[x-2][y+2]==' ' && board[x-1][y+1]==sign && board[x][y]==sign &&
              board[x+1][y-1]==sign && board[x+2][y-2]==' ' && board[x+3][y-3]==' ')||
             (board[x-3][y+3]==' ' && board[x-2][y+2]==sign && board[x-1][y+1]==sign &&
              board[x][y]==sign && board[x+1][y-1]==' ' && board[x+2][y-2]==' ')){
        score = 720;
    }
    
    // (4) ++OOO+
    else if ((board[x-2][y+2]==' ' && board[x-1][y+1]==' ' && board[x][y]==sign &&
              board[x+1][y-1]==sign && board[x+2][y-2]==sign && board[x+3][y-3]==' ')||
             (board[x-3][y+3]==' ' && board[x-2][y+2]==' ' && board[x-1][y+1]==sign &&
              board[x][y]==sign && board[x+1][y-1]==sign && board[x+2][y-2]==' ')||
             (board[x-4][y+4]==' ' && board[x-3][y+3]==' ' && board[x-2][y+2]==sign &&
              board[x-1][y+1]==sign && board[x][y]==sign && board[x+1][y-1]==' ')){
        score = 720;
    }
    
    // (5) +OO+O+
    else if ((board[x-1][y+1]==' ' && board[x][y]==sign && board[x+1][y-1]==sign &&
              board[x+2][y-2]==' ' && board[x+3][y-3]==sign && board[x+4][y-4]==' ')||
             (board[x-2][y+2]==' ' && board[x-1][y+1]==sign && board[x][y]==sign &&
              board[x+1][y-1]==' ' && board[x+2][y-2]==sign && board[x+3][y-3]==' ')||
             (board[x-4][y+4]==' ' && board[x-3][y+3]==sign && board[x-2][y+2]==sign &&
              board[x-1][y+1]==' ' && board[x][y]==sign && board[x+1][y-1]==' ')){
        score = 720;
    }
    
    // (6) +O+OO+
    else if ((board[x-1][y+1]==' ' && board[x][y]==sign && board[x+1][y-1]==' ' &&
              board[x+2][y-2]==sign && board[x+3][y-3]==sign && board[x+4][y-4]==' ')||
             (board[x-3][y+3]==' ' && board[x-2][y+2]==sign && board[x-1][y+1]==' ' &&
              board[x][y]==sign && board[x+1][y-1]==sign && board[x+2][y-2]==' ')||
             (board[x-4][y+4]==' ' && board[x-3][y+3]==sign && board[x-2][y+2]==' ' &&
              board[x-1][y+1]==sign && board[x][y]==sign && board[x+1][y-1]==' ')){
        score = 720;
    }
    
    // (7) OOOO+
    else if ((board[x][y]==sign && board[x+1][y-1]==sign && board[x+2][y-2]==sign &&
              board[x+3][y-3]==sign && board[x+4][y-4]==' ')||
             (board[x-1][y+1]==sign && board[x][y]==sign && board[x+1][y-1]==sign &&
              board[x+2][y-2]==sign && board[x+3][y-3]==' ')||
             (board[x-2][y+2]==sign && board[x-1][y+1]==sign && board[x][y]==sign &&
              board[x+1][y-1]==sign && board[x+2][y-2]==' ')||
             (board[x-3][y+3]==sign && board[x-2][y+2]==sign && board[x-1][y+1]==sign &&
              board[x][y]==sign && board[x+1][y-1]==' ')){
        score = 720;
    }
    
    // (8) +OOOO
    else if ((board[x-1][y+1]==' ' && board[x][y]==sign && board[x+1][y-1]==sign &&
              board[x+2][y-2]==sign && board[x+3][y-3]==sign)||
             (board[x-2][y+2]==' ' && board[x-1][y+1]==sign && board[x][y]==sign &&
              board[x+1][y-1]==sign && board[x+2][y-2]==sign)||
             (board[x-3][y+3]==' ' && board[x-2][y+2]==sign && board[x-1][y+1]==sign &&
              board[x][y]==sign && board[x+1][y-1]==sign)||
             (board[x-4][y+4]==' ' && board[x-3][y+3]==sign && board[x-2][y+2]==sign &&
              board[x-1][y+1]==sign && board[x][y]==sign)){
        score = 720;
    }
    
    // (9) OO+OO
    else if ((board[x][y]==sign && board[x+1][y-1]==sign && board[x+2][y-2]==' ' &&
              board[x+3][y-3]==sign && board[x+4][y-4]==sign)||
             (board[x-1][y+1]==sign && board[x][y]==sign && board[x+1][y-1]==' ' &&
              board[x+2][y-2]==sign && board[x+3][y-3]==sign)||
             (board[x-3][y+3]==sign && board[x-2][y+2]==sign && board[x-1][y+1]==' ' &&
              board[x][y]==sign && board[x+1][y-1]==sign)||
             (board[x-4][y+4]==sign && board[x-3][y+3]==sign && board[x-2][y+2]==' ' &&
              board[x-1][y+1]==sign && board[x][y]==sign)){
        score =720;
    }
    
    // (10) O+OOO
    else if ((board[x][y]==sign && board[x+1][y-1]==' ' && board[x+2][y-2]==sign &&
              board[x+3][y-3]==sign && board[x+4][y-4]==sign)||
             (board[x-2][y+2]==sign && board[x-1][y+1]==' ' && board[x][y]==sign &&
              board[x+1][y-1]==sign && board[x+2][y-2]==sign)||
             (board[x-3][y+3]==sign && board[x-2][y+2]==' ' && board[x-1][y+1]==sign &&
              board[x][y]==sign && board[x+1][y-1]==sign)||
             (board[x-4][y+4]==sign && board[x-3][y+3]==' ' && board[x-2][y+2]==sign &&
              board[x-1][y+1]==sign && board[x][y]==sign)){
        score = 720;
    }
    
    // (11) OOO+O
    else if ((board[x][y]==sign && board[x+1][y-1]==sign && board[x+2][y-2]==sign &&
              board[x+3][y-3]==' ' && board[x+4][y-4]==sign)||
             (board[x-1][y+1]==sign && board[x][y]==sign && board[x+1][y-1]==sign &&
              board[x+2][y-2]==' ' && board[x+3][y-3]==sign)||
             (board[x-2][y+2]==sign && board[x-1][y+1]==sign && board[x][y]==sign &&
              board[x+1][y-1]==' ' && board[x+2][y-2]==sign)||
             (board[x-4][y+4]==sign && board[x-3][y+3]==sign && board[x-2][y+2]==sign &&
              board[x-1][y+1]==' ' && board[x][y]==sign)){
        score = 720;
    }
    
    // (12) ++OO++
    else if ((board[x-2][y+2]==' ' && board[x-1][y+1]==' ' && board[x][y]==sign &&
              board[x+1][y-1]==sign && board[x+2][y-2]==' ' && board[x+3][y-3]==' ')||
             (board[x-3][y+3]==' ' && board[x-2][y+2]==' ' && board[x-1][y+1]==sign &&
              board[x][y]==sign && board[x+1][y-1]==' ' && board[x+2][y-2]==' ')){
        score = 120;
    }
    
    // (13) ++O+O+
    else if ((board[x-2][y+2]==' ' && board[x-1][y+1]==' ' && board[x][y]==sign &&
              board[x+1][y-1]==' ' && board[x+2][y-2]==sign && board[x+3][y-3]==' ')||
             (board[x-4][y+4]==' ' && board[x-3][y+3]==' ' && board[x-2][y+2]==sign &&
              board[x-1][y+1]==' ' && board[x][y]==sign && board[x+1][y-1]==' ')){
        score = 120;
    }
    
    // (14) +O+O++
    else if ((board[x-1][y+1]==' ' && board[x][y]==sign && board[x+1][y-1]==' ' &&
              board[x+2][y-2]==sign && board[x+3][y-3]==' ' && board[x+4][y-4]==' ')||
             (board[x-3][y+3]==' ' && board[x-2][y+2]==sign && board[x-1][y+1]==' ' &&
              board[x][y]==sign && board[x+1][y-1]==' ' && board[x+2][y-2]==' ')){
        score = 120;
    }
    
    // (15) +++O++
    else if (board[x-3][y+3]==' ' && board[x-2][y+2]==' ' && board[x-1][y+1]==' ' &&
             board[x][y]==sign && board[x+1][y-1]==' ' && board[x+2][y-2]==' '){
        score = 20;
    }
    
    // (16) ++O+++
    else if (board[x-2][y+2]==' ' && board[x-1][y+1]==' ' && board[x][y]==sign &&
             board[x+1][y-1]==' ' && board[x+2][y-2]==' ' && board[x+3][y-3]==' '){
        score = 20;
    }
    
    board[x][y] = ' ';
    
    return score;
}

int checkNeighbor(int i, int j, char board[15][15]){
    if ((board[i-1][j-1]=='X' || board[i-1][j]=='X' || board[i-1][j+1]=='X' ||
         board[i][j-1]=='X' || board[i][j+1]=='X' || board[i+1][j-1]=='X' ||
         board[i+1][j]=='X' || board[i+1][j+1]=='X')||
        (board[i-1][j-1]=='O' || board[i-1][j]=='O' || board[i-1][j+1]=='O' ||
         board[i][j-1]=='O' || board[i][j+1]=='O' || board[i+1][j-1]=='O' ||
         board[i+1][j]=='O' || board[i+1][j+1]=='O')) {
            return 1;
        }else{
            return 0;
        }
}

int Computer::finalSet(char board[15][15]){
    int x = 0;
    int y = 0;
    int x2 = 0;
    int y2 = 0;
    int max = 0;
    int max2 = 0;
    for (int i=0; i<15; i++) {
        for (int j=0; j<15; j++) {
            if (board[i][j]==' ') {
                if (checkNeighbor(i, j, board)&&
                    (horizontalScore(i, j, 'O', board)+
                     topdownDiagonalScore(i, j, 'O', board)+
                     verticalScore(i, j, 'O', board)+
                     downtopDiagonalScore(i, j, 'O', board))>=max) {
                        max = horizontalScore(i, j, 'O', board)+
                        topdownDiagonalScore(i, j, 'O', board)+
                        verticalScore(i, j, 'O', board)+
                        downtopDiagonalScore(i, j, 'O', board);
                    x=i;
                    y=j;
                    cout << "max: ";
                    cout << x << ' ';
                    cout << y << ' ';
                    cout << max << endl;
                }
            }
        }
    }
    
    for (int i=0; i<15; i++) {
        for (int j=0; j<15; j++) {
            if (board[i][j]==' ') {
                if (checkNeighbor(i, j, board)&&
                    (horizontalScore(i, j, 'X', board)+
                     topdownDiagonalScore(i, j, 'X', board)+
                     verticalScore(i, j, 'X', board)+
                     downtopDiagonalScore(i, j, 'X', board))>=max2) {
                    max2 = horizontalScore(i, j, 'X', board)+
                        topdownDiagonalScore(i, j, 'X', board)+
                        verticalScore(i, j, 'X', board)+
                        downtopDiagonalScore(i, j, 'X', board);
                    x2=i;
                    y2=j;
                    cout << "max2: ";
                    cout << x2 << ' ';
                    cout << y2 << ' ';
                    cout << max2 << endl;
                }
            }
        }
    }
    cout << "maxscore: " << max << endl;
    cout << "maxscore2: " << max2 << endl;
    if (max>=max2) { // tricky part
        board[x][y]='O';
        return max;
    }else{
        board[x2][y2]='O';
        return max2;
    }
}

