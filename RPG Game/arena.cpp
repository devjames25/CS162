/*Program name:arena.cpp
 **Author:Devon James
 **Date:5/14/17
 **Description:This is the function that calls the damage function and loops it until one of the Creature has a strength point less than or equal to 0
 *************************************/
#include "Creature.hpp"
#include <iostream>

void arena(Creature* c1, Creature* c2)
{
 int turn = 1; //Turn counter
 int count = 1;//Round counter
 int cA;
 int cD;
 int c2A;
 int c2D;

 do
 {
   cA = c1->attack();
   cD = c1->defense();
   c2A = c2->attack();
   c2D = c2->defense();
   
   std::cout << "Battle Turn: " << turn++ << std::endl; 
   c2->damage(c1);

   std::cout << "Battle Turn: " << turn++ << std::endl;
   c1->damage(c2);

   std::cout << "Round: " << count++ << " has ended.\n";
   std::cout << c1->getName() << " has " << c1->getSP() << " health left.\n";
   std::cout << c2->getName() << " has " << c2->getSP() << " health left.\n";

  } while(c1->getSP() >= 0 && c2->getSP() >= 0); //Loop ends when one Creature strength points is equal to or less than 0
  if(c1->getSP() <= 0)
  {
   std::cout << c2->getName() << " is the winner!\n";
  }
  else if(c2->getSP() <= 0)
  {
   std::cout << c1->getName() << " is the winner!\n";
  }
  std::cout << "MUST READ!!! Either pick new warriors(or the same ones) for both players to play again or exit program and go clean your room!\n";   
}
