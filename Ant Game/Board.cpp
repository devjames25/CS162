/*******************************
 *Program name: Board.cpp
 *Author:Devon James
 *Date:4/16/17
 *Description:This is the implementation of the Board class.
 *******************************/

#include "Ant.hpp"
#include "Board.hpp"
#include <iostream>

/***************************
 * Description:This function passes two integers and a 2D array to intialize the board.
 * ************************/
void Board::boardStart(char** board, int rows, int columns)
{
 boardPtr = board;
 for(int i = 0; i < rows; i++)
 {
  for(int j = 0; j < columns; j++)
  {
   boardPtr[i][j] = '-';
   color = WHITE;
  }
 }
}
//Sets the location of ant on the board
void Board::setAnt(int antX, int antY)
{
 boardPtr[antX][antY] = '@';
}

//Returns the value of ant on the board
char Board::antStart(int antX, int antY)
{
 return boardPtr[antX][antY];
}

//Returns the color of the board
Bcolor Board::getColor()
{
 return color;
}

/*******************************
 * Description:This function passes two integers to switch the value of the elements on the board.
 * ****************************/
void Board::switchColor(int x, int y)
{
 if(boardPtr[x][y] == '-')
 {
  boardPtr[x][y] = '#';
  color = BLACK;
 }
 else if(boardPtr[x][y] == '#')
 {
  boardPtr[x][y] = '-';
  color = WHITE;
 }
}

/******************************
 * Description: This function passes a pointer to an Ant object and two integersmake sure that the Ant would wrap around the board if it goes off the edge.
 * ****************************/
void Board::wallCollusion(Ant* ant, int row, int columns)
{
 if(ant->getX() < 0)
 {
  ant->setX(row - 1);
 }
 if(ant->getY() < 0)
 {
  ant->setY(columns - 1);
 }
 if(ant->getX() > (row - 1))
 {
  ant->setX(0);
 }
 if(ant->getY() > (columns - 1))
 {
  ant->setY(0);
 }
}

/*****************************************
 * Description: This function passes a pointer to an Ant object and 3 integers to move the Ant within the 2D array based on the direction it is facing and the color the board is.
 * ****************************************/
void Board::moveAnt(Ant* ant, int steps, int row, int columns)
{
 int count = 0;

 
 while(count < steps) 
 {
  for(int i = 0; i < row; i++)
  {
   for(int j = 0; j < columns; j++)
   {
    if(antStart(i,j) == '@')
    {
     if(ant->antDirection() == N)
      {
       if(getColor() == WHITE)
       {
        boardPtr[i+1][j] = '@';
        ant->turnRight(); 
        switchColor(i, j);
       }
       else if(getColor() == BLACK)
       {
        boardPtr[i-1][j] = '@';
        ant->turnLeft();
        switchColor(i, j);
       }
      }
     else if(ant->antDirection() == E)
     {
      if(getColor() == WHITE)
      {
       boardPtr[i][j-1] = '@';
       ant->turnRight();
       switchColor(i, j);
      }
      else if(getColor() == BLACK)
      {
       boardPtr[i][j+1] = '@';
       ant->turnLeft();
       switchColor(i, j);
      }
     }
     else if(ant->antDirection() == S)
     {
      if(getColor() == WHITE)
      {
       boardPtr[i-1][j] = '@';
       ant->turnRight();
       switchColor(i, j);
      }
      else if(getColor() == BLACK)
      {
       boardPtr[i+1][j] = '@';
       ant->turnLeft();
       switchColor(i, j);
      }
     }
     else
     {
      if(getColor() == WHITE)
      {
       boardPtr[i][j+1] = '@';
       ant->turnRight();
       switchColor(i, j);
      }
      else if(getColor() == BLACK)
      {
       boardPtr[i][j-1] = '@';
       ant->turnLeft();
       switchColor(i, j);
      }
     }
    } 
   }   
  } 
 count++;
 } 
}

/**********************
 * Description:This function passes 2 integers as parameters to output the 2D array.
 * *******************/
void Board::output(int rows, int columns)
{
 for(int i = 0; i < rows; i++)
 {
  for(int j = 0; j < columns; j++)
  {
   std::cout << boardPtr[i][j];
  }
  std::cout << std::endl;
 }
 std::cout << "Current color: " << color << std::endl;
} 
     
