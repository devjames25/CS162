
#include "Lost.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

Lost::Lost()
{
 reserve = 2000;
 name = "The Lost Sea";
 srand(time(0));
}

Lost::~Lost()
{}

//If reserve is less than 0, return 0, else return integer depending if random number is greater than 25.
int Lost::pickAxe()
{
 if(reserve < 0)
 {
  std::cout << "There are no materials here!\n";
  return 0;
 }
 else
 {
  std::cout << "You used your pick axe!\n";
  int num;
  num = (rand()%100+1);
  if(num > 25)
  {
   fish = 500;
   reserve -= fish;
   std::cout << "You found $" << fish << " worth of rare fish!\n";
   return fish;
  }
  else
  {
   monster = -200;
   std::cout << "A monster came and stole $" << monster << " of your rare fish!\n";
   return monster;
  }
 }
} 

//If reserve is less than 0, return 0, else return integer depending if random number is greater than 50.
int Lost::drill()
{
 if(reserve < 0)
 {
  std::cout << "There are no materials here!\n";
  return 0;
 }
 else
 {
  std::cout << "You used your drill!\n";
  int num;
  num = (rand()%100);
  if(num > 50)
  {
   fish = 1000;
   reserve -= fish;
   std::cout << "You found $" << fish << " worth of rare fish!\n";
   return fish;
  }
  else
  {
   monster = -500;
   std::cout << "A monster came and stole $" << monster << " of your rare fish!\n";
   return monster;
  }
 }
}

//If reserve is less than 0 return 0, else return integer depending on if random number is greater than 75.
int Lost::tnt()
{
 if(reserve < 0)
 {
  std::cout << "There are no materials here!\n";
  return 0;
 }
 else
 {
  std::cout << "You used your TNT!\n";
  int num;
  num = (rand()%100);
  if(num > 75)
  {
   fish = 2000;
   reserve -= fish;
   std::cout << "You found $" << fish << " worth of rare fish!\n";
   return fish;
  }
  else
  {
   monster = -1000;
   std::cout << "A monster came and stole $" << monster << " of your rare fish!\n";
   return monster;
  }
 }
}

//Returns char value depending on integer input
char Lost::menu()
{
 int option;
 std::cout << "***************************************************\n";
 std::cout << "Welcome to " << name << "! The total reserves here is $" << reserve << ". Pick a choice belows!\n";
 std::cout << "1)Use your pick axe.(75% rate)\n";
 std::cout << "2)Use your drill.(50% rate)\n";
 std::cout << "3)Use your TNT.(25% rate)\n";
 std::cout << "4)Go north to Mammoth Cave.\n";
 std::cout << "5)Quit game.\n";
 std::cout << "***************************************************\n";
 std::cin >> option;

 while((option < 1) || (option > 5)) //Input Validation
 {
  std::cout << "WRONG INPUT! Please choose between 1 and 5:\n";
  std::cin >> option;
 }

 if(option == 1)
 {
  return 'p';
 }
 else if(option == 2)
 {
  return 'd';
 }
 else if(option == 3)
 {
  return 't';
 }
 else if(option == 4)
 {
  return 'n';
 }
 else
 {
  return 'q';
 }
}
