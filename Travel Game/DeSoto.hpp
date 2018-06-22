/************************************
 * AuthorLDevon James
 * Date:6/13/17
 * Description: This is the header file of the derived class DeSoto.
 * *********************************/

#ifndef DESOTO_HPP
#define DESOTO_HPP
#include "Space.hpp"
#include <string>

class DeSoto:public Space
{
 private:
  int gold;
  int coal;
 public:
  DeSoto();
  ~DeSoto();
  int pickAxe();
  int drill();
  int tnt();
  char menu();
};
#endif
