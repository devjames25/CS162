
/*Program name:BlueMen.hpp
 *Author:Devon James
 **Date:5/14/17
 **Description:This is the header file of the child class Blue Men.
 ************************************/
#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP
#include "Creature.hpp"
#include <string>

class BlueMen:public Creature
{
 private:
  int at;
  int def;

 public:
  BlueMen();
  ~BlueMen();
  std::string getName();
  int getSP();
  int attack();
  int defense();
  void damage(Creature*);
};
#endif
