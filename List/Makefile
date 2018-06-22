CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pendantic-errors
CXXFLAGS += -g
#CXXFLAGS += -03
LDFLAGS = -lboost_date_time

OBJS = Item.o List.o menu.o mainList.o

SRCS = Item.cpp List.cpp menu.cpp mainList.cpp

HEADERS = Item.hpp List.hpp 

shop: Item.o List.o menu.o mainList.o
	g++ Item.o List.o menu.o mainList.o -o shop

Item.o: Item.cpp Item.hpp
	g++ -c Item.cpp

List.o: List.cpp List.hpp
	g++ -c List.cpp

menu.o: menu.cpp
	g++ -c menu.cpp

mainList.o: mainList.cpp
	g++ -c mainList.cpp

clean:
	rm *.o shop
