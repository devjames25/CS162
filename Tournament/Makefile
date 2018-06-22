

game: Creature.o Vampire.o Barbarian.o BlueMen.o Medusa.o HarryPotter.o  arena.o Tournament.o menuGame.o mainGame.o
	g++ Creature.o Vampire.o Barbarian.o BlueMen.o Medusa.o HarryPotter.o  arena.o Tournament.o menuGame.o mainGame.o -o game

Creature.o: Creature.hpp Creature.cpp
	g++ -c Creature.cpp 

Vampire.o: Vampire.hpp Vampire.cpp
	g++ -c Vampire.cpp

Barbarian.o: Barbarian.hpp Barbarian.cpp
	g++ -c Barbarian.cpp

BlueMen.o: BlueMen.hpp BlueMen.cpp
	g++ -c BlueMen.cpp

Medusa.o: Medusa.hpp Medusa.cpp
	g++ -c Medusa.cpp

HarryPotter.o: HarryPotter.hpp HarryPotter.cpp
	g++ -c HarryPotter.cpp

Tournament.o: Tournament.hpp Tournament.cpp
	g++ -c Tournament.cpp

arena.o: arena.cpp
	g++ -c arena.cpp

menuGame.o: menuGame.cpp
	g++ -c menuGame.cpp

mainGame.o: mainGame.cpp
	g++ -c mainGame.cpp

clean:
	rm *.o game
