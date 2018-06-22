/**********************************
 * Author:Devon James
 * Date: 6/13/17
 * Description: This is the header file of the Airplane class
 * ********************************/
#ifndef AIRPORT_HPP
#define AIRPORT_HPP
#include "Space.hpp"
#include <string>

//Derives from Space class
class Airport:public Space
{
 public:
  Airport();
  ~Airport(){}
  int pickAxe();
  int drill();
  int tnt();
  char menu();
};
#endif
