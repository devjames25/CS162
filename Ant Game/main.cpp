
#include "Ant.hpp"
#include "Board.hpp"
#include <iostream>

void menu(char**, Ant*, Board);

int main()
{
 Ant ant;
 Board map;
 Ant* antPtr;
 antPtr = &ant;
 char** boardPtr;

 menu(boardPtr, antPtr, map);
 
 return 0;
}
