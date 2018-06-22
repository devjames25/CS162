/*******************************
 *Program name:menu.cpp
 *Author:Devon James
 *Date:5/1/17
 *Description:This is the implementation of the menu function.
 ***********************************/
#include "Item.hpp"
#include "List.hpp"
#include <iostream>
#include <string>

void menu()
{
 int p;
 int q;
 double pr;
 std::string s;
 char answer;
 int option;
 Item* ptr = NULL;
 List b;

 do
 {
  std::cout << "This is the editor for your personal shopping list. Enter options below to edit your list!\n";
  std::cout << "1) Add items to the list!\n";
  std::cout << "2) Remove item off the list!\n";
  std::cout << "3) Display your list on screen!\n";
  std::cout << "4) Exit your shopping list editor!\n";
  std::cin >> option;

  while((option < 1) || (option > 4)) //Input Validation
  {
   std::cout << "WRONG INPUT! Please choose between 1 and 4:\n";
   std::cin >> option;
  }

  if(option != 4) //Selected options
  {
   switch(option)
   {
    case 1: std::cout << "Enter item you want to add to the list:\n";
            std::cin >> s;
            if(b == s)
            {
             std::cout << "Item is already here! Want to update item info?(y or n)\n";
             std::cin >> answer;
             if(answer == 'y')
             {
              std::cout << "Update pounds:\n";
              std::cin >> p;
              std::cout << "Update quantity:\n";
              std::cin >> q;
              std::cout << "Update price:\n";
              std::cin >> pr;
              ptr->setPound(p);
              ptr->setQuan(q);
              ptr->setPrice(pr);
             }
            } 
            else
            {
             ptr = new Item(); //Creates new Item object
             b.addItem(ptr);
            }
            break;
    case 2: std::cout << "Enter the item you want to delete from the list:\n";
            std::cin >> s;
            b.delItem(s);
            break;
    case 3: b.display();
            break;
    case 4: delete ptr;
   }
  }
 } while(option != 4);
}
