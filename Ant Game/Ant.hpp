/*******************************
 *Program name: Ant.hpp
 *Author:Devon James
 *Date:4/16/17
 *Description:This is the header file of the Ant class.
 *******************************/

#ifndef ANT_HPP
#define ANT_HPP

//Directon data type
enum Direction {N, S, E, W};

class Ant
{
 private:
  int xCoord;
  int yCoord;
  Direction dr;
  
 public:
  Ant();
  ~Ant();
  void setX(int);
  void setY(int);
  int getX();
  int getY();
  Direction turnRight();
  Direction turnLeft();
  Direction antDirection();
};
#endif
   
