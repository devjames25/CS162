/*******************************
 *Program name:Item.hpp
 *Author:Devon James
 *Date:5/1/17
 *Description:This is the header file of the Item class.
 **********************************/

#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>

class Item
{
 private:
  std::string name;
  int pound;
  int quantity;  
  double price;
  double sum;
 
 public:
  Item();
  Item(std::string, int, int, double);
  ~Item();
  void setName(std::string);
  void setPound(int);
  void setQuan(int);
  void setPrice(double);
  std::string getName();
  int getPound();
  int getQuan();
  double getPrice();
  double sumCost();
};
#endif
