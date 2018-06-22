/*************************************
 * Author:Devon James
 * Date:6/13/17
 * Description:This is the header file of the derived class Nigara
 * **********************************/
#ifndef NIGARA_HPP
#define NIGARA_HPP
#include "Space.hpp"
#include <string>

class Nigara:public Space
{
 private:
  int gold;
  int coal;
 public:
  Nigara();
  ~Nigara();
  int pickAxe();
  int drill();
  int tnt();
  char menu();
};
#endif
