/*Program name:Barbarian.cpp
 **Author:Devon James
 **Date:5/14/17
 **Description:This is the implementation file of the child class Barbarian.
 *************************************/
#include "Creature.hpp"
#include "Barbarian.hpp"
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>

//Default constructor
Barbarian::Barbarian()
{
 this->type = "Barbarian";
 this->armor = 0;
 this->strengthPoints = 12;
 srand(time(0));
}

Barbarian::~Barbarian()
{}

std::string Barbarian::getName()
{
 return type;
}

int Barbarian::getSP()
{
 return strengthPoints;
}

int Barbarian::attack()
{
 at = (rand()%6+1) + (rand()%6+1);
 return at;
}

int Barbarian::defense()
{
 def = (rand()%6+1) + (rand()%6+1);
 return def;
}

void Barbarian::damage(Creature* c)
{
 int hurt = (c->attack() - defense()) - armor;
 if(hurt < 0)
 {
  hurt = 0;
 }
 std::cout << c->getName() << ": " << c->attack() << " || " << getName() << ": " << defense() << std::endl;
 std::cout << "Barbarian takes " << hurt << " damage from " << c->getName() << std::endl; 
 strengthPoints -= hurt;
}
