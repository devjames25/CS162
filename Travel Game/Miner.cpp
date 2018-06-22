
#include "Miner.hpp"
#include <iostream>
#include <string>
#include <vector>

Miner::Miner()
{
 airport = new Airport();
 nigara = new Nigara();
 mars = new Mars();
 mammoth = new Mammoth();
 lost = new Lost();
 wind = new Wind();
 desoto = new DeSoto();
 airport->setDirect('n', nigara);
 airport->setDirect('e', wind);
 airport->setDirect('w', desoto);
 airport->setDirect('s', mammoth);
 nigara->setDirect('n', mars);
 nigara->setDirect('s', airport);
 mammoth->setDirect('n', airport);
 mammoth->setDirect('s', lost);
 mars->setDirect('s', nigara);
 lost->setDirect('n', mammoth);
 wind->setDirect('w', airport);
 desoto->setDirect('e', airport);
 location = airport;
 fuel = 20;
 total = 0;
 empty = false;
}

Miner::~Miner()
{
 delete airport;
 delete nigara;
 delete mars;
 delete mammoth;
 delete lost;
 delete wind;
 delete desoto;
}

/**********************
 * Description:This function contains a do-while loop that assigns the return value to a character value and calls member functions corresponding to the charter value. 
 *('n' = north, 'e' = east, 'w' = west, 's' = south, 'p' = pickAxe(), 'd' = drill(), 't' = tnt(), and 'q' = quit.) 
 * A counter decreases in value every time the function pick axe, drill, and tnt is used. Once the counter value is 0, the bool value equals true. The loop ends with the charter value equals ‘q’ or the bool value is true. A for loop is used to accumulate the total value. If the total is greater than 5000, the player wins, else they lose
 * ********************/
void Miner::play()
{
 char choice;
 int axe;
 int cart;
 int explosive;
 std::cout << "***************************************************************\n";
  std::cout << "Welcome to the Explosive Mining Game! Use your high tech plane to fly to locations to gather valuable materials. The starting locaton is an Airport in Florida and you can fly to popular mining locations from there. (IMPORTANT MESSEAGE! YOUR SPECIAL PLANE IS ABLE TO TAKE YOU TO MARS AND THE BOTTOM OF THE SEA TO GET HIGH VALUE MATERIALS. FLY TO NIGARA CAVE TO GET TO MARS AND FLY TO MAMMOTH CAVE TO GET TO THE SEA!) Your tools include a pick axe, a drill, and a TNT explosive. Your goal is to gain $5000 to buy a new apartment. You have 20 gallons of fuel and the game ends when you run out of it.\n";
  std::cout << "**************************************************************\n";
 
 do
 {
  choice = location->menu();
  
  if(choice == 'n')
  {
   location = location->getNorth();
  }
  else if(choice == 's')
  {
   location = location->getSouth();
  }
  else if(choice == 'e')
  {
   location = location->getEast();
  }
  else if(choice == 'w')
  {
   location = location->getWest();
  }
  else if(choice == 'p')
  {
   axe = location->pickAxe();
   backpack.push_back(axe);
   fuel--;
  }
  else if(choice == 'd')
  {
   cart = location->drill();
   backpack.push_back(cart);
   fuel--;
  }
  else if(choice == 't')
  {
   explosive = location->tnt();
   backpack.push_back(explosive);
   fuel--;
  }
 
  //Vector limit 
  if(backpack.size() > 20)
  {
   std::cout << "Your bag is full!\n";
  }
  
  std::cout << "Your current fuel level: " << fuel << " gallons.\n";
  //fuel--;

  if(fuel == 15)
  {
   std::cout << "You have 3/4 of a tank left!\n";
  }
  else if(fuel == 10)
  {
   std::cout << "You have half a tank left!\n";
  }
  else if(fuel == 5)
  {
   std::cout << "You have a quater of a tank left!\n";
  }
  else if(fuel == 0)
  {
   std::cout << "Your tank is empty! You are teleported back to your plane to count your materials!\n";
   empty = true;
  }
 
 } while(choice != 'q' && empty != true);
 
//Total sum in vector 
 for(int i = 0; i < backpack.size(); i++)
 {
  total += backpack.at(i);
 }
 
 std::cout << "Your total is $" << total << std::endl;
 
 if(total > 5000)
 {
  std::cout << "Congrats! You have enough money to buy a new apartment!\n";
 }
 else
 {
  std::cout << "Dang! You can't buy a new apartment. Looks like you have to stay at your mom's house :(\n";
 }
}
