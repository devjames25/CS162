/*Program name:Vampire.hpp
 *Author:Devon James
 *Date:5/14/17
 *Description:This is the header file of the child class Vampire.
 ************************************/
#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP
#include "Creature.hpp"
#include <string>

class Vampire:public Creature
{
 private:
  int at;
  int def;

 public:
  Vampire();
  ~Vampire();
  std::string getName();
  void changeName(std::string);
  int getSP();
  int attack();
  int defense();
  void damage(Creature*);
  void recoverSP();
};
#endif
