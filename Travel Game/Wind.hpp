/**********************************
 * Author:Devon James
 * Date:6/13/17
 * Description:This is the header file of the derived Wind class
 * ********************************/
#ifndef WIND_HPP
#define WIND_HPP
#include "Space.hpp"
#include <string>

class Wind:public Space
{
 private:
  int gold;
  int coal;
 public:
  Wind();
  ~Wind();
  int pickAxe();
  int drill();
  int tnt();
  char menu();
};
#endif
