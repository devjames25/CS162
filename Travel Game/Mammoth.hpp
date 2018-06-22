/************************
 * Author:Devon James
 * Date:6/13/17
 * Description:This is the header file of the derived class Mammoth
 * ***********************/
#ifndef MAMMOTH_HPP
#define MAMMOTH_HPP
#include <string>
#include "Space.hpp"

class Mammoth:public Space
{
 private:
  int gold;
  int coal;
 public:
  Mammoth();
  ~Mammoth(){}
  int pickAxe();
  int drill();
  int tnt();
  char menu();
};
#endif
