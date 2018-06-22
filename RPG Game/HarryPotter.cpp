/*Program name:HarryPotter.cpp
 *Author:Devon James
 **Date:5/14/17
 *Description:This is the implementation file of the child class Harry Potter.
 *************************************/
#include "Creature.hpp"
#include "HarryPotter.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

HarryPotter::HarryPotter()
{
 this->type = "Harry Potter";
 this->armor = 0;
 this->strengthPoints = 10;
 srand(time(0));
}

HarryPotter::~HarryPotter()
{}

std::string HarryPotter::getName()
{
 return type;
}

int HarryPotter::getSP()
{
 return strengthPoints;
}

int HarryPotter::attack()
{
 at = (rand()%6+1) + (rand()%6+1);
 return at;
}

int HarryPotter::defense()
{
 def = (rand()%6+1) + (rand()%6+1);
 return def;
}

/*
 * Description:Overrides damage function so if strengthPoints are less than or equal to 0, then they are set to 20 for one time only.
 * */
void HarryPotter::damage(Creature* c)
{
 int hurt = (c->attack() - defense()) - armor;
 int count = 0;
 if(hurt < 0)
 {
  hurt = 0;
 }
 std::cout << c->getName() << ": " << c->attack() << " || " << getName() << ": " << defense() << std::endl;
 std::cout << "Harry Potter takes " << hurt << " damage from " << c->getName() << std::endl;
 strengthPoints -= hurt;
 
 do
 {
  if(strengthPoints <= 0)
  {
   strengthPoints = 20;
   std::cout << "Harry Potter uses Hogwarths! He revives!\n";
  }
  count++;
 } while(count < 1);
}


