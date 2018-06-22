/*********************************
 * Author:Devon James
 * Date:6/13/17
 * Description: This is the header file of the derived class Lost.
 * ******************************/
#ifndef LOST_HPP
#define LOST_HPP
#include "Space.hpp"
#include <string>

class Lost:public Space
{
 private:
  int fish;
  int monster;
 public:
  Lost();
  ~Lost();
  int pickAxe();
  int drill();
  int tnt();
  char menu();
};
#endif
