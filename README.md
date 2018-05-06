# Final-project

AI Gomoku C++ Project

Group Members: Di Mei, Crystal Wang, Lindsay Ning

General Structure
This project was purely written in C++ and compiled successfully in Xcode Version 6.4. The project includes following files:
-	main.cpp
-	Chessboard.h & Chessboard.cpp
-	Judge.h & Judge.cpp
-	Player.h & Player.cpp
-	Computer.h & Computer.cpp

Rules of Game
-	The game is in a 15*15 chess board
-	2 players take turns placing one bead (There is black and white and the player that goes first will be using black and the other will be using white) each in any unoccupied block on the board
-	The player that completes 5 same color beads in a row/column/diagonal first wins.
-	Players’ goal is to complete 5 beads in a line while also trying to block the opponent from doing so.

GUI (Graphic User Interface)  
-	It displays a 15*15 board by using command line outputs
-	Computer’s bead: “O”, Player’s bead: “X”
-	Player can choose a place to fill in a bead by inputing x and y coordinates of the position
-	In the beginning of the game, the game asks player whether to start playing the game first
-	In the end of the game, the game asks player whether to play the game again
-	The game also prints out the maxscore and maxscore2 (which will be mentioned in the next part) to help programmers to debug the code

Design of Artificial Player (played by computer)

1.	Payoff Values
      For every bead, the computer is designed to choose the place with the most probability to win in each turn. Such probability is defined by a table of different ratings. For instance, the picture shown below includes 16 different patterns of beads (white circles represent beads and plus notations represent empty places) and their corresponding scores. The settings of scores are based on human players’ experience of playing the Gomoku. 


      With the table of scores, the computer can thus choose the most appropriate place for its bead. For each turn, the computer will analyze all points that are next to the beads already placed on the board; for each point, four directions, which are shown in the picture below the paragraph, should be analyzed by calculating the sum of scores for each direction. For example, in the picture shown below:
Horizontal direction: +++OO++++
Vertical direction: +++OOO+++
\ diagonal direction: ++++O++++
/ diagonal direction: ++AOO++++ (A represents opposite’s bead)

The total score of this point is: 120+720+20+0=860

      After the computer calculate the total scores for each point, it can get the point with the maximum score and place its bead on that place.



2.	Game Theory
When the computer evaluates every possible position, it firstly places “O” (computer’s bead) into the position and uses the method mentioned above to figure out the position with the biggest payoff value (maxscore) for itself. Then, the computer places “X” into every possible position and uses the same method to figure out the position with the biggest payoff value (maxscore2) for the player. If the maxscore is larger or equal to the maxscore2, the computer chooses the the position with the payoff value of maxscore (attack mode); otherwise, the computer chooses the the position with the payoff value of maxscore2 (defend mode). The idea of this operation is based on the game theory.

3.	Future Improvement -- Maxmin Algorithm (Not Done in this Project)
      With the strategy of choosing a point based on its payoff value, the computer can smartly place its bead on the board in each turn. However, this strategy only considers the current turn and once the player master computer’s pattern of playing this game, the computer can be easily defeated. The solution, the maxmin algorithm (game tree), actually enables the computer to analyze multiple steps of choices for each turn. A game tree example is shown below and the recursion will be applied in this part. The computer start calculating the points for each child node of the lowest branch (third layer), and it then calculate the points for each child node for the second layer. Finally, it calculate the scores of different points on the board in the first layer. If we assume the player one as the computer and the other one as the human player. For the first layer and the third layer, the maximum payoff values are expected; however, for the second layer, the minimum payoff value is expected because we don’t want the opposite to have the maximum payoff value. The computer can thus get the best place for the bead based on the total points for each position on the board. Compared with the basic level design, the maxmin algorithm analyzes further steps (at most three) and can obtain smarter decision for each turn.




4.	Future Improvement -- Alpha-beta Pruning (Not Done in this Project)
      Since three steps of maxmin algorithm have already given too much calculation to the computer, any more layer of the game tree is too hard for computer to process. Here, alpha-beta pruning can greatly increase the computer’s efficiency of processing the data and reduce the time complexity. The computer with this algorithm can consequently analyze more steps than the design with only the maxmin algorithm in each turn.

Result
      The AI can easily beat an amateur of gomoku in 30~40 turns. However, since the AI can only make the optimum judgement based on the current step, this AI could be beaten by a player who chose a position by thinking about several steps after the current turn. This disadvantage can be fixed by using the minimax algorithm and alpha-beta pruning.
            

