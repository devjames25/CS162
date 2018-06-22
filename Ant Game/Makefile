
gameAnt: Ant.o Board.o Menu.o main.o
	g++ Ant.o Board.o Menu.o main.o -o gameAnt

Ant.o: Ant.cpp Ant.hpp
	g++ -c Ant.cpp

Board.o: Board.cpp Board.hpp
	g++ -c Board.cpp

Menu.o: Menu.cpp
	g++ -c Menu.cpp

main.o: main.cpp
	g++ -c main.cpp

clean: 
	rm *.o gameAnt

