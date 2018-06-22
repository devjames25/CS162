/*******************************
 *Program name:List.hpp
 *Author:Devon James
 *Date:5/1/17
 *Description:This is the header file of the List class.
 ***********************************/
#ifndef LIST_HPP
#define LIST_HPP
#include "Item.hpp"
#include <string>

class List
{
 private:
  int size;
  int pos;
  int sum;
  Item** cart = NULL;
  Item** temp = NULL;

 public:
  List();
  ~List();
  void addItem(Item*);
  void delItem(std::string);
  void display();
  //Overloaded opertaor
  bool operator==(std::string);
};
#endif
