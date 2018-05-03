//
//  main.cpp
//  AIGobang
//
//  Created by Meidi on 18/4/25.
//  @authors Di Mei, Crystal Wang, Lindsay Ning
//
//  Player has the sign "X", and computer has the sign "O"

#include <iostream>
#include "Chessboard.h"
#include "Judge.h"
#include "Player.h"
#include "Computer.h"

char virtualBoard[15][15]; // global variable
int play_again();
int playerFirst();

int main() {

    ChessBoard board;
    Judge judge;
    Player player;
    Computer computer;
    
    while (1) {
        // initialize the board
        board.initBoard(virtualBoard);
        
        // Core part of Code
        int turn = 0;
        
        if (!playerFirst()) {
            while (turn<=225) {
                if (turn==0) {
                    virtualBoard[7][7]='O';
                    turn++;
                    cout << "turn: " << turn << endl;
                    board.copyBoard(virtualBoard);
                    board.show();
                }else{
                    computer.finalSet(virtualBoard);
                    // continuously add turns
                    turn++;
                    cout << "turn: " << turn << endl;
                    // copy and print the board
                    board.copyBoard(virtualBoard);
                    board.show();
                    if (judge.judge(virtualBoard)==1) {
                        if (turn%2==1) {
                            cout << "computer wins" << endl;
                        }else{
                            cout << "you win" << endl;
                        }
                        break;
                    }
                }
                
                player.getX();
                player.getY();
                player.setChess(virtualBoard);
                // continuously add turns
                turn++;
                cout << "turn: " << turn << endl;
                // copy and print the board
                board.copyBoard(virtualBoard);
                board.show();
                if (judge.judge(virtualBoard)==1) {
                    if (turn%2==1) {
                        cout << "computer wins" << endl;
                    }else{
                        cout << "you win" << endl;
                    }
                    break;
                }
            }
        }else{
            while (turn<=225) {
                player.getX();
                player.getY();
                player.setChess(virtualBoard);
                // continuously add turns
                turn++;
                cout << "turn: " << turn << endl;
                // copy and print the board
                board.copyBoard(virtualBoard);
                board.show();
                if (judge.judge(virtualBoard)==1) {
                    if (turn%2==0) {
                        cout << "computer wins" << endl;
                    }else{
                        cout << "you win" << endl;
                    }
                    break;
                }
                
                computer.finalSet(virtualBoard);
                // continuously add turns
                turn++;
                cout << "turn: " << turn << endl;
                // copy and print the board
                board.copyBoard(virtualBoard);
                board.show();
                if (judge.judge(virtualBoard)==1) {
                    if (turn%2==0) {
                        cout << "computer wins" << endl;
                    }else{
                        cout << "you win" << endl;
                    }
                    break;
                }
            }
        }
        if (!play_again()) {
            break;
        }
    }

}

int play_again(){
    char answer;
    cout << "Do you want to play again? (y/n)" << endl;
    cin >> answer;
    if (answer == 'y') {
        return 1;
    }else{ return 0;}
}

int playerFirst(){
    char result;
    cout << "Do you want to go first? (y/n)" << endl;
    cin >> result;
    if (result=='y') {
        return 1;
    }else{
        return 0;
    }
}

