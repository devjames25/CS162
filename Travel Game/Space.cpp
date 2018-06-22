
#include "Space.hpp"
#include <string>

Space::~Space()
{}

Space* Space::getNorth()
{
 return north;
}

Space* Space::getSouth()
{
 return south;
}

Space* Space::getEast()
{
 return east;
}

Space* Space::getWest()
{
 return west;
}

/*************************************
 * Description:This setter function takes a char value and a Space pointer as its parameter. If the char value equals a certain char value, then the private Space pointers is set to the Space pointer taken in the parameter.
 * **********************************/
void Space::setDirect(char c, Space* loc)
{
 if(c == 'n')
 {
  this->north = loc;
 }
 else if(c == 's')
 {
  this->south = loc;
 }
 else if(c == 'e')
 {
  this->east = loc;
 }
 else if(c == 'w')
 {
  this->west = loc;
 }
}
