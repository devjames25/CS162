#include "Creature.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "Medusa.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include <iostream>
#include <string>

void arena(Creature*, Creature*);

void menuGame()
{
 Creature* ptrA = NULL;
 Creature* ptrB = NULL;
 int option;
 int player1;
 int player2;
 int count = 1;

 do
 {
  std::cout << "Welcome to the Creature battle arena! Choose your warrior and fight!\n";
  std::cout << "Vampire: Suave, debonair, but vicious and surprisingly resilient!\n";
  std::cout << "Barbarian: Big sword, big muscles, bare torso!\n";
  std::cout << "Blue Men: They are small (6” tall), fast and tough!\n";
  std::cout << "Medusa: Scrawny lady with snakes for hair!\n";
  std::cout << "Harry Potter: The great childhood hero!\n";
  std::cout << "1) Pick a warrior for player1!(Player1 will always go first! FIRST COME, FIRST SERVE!)\n";
  std::cout << "2) Pick a warrior for player2!\n";
  std::cout << "3) FIGHT!\n";
  std::cout << "4) QUIT!\n";
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
    case 1: std::cout << "Choose your warrior!\n";
            std::cout << "1)Vampire:(Special:Charm - Chance to neutralizes any attack!)\n";
            std::cout << "2)Barbarian:(Special:None but cool hair!)\n";
            std::cout << "3)Blue Men:(Special:Mob - High initial defense but decreases for every 4 health lost!)\n";
            std::cout << "4)Medusa:(Special:Glare - Chance for automatic victory!)\n";
            std::cout << "5)Harry Potter:(Special:Hogwarts - Revivies from the dead once per game!)\n";
            std::cin >> player1;
     
            while((option < 1) || (option > 5)) //Input Validation
            {
             std::cout << "WRONG INPUT! Please choose between 1 and 5:\n";
             std::cin >> player1;
            }
                               
            if(player1 == 1)
            {ptrA = new Vampire();}
            else if(player1 == 2)
            {ptrA = new Barbarian();}
            else if(player1 == 3)
            {ptrA = new BlueMen();}
            else if(player1 == 4)
            {ptrA = new Medusa();}
            else
            {ptrA = new HarryPotter();}
            break;
    case 2: std::cout << "Choose your warrior!\n";
            std::cout << "1)Vampire:(Special:Charm - Chance to neutralizes any attack!)\n";
            std::cout << "2)Barbarian:(Special:None but cool hair!)\n";
            std::cout << "3)Blue Men:(Special:Mob - High initial defense but decreases for every 4 health lost!)\n";
            std::cout << "4)Medusa:(Special:Glare - Chance for automatic victory!)\n";
            std::cout << "5)Harry Potter:(Special:Hogwarts - Revivies from the dead once per game!)\n";
            std::cin >> player2;
                                   
            while((option < 1) || (option > 5)) //Input Validation
            {
             std::cout << "WRONG INPUT! Please choose between 1 and 5:\n";
             std::cin >> player2;
            }

    
            if(player2 == 1)
            {ptrB = new Vampire();}
            else if(player2 == 2)
            {ptrB = new Barbarian();}
            else if(player2 == 3)
            {ptrB = new BlueMen();}
            else if(player2 == 4)
            {ptrB = new Medusa();}
            else
            {ptrB = new HarryPotter();}
            break;
    case 3: arena(ptrA, ptrB);
            delete ptrA;
            delete ptrB;
            break;
   }
  }
 } while(option != 4);
}

