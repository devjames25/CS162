/******************************
 * Author:Devon James
 * Date:6/13/17
 * Description:This is the header file of the derived class Mars.
 * ****************************/
#ifndef MARS_HPP
#define MARS_HPP
#include "Space.hpp"
#include <string>

class Mars:public Space
{
 private:
  int rocks;
  int invaders;
 public:
  Mars();
  ~Mars();
  int pickAxe();
  int drill();
  int tnt();
  char menu();
};
#endif
