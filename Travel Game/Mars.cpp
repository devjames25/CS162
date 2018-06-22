
#include "Mars.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

Mars::Mars()
{
 reserve = 2000;
 name = "Mars";
 srand(time(0));
}

Mars::~Mars()
{}

int Mars::pickAxe()
{
 if(reserve < 0)
 {
  std::cout << "There are no minerals to mine!\n";
  return 0;
 }
 else
 {
  std::cout << "You used your pick axe!\n";
  int num = (rand()%100);
  if(num > 25)
  {
   rocks = 500;
   reserve -= rocks;
   std::cout << "You found rare space rocks. Add $" << rocks << " to your tank!\n";
   return rocks;
  }
  else
  {
   invaders = -100;
   std::cout << "Invaders stole $" << invaders << " from you. Subtract $100 to your tank!\n";
   return invaders;
  } 
 }
}

int Mars::drill()
{
 if(reserve < 0)
 {
  std::cout << "There are no minerals to mine here!\n";
  return 0;
 }
 else
 {
  std::cout << "You used your drill!\n";
  int num;
  num = (rand()%100);
  if(num > 50)
  {
   rocks = 1000;
   reserve -= rocks;
   std::cout << "You found rare space rocks. Add $" << rocks << " to your tank!\n";
   return rocks;
  }
  else
  {
   invaders = -500;
   std::cout << "Invaders stole $" << invaders << " from you. Substract $500 to your tank!\n";
   return invaders;
  }
 }
}

int Mars::tnt()
{
  if(reserve < 0)
 {
  std::cout << "There are no minerals to mine here!\n";
  return 0;
 }
 else
 {
  std::cout << "You used your TNT!\n";
  int num;
  num = (rand()%100);
  if(num > 75)
  {
   rocks = 2000;
   reserve -= rocks;
   std::cout << "You found rare space rocks. Add $" << rocks << " to your tank!\n";
   return rocks;
  }
  else
  {
   invaders = -1000;
   std::cout << "Invaders stole $" << invaders << " from you. Substract $1000 to your tank!\n";
   return invaders;
  }
 }
}  

char Mars::menu()
{
 int option;
 std::cout << "***************************************************\n";
 std::cout << "Welcome to " << name << "! The total reserves here is $" << reserve << ". Pick a choice belows!\n";
 std::cout << "1)Use your pick axe.(75% rate)\n";
 std::cout << "2)Use your drill.(50% rate)\n";
 std::cout << "3)Use your TNT.(25% rate)\n";
 std::cout << "4)Go south to Nigara Cave.\n";
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
  return 's';
 }
 else
 {
  return 'q';
 }
}


