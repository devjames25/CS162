/*Program name:Medusa.cpp
 *Author:Devon James
 Date:5/14/17
 *Description:This is the implementation file of the child class Medusa.
 *************************************/
#include "Creature.hpp"
#include "Medusa.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

Medusa::Medusa()
{
 this->type = "Medusa";
 this->armor = 3;
 this->strengthPoints = 8;
 srand(time(0));
}

Medusa::~Medusa()
{}

std::string Medusa::getName()
{
 return type;
}

int Medusa::getSP()
{
 return strengthPoints;
}

/*
 * Description: Overrides attack so if attack roll is equal to 12 than attack would equal 1000.
 * */
int Medusa::attack()
{
 at = (rand()%6+1) + (rand()%6+1);
 if(at == 12)
 {
  std::cout << "Medusa uses Glare!\n";
  at = 1000;
  return at;
 }
  return at;
}

int Medusa::defense()
{
 def = rand() % 6 +1;
 return def;
}

void Medusa::damage(Creature* c)
{
 int hurt = (c->attack() - defense()) - armor;
 if(hurt < 0)
 {
  hurt = 0;
 }
 std::cout << c->getName() << ": " << c->attack() << " || " << getName() << ": " << defense() << std::endl;
 std::cout << "Medusa takes " << hurt << " damage from " << c->getName() << std::endl;
 strengthPoints -= hurt;
}

