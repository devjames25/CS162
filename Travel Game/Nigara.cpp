#include "Nigara.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

Nigara::Nigara()
{
 reserve = 1000;
 name = "Nigara Cave";
 srand(time(0));
}

Nigara::~Nigara()
{}

int Nigara::pickAxe()
{
 if(reserve < 0)
 {
  std::cout << "There are no minerals to mine here!\n";
  return 0;
 }
 else
 {
  std::cout << "You used your pick axe!\n";
  int num;
  num = (rand()%100);
  if(num > 15)
  {
   gold = 250;
   reserve -= gold;
   std::cout << "You found $" << gold << " worth of gold!\n";
   return gold;
  }
  else
  {
   coal = -100;
   std::cout << "You found $" << coal << " worth of coal!\n";
   return coal;
  }
 }
}

int Nigara::drill()
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
  if(num > 30)
  {
   gold = 500;
   reserve -= gold;
   std::cout << "You found $" << gold << " worth of gold!\n";
   return gold;
  }
  else
  {
   coal = -200;
   std::cout << "Your found $" << coal << " worth of coal!\n";
   return coal;
  }
 }
}

int Nigara::tnt()
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
  if(num > 60)
  {
   gold = 1000;
   reserve -= gold;
   std::cout << "You found $" << gold << " worth of gold!\n";
   return gold;
  }
  else
  {
   coal = -500;
   std::cout << "You found $" << coal << " worth of coal!\n";
   return coal;
  }
 }
}

char Nigara::menu()
{
 int option;
 std::cout << "**************************************************\n";
 std::cout << "Welcome to " << name << "! The total reserves is $" << reserve << ". Pick a choice belows!\n";
 std::cout << "1)Use your pick axe.(85% rate)\n";
 std::cout << "2)Use your drill.(70% rate)\n";
 std::cout << "3)Use your TNT.(40% rate)\n";
 std::cout << "4)Go north to Mars.\n";
 std::cout << "5)Go back to the Airport.\n";
 std::cout << "6)Quit game.\n";
 std::cout << "*************************************************\n";
 std::cin >> option;
 
 while((option < 1) || (option > 6)) //Input Validation
 {
  std::cout << "WRONG INPUT! Please choose between 1 and 6:\n";
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
 else if(option == 5)
 {
  return 's';
 }
 else 
 {
  return 'q';
 }
}


