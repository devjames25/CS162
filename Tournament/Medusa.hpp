/*Program name:Medusa.hpp
 *Author:Devon James
 *Date:5/14/17
 *Description:This is the header file of the child class Medusa.
 ************************************/
#ifndef MEDUSA_HPP
#define MEDUSA_HPP
#include "Creature.hpp"
#include <string>

class Medusa:public Creature
{
 private:
  int at;
  int def;

 public:
  Medusa();
  ~Medusa();
  void changeName(std::string);
  std::string getName();
  int getSP();
  int attack();
  int defense();
  void damage(Creature*);
  void recoverSP();
};
#endif
