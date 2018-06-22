/*******************************
 *Program name: Ant.cpp
 *Author:Devon James
 *Date:4/16/17
 *Description:This is the implementation of the Ant class.
 *******************************/

#include "Ant.hpp"

//Default constructor 
Ant::Ant()
{
 dr = N;
}

//Decontructor
Ant::~Ant()
{}

//Setter functions
void Ant::setX(int x)
{xCoord = x;}

void Ant::setY(int y)
{yCoord = y;}

//Getter functions
int Ant::getX()
{return xCoord;}

int Ant::getY()
{return yCoord;}

//Turns Right according to the direction ant is facing
Direction Ant::turnRight()
{
 if(dr == N)
 {
  return E;
 }
 else if(dr == E)
 {
  return S;
 }
 else if(dr == S)
 {
  return W;
 } 
 else
 {
  return N;
 }
}

//Turns Left according to the direction ant is facing
Direction Ant::turnLeft()
{
 if(dr == N) 
 {
  return W;
 }
 else if(dr == W)
 {
  return S;
 }
 else if(dr == S)
 {
  return E;
 }
 else
 {
  return N;
 }
}

//Returns the ant's direction its facing
Direction Ant::antDirection()
{return dr;}

 
