/*******************************
 *Program name:Item.cpp
 *Author:Devon James
 *Date:5/1/17
 *Description:This is the implementation file of the Item class.
 **********************************/

#include "Item.hpp"
#include <string>

Item::Item()
{
 this->name = " ";
 this->pound = 0;
 this->quantity = 0;
 this->price = 0.0;
}

Item::Item(std::string n, int p, int q, double pr)
{ 
 this->name = n;
 this->pound = p;
 this->quantity = q;
 this->price = pr;
}

Item::~Item()
{}

void Item::setName(std::string n)
{this->name = n;}

void Item::setPound(int p)
{this->pound = p;}

void Item::setQuan(int q)
{this->quantity = q;}

void Item::setPrice(double pr)
{this->price = pr;}

std::string Item::getName()
{return name;}

int Item::getPound()
{return pound;}

int Item::getQuan()
{return quantity;}

double Item::getPrice()
{return price;}

double Item::sumCost()
{return (quantity * price);}

