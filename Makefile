Gomoku: ChessBoard.o Judge.o main.o Player.o Computer.o ChessBoard.o
	g++ -o Gomoku main.o Player.o Computer.o Judge.o ChessBoard.o -I.

main.o: main.cpp ChessBoard.h Judge.h Player.h Computer.h
	g++ -c main.cpp Chessboard.h Judge.h Player.h Computer.h -I.

ChessBoard.o: ChessBoard.cpp ChessBoard.h
	g++ -c ChessBoard.cpp ChessBoard.h -I.

Computer.o: Computer.cpp Computer.h
	g++ -c Computer.cpp Computer.h -I.

Judge.o: Judge.cpp Judge.h
	g++ -c Judge.cpp Judge.h -I.

Player.o: Player.cpp Player.h
	g++ -c Player.h Player.cpp -I.


