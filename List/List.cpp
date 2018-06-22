/*******************************
 *Program name:List.cpp
 *Author:Devon James
 *Date:5/1/17
 *Description:This is the implementation file of the List class.
 ***********************************/
#include "Item.hpp"
#include "List.hpp"
#include <string>
#include <iostream>

//Default constructor sets values to private data variables and dynamically allocate an array of Item pointers to cart
List::List()
{
 this->size = 4;
 this->pos = 0;
 this->sum = 0;
 cart = new Item*[size];
}

//Deconstructor delalllocates the array cart
List::~List()
{
 delete[] cart;
}
 
/*************************
 * Description:This function adds more item objects to the array by first passomg a pointer to an Item object and assign it to a poesition in the array. Then the 
 * function prompts user to input Item description and if the elements in the array is close to being full, the array doubles in size.
 * **********************/
void List::addItem(Item* item)
{
 cart[pos] = item;
 
 std::string n;
 int p, q;
 double pr;

 std::cout << "Enter item name again:\n";
 std::cin >> n;
 cart[pos]->setName(n);
 std::cout << "Enter unit of measurement:\n";
 std::cin >> p;
 cart[pos]->setPound(p);
 std::cout << "How many units do you want to buy?\n";
 std::cin >> q;
 cart[pos]->setQuan(q);
 std::cout << "Enter the price:\n";
 std::cin >> pr;
 cart[pos]->setPrice(pr);
 
 pos++;
 if(pos >= size)
 {
  temp = new Item*[size];
  for(int i =0; i < size; i++)
  {
   temp[i] = cart[i];
  } 
  delete[] cart;
  cart = NULL;
  size*=2;
  cart = new Item*[size];
  for(int i = 0; i < size; i++)
  {
   cart[i] = temp[i];
  }
  delete[] temp;
  temp = NULL;
 } 
}

/*****************************
 * Description:This function deletes the item from the array by using a string as a parameter and deletes the element postion in the array if it matches the string, 
 * then the cart elements is moved back by 1.
 * ***************************/
void List::delItem(std::string n)
{
 for(int i = 0; i < pos; i++)
 {
  if(cart[i]->getName() == n)
  {
   std::cout << "I deleted " << cart[i]->getName() << std::endl;
   delete cart[i];
   cart[i] = cart[i-1];
   pos--; 
  }
 }
}
 
/******************************
 * Description:This function outputs the elements within the array
 * ***************************/
void List::display()
{
 for(int i = 0; i < pos; i++)
 {
  std::cout << "Name: " << cart[i]->getName() << std::endl;
  std::cout << "Units in pounds: " << cart[i]->getPound() << std::endl;
  std::cout << "Quantity to buy: " << cart[i]->getQuan() << std::endl;
  std::cout << "Price: $" << cart[i]->getPrice() << std::endl;
  std::cout << "Sum: $" << cart[i]->sumCost() << std::endl;
  sum += cart[i]->sumCost();
  std::cout << "Total: $" << sum << std::endl;
 }
}

/**************************************
 * Description:Tis function overloads the == function to return true if an element of the array is the same as the string that is passed through as a parameter.
 * ***********************************/
bool List::operator==(std::string a)
{
 for(int i = 0; i < pos; i++)
 {
  if(cart[i]->getName() == a)
  { return true;}
  else
  { return false;}
 }
}


