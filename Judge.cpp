//
//  Judge.cpp
//  AIGobang
//
//  Created by Meidi on 18/4/25.
//  @author Di Mei
//

#include "Judge.h"

int Judge::judge(char board[15][15]){
    int result = 0;
    
    // horizontal check
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 10; j++) {
            if (board[i][j] != ' ') {
                if (board[i][j]==board[i][j+1] &&
                    board[i][j+1]==board[i][j+2] &&
                    board[i][j+2]==board[i][j+3] &&
                    board[i][j+3]==board[i][j+4]) {
                    result = 1;
                }
            }
        }
    }
    
    // vertical check
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 10; j++) {
            if (board[j][i] != ' '){
                if (board[j][i]==board[j+1][i] &&
                    board[j+1][i]==board[j+2][i] &&
                    board[j+2][i]==board[j+3][i] &&
                    board[j+3][i]==board[j+4][i]) {
                    result = 1;
                }
            }
        }
    }
    
    // upper-half top-down diagonal
    for (int j = 0; j<11; j++) {
        int k = j;
        for (int i = 0; i <= 10-j; i++, k++) {
            if (board[i][k] != ' '){
                if (board[i][k]==board[i+1][k+1] &&
                    board[i+1][k+1]==board[i+2][k+2] &&
                    board[i+2][k+2]==board[i+3][k+3] &&
                    board[i+3][k+3]==board[i+4][k+4]) {
                    result = 1;
                }
            }
        }
    }
    
    // lower-half top-down diagonal
    for (int i = 1; i <= 10; i++) {
        int k = i;
        for (int j = 0; k <= 10; k++, j++) {
            if (board[k][j] != ' '){
                if (board[k][j]==board[k+1][j+1] &&
                    board[k+1][j+1]==board[k+2][j+2] &&
                    board[k+2][j+2]==board[k+3][j+3] &&
                    board[k+3][j+3]==board[k+4][j+4]) {
                    result = 1;
                }
            }
        }
    }
    
    // upper-half down-top diagonal
    for (int j = 14; j >= 5; j--) {
        int k = j;
        for (int i = 0; k >= 5; k--, i++) {
            if (board[i][k]!=' ') {
                if (board[i][k]==board[i+1][k-1] &&
                    board[i+1][k-1]==board[i+2][k-2] &&
                    board[i+2][k-2]==board[i+3][k-3] &&
                    board[i+3][k-3]==board[i+4][k-4]) {
                    result = 1;
                }
            }
        }
    }
    
    // lower-half down-top diagonal
    for (int i = 1; i <= 10; i++) {
        int k = i;
        for (int j = 14; k <= 10; k++, j--) {
            if (board[k][j]!=' ') {
                if (board[k][j]==board[k+1][j-1] &&
                    board[k+1][j-1]==board[k+2][j-2] &&
                    board[k+2][j-2]==board[k+3][j-3] &&
                    board[k+3][j-3]==board[k+4][j-4]) {
                    result = 1;
                }
                
            }
        }
    }
    
    return result;
}

