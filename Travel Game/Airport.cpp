
#include "Airport.hpp"
#include <string>
#include <iostream>

Airport::Airport()
{
 reserve = 0;
 name = "Fort Lauderdale Airport";
}

int Airport::pickAxe()
{
 return 0;
}

int Airport::drill()
{
 return 0;
}

int Airport::tnt()
{
 return 0;
}

//Returns a char value depending on integer input 
char Airport::menu()
{
 int option;
 std::cout << "*********************************************************\n";
 std::cout << "Welcome to the " << name << "! Where do you want to go?\n";
 std::cout << "1)North to Nigara Cave.\n";
 std::cout << "2)East to Wind Cave.\n";
 std::cout << "3)West to DeSoto Cavern.\n";
 std::cout << "4)South to Mammoth Cave.\n";
 std::cout << "5)Quit Game.\n";
 std::cout << "********************************************************\n";
 std::cin >> option;

 while((option < 1) || (option > 5)) //Input Validation
 {
  std::cout << "WRONG INPUT! Please choose between 1 and 5:\n";
  std::cin >> option;
 } 

 if(option == 1)
 {
  return 'n';
 }
 else if(option == 2)
 {
  return 'e';
 }
 else if(option == 3)
 {
  return 'w';
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


