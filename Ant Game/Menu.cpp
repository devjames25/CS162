/*******************************
 *Program name: Menu.cpp
 *Author:Devon James
 *Date:4/16/17
 *Description:This is the implementation of the Menu function.
 ********************************/

#include "Ant.hpp"
#include "Board.hpp"
#include <iostream>

/******************************
 * Description:This function passes a 2D array, a pointer to the Ant class, and a Board object to displays a menu with different options and registers user input from 
 * starting the program, changing values, or quiting the program.  
 * **************************/
void menu(char** board, Ant* a, Board b)
{
 int choice;
 int rows = 50;
 int columns = 50;
 int steps = 50;
 int antPos = 25;

 board = new char*[rows];
 for(int i = 0; i < columns; i++)
 {
  board[i] = new char[columns];
 }
  
 do
 {
  std::cout << "Please enter 1 of the menu options.\n";
  std::cout << "1) Start Program.\n";
  std::cout << "2) Enter number of rows. Default is 50.\n";
  std::cout << "3) Enter number of columns. Default is 50.\n";
  std::cout << "4) Enter ant's starting position. Default is (25,25).\n";
  std::cout << "5) Enter number of steps for ant. Default is 50.\n";
  std::cout << "6) Quit program.\n";
  std::cout << "Enter your choice:\n";
  std::cin >> choice;
   
  //Input Validiation 
  while((choice < 1) || (choice > 6))
  {
   std::cout << "Please enter 1 through 6:\n";
   std::cin >> choice;
  }
  
  if(choice != 6)
  {
   switch(choice)
   {
    case 1: b.boardStart(board, rows, columns);
            b.setAnt(antPos, antPos);
            b.antStart(antPos, antPos);
            b.wallCollusion(a, rows, columns);
            b.moveAnt(a, steps, rows, columns);
            b.output(rows, columns);
            break;
    case 2: std::cout << "Enter new value of rows:\n"; 
            std::cin >> rows;
            break;
    case 3: std::cout << "Enter new value of columns:\n";
            std::cin >> columns;
            break;
    case 4: std::cout << "Enter ant's position:\n";
            std::cin >> antPos;
            break;
    case 5: std::cout << "Enter number of steps:\n";
            std::cin >> steps;
            break;
   }
  }
 } while (choice != 6);

 delete [] board;
}


