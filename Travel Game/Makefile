

mine: Space.o Airport.o Nigara.o Mars.o Mammoth.o Lost.o Wind.o DeSoto.o Miner.o mainMin.o 
	g++ Space.o Airport.o Nigara.o Mars.o Mammoth.o Lost.o Wind.o DeSoto.o Miner.o mainMin.o -o mine

Space.o: Space.hpp Space.cpp
	g++ -c Space.cpp

Airport.o: Airport.cpp Airport.hpp
	g++ -c Airport.cpp

Nigara.o: Nigara.cpp Nigara.hpp
	g++ -c Nigara.cpp

Mars.o: Mars.cpp Mars.hpp
	g++ -c Mars.cpp

Mammoth.o: Mammoth.cpp Mammoth.hpp
	g++ -c Mammoth.cpp

Lost.o: Lost.cpp Lost.hpp
	g++ -c Lost.cpp

Wind.o: Wind.cpp Wind.hpp
	g++ -c Wind.cpp

DeSoto.o: DeSoto.cpp DeSoto.hpp
	g++ -c DeSoto.cpp

Miner.o: Miner.cpp Miner.hpp
	g++ -c Miner.cpp

mainMin.o: mainMin.cpp
	g++ -c mainMin.cpp

clean:
	rm *.o mine
