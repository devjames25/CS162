/*Program name:BlueMen.cpp
 *Author:Devon James
 *Date:5/14/17
 *Description:This is the implementation file of the child class Blue Men.
 *************************************/
#include "Creature.hpp"
#include "BlueMen.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

BlueMen::BlueMen()
{
 this->type = "Blue Men";
 this->armor = 3;
 this->strengthPoints = 12;
 srand(time(0));
}

BlueMen::~BlueMen()
{}

std::string BlueMen::getName()
{
 return type;
}

int BlueMen::getSP()
{
 return strengthPoints;
}

int BlueMen::attack()
{
 at = (rand()%10+1) + (rand()%10+1);
 return at;
}

/*
 * Description:Overrides defense so for every 4 strengthPoints lost, one defense die is lost.
 * */
int BlueMen::defense()
{
 ult = Mob;
 if(strengthPoints >= 9)
 {
  def = (rand()%6+1) + (rand()%6+1) + (rand()%6+1);
  return def;
 }
 else if(strengthPoints >= 5)
 {
  std::cout << "Blue Men uses Mob! Loses 1 defense die!\n";
  def = (rand()%6+1) + (rand()%6+1);
  return def;
 }
 else
 {
  def = (rand()%6+1);
  return def;
 }
}

void BlueMen::damage(Creature* c)
{
 int hurt = (c->attack() - defense()) - armor;
 if(hurt < 0)
 {
  hurt = 0;
 }
 std::cout << c->getName() << ": " << c->attack() << " || " << getName() << ": " << defense() << std::endl;
 std::cout << "Blue Men takes " << hurt << " damage from " << c->getName() << std::endl;
 strengthPoints -= hurt;
}
