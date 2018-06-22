/******************************
 * Author:Devon james
 * Date:6/13/17
 * Description:This is the header file of the Miner class
 * *****************************/
#ifndef MINER_HPP
#define MINER_HPP
#include <string>
#include <vector>
#include "Space.hpp"
#include "Airport.hpp"
#include "Nigara.hpp"
#include "Mars.hpp"
#include "Mammoth.hpp"
#include "Lost.hpp"
#include "Wind.hpp"
#include "DeSoto.hpp"

class Miner
{
 private:
  Space* airport;
  Space* nigara;
  Space* mars;
  Space* mammoth;
  Space* lost;
  Space* wind;
  Space* desoto;
  Space* location;
  std::vector<int> backpack;
  int fuel;
  int total;
  bool empty;
 public:
  Miner();
  ~Miner();
  void play();
};
#endif
