/*Program name:Barbarian.hpp
 *Author:Devon James
 *Date:5/14/17
 *Description:This is the header file of the child class Barbarian.
 ************************************/
#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "Creature.hpp"
#include <string>

class Barbarian:public Creature
{
 private:
  int at;
  int def;

 public:
  Barbarian();
  ~Barbarian();
  void changeName(std::string);
  std::string getName();
  int getSP();
  int attack();
  int defense();
  void damage(Creature*);
  void recoverSP();
};
#endif
  
