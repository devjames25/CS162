/*Program name:Vampire.cpp
 *Author:Devon James
 *Date:5/14/17
 *Description:This is the implementation file of the child class Vampire.
 *************************************/
#include "Creature.hpp"
#include "Vampire.hpp"
#include <string>
#include <cstdlib>
#include <iostream>
#include <ctime>

//Default constructor
Vampire::Vampire()
{
 this->type = "Vampire";
 this->armor = 1;
 this->strengthPoints = 18;
 srand(time(0));
}

Vampire::~Vampire()
{}

void Vampire::changeName(std::string s)
{
 this->type = s;
}

std::string Vampire::getName()
{
 return type;
}

int Vampire::getSP()
{;
 return strengthPoints;
}

int Vampire::attack()
{
 return (rand() % 12 + 1);
}

//Override defense function to use Charm if defense roll is greater than 3
int Vampire::defense()
{
 def = (rand() % 6 + 1);
 if(def > 3)
 {
  ult = Charm;
 }
 return def;
}

/*
 * Description: Overrides the damage function so if defense roll is greater than 3, there is no strengthPoints that is lost..
 * */
void Vampire::damage(Creature* c)
{
 int attack = c->attack();
 int def = defense();
 std::cout << c->getName() << " ATTACK: " << attack << " || " << getName() << " DEFNESE: " << def << std::endl; //Output Attack and Defense values
 int wound = (attack - def) - armor;
 if(def > 3)
 {
  std::cout << "Vampire uses Charm!\n";
  wound = 0;
 }
 if(wound <= 0)
 {
  wound = 0;
  strengthPoints -= wound;
 }
 else
 {
  strengthPoints -= wound;
 }
 std::cout << "Vampire takes " << wound << " damage from " << c->getName() << std::endl;
}

void Vampire::recoverSP()
{
 int recover;
 recover = strengthPoints * 0.5;
 strengthPoints += recover;
 if(strengthPoints > 18)
 {
  strengthPoints = 18;
 }
}  
