#include "DeSoto.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

DeSoto::DeSoto()
{
 reserve = 1250;
 name = "DeSoto Cavern";
 srand(time(0));
}

DeSoto::~DeSoto()
{}

//If function is less than 0 return 0, else return value depending if random number is greater than 20.
int DeSoto::pickAxe()
{
 if(reserve < 0)
 {
  std::cout << "There are no material here!\n";
  return 0;
 }
 else
 {
  std::cout << "You used your pick axe!\n";
  int num;
  num = (rand()%100);
  if(num > 20)
  {
   gold = 350;
   reserve -= gold;
   std::cout << "You found $" << gold << " worth of gold!\n";
   return gold;
  }
  else
  {
   coal = -150;
   std::cout << "You found $" << coal << " worth of coal!\n";
   return coal;
  }
 }
}

//If function is less than 0 return 0, else return value depending if random number is greater than 40.
int DeSoto::drill()
{
 if(reserve < 0)
 {
  std::cout << "There are no material here!\n";
  return 0;
 }
 else
 {
  std::cout << "You used your drill!\n";
  int num;
  num = (rand()%100);
  if(num > 40)
  {
   gold = 850;
   reserve -= gold;
   std::cout << "You found $" << gold << " worth of gold!\n";
   return gold;
  }
  else
  {
   coal = -350;
   std::cout << "You found $" << coal << " worth of coal!\n";
   return coal;
  }
 }
}

//If function is less than 0, return 0, else return value depending if random number is greater than 60.
int DeSoto::tnt()
{
 if(reserve < 0)
 {
  std::cout << "There are no material here!\n";
  return 0;
 }
 else
 {
  std::cout << "You used your TNT!\n";
  int num;
  num = (rand()%100);
  if(num > 65)
  {
   gold = 1250;
   reserve -= gold;
   std::cout << "You found $" << gold << " worth of gold!\n";
   return gold;
  }
  else
  {
   coal = -750;
   std::cout << "You found $" << coal << " worth of coal!\n";
   return coal;
  }
 }
}

//Returns char value depending on integer input
char DeSoto::menu()
{
 int option;
 std::cout << "*****************************************************\n";
 std::cout << "Welcome to " << name << "! The total reserves here is $" << reserve << ". Pick a choice belows!\n";
 std::cout << "1)Use your pick axe.(80% rate)\n";
 std::cout << "2)Use your drill.(60% rate)\n";
 std::cout << "3)Use your TNT.(35% rate)\n";
 std::cout << "4)Go back to Airport.\n";
 std::cout << "5)Quit game.\n";
 std::cout << "*****************************************************\n";
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
  return 'e';
 }
 else
 {
  return 'q';
 }
}

