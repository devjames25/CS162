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

void Barbarian::changeName(std::string s)
{
 this->type = s;
}

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
 int attack = c->attack();
 int def = defense();
 std::cout << c->getName() << " ATTACK: " << attack  << " || " << getName() << " DEFENSE: " << def << std::endl;
 int hurt = (attack - def) - armor;
 if(hurt <= 0)
 {
  hurt = 0;
  strengthPoints -= hurt;
 }
 else
 {
  strengthPoints -= hurt;
 }
 std::cout << "Barbarian takes " << hurt << " damage from " << c->getName() << std::endl; 
}

void Barbarian::recoverSP()
{
 int recover;
 recover = strengthPoints * 0.5;
 strengthPoints += recover;
 if(strengthPoints > 12)
 {
  strengthPoints = 12;
 }
}
