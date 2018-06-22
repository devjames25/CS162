/****************************************
 * Program Name: Board.hpp
 * Author:Devon James
 * Date: 4/16/17
 * Description:This is the header file containing the Board class.
 * *************************************/

#ifndef BOARD_HPP
#define BOARD_HPP
#include "Ant.hpp"

//Color of board
enum Bcolor {WHITE, BLACK};

class Board
{
 private:
  char** boardPtr;
  Bcolor color;
  
 public:
  void boardStart(char**, int, int);
  void setAnt(int, int);
  char antStart(int, int);
  Bcolor getColor();
  void switchColor(int, int);
  void wallCollusion(Ant*, int, int);
  void moveAnt(Ant*, int, int, int);
  void output(int, int);
};

#endif
  
