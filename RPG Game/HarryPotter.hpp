/*Program name:HarryPotter.hpp
 *Author:Devon James
 *Date:5/14/17
 **Description:This is the header file of the child class Harry Potter.
 ************************************/
#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP
#include "Creature.hpp"
#include <string>

class HarryPotter:public Creature
{
 private:
  int at;
  int def;

 public:
  HarryPotter();
  ~HarryPotter();
  std::string getName();
  int getSP();
  int attack();
  int defense();
  void damage(Creature*);

};
#endif
