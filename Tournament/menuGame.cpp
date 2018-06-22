#include "Creature.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "Medusa.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include "Tournament.hpp"
#include <iostream>
#include <string>

void menuGame()
{
 Creature* ptrA = NULL;
 Creature* ptrB = NULL;
 Tournament tour;
 char choice;
 int option;
 int player1;
 int player2;
 int count = 1;
 std::string name;
 std::string name2;

 do
 {
  std::cout << "**********************************************************************************************************\n";
  std::cout << "Welcome to the Creature battle arena! Choose your warrior, form your team, and fight!\n";
  std::cout << "Behold these are the greatest warriors of your time!\n"; 
  std::cout << "Vampire: Suave, debonair, but vicious and surprisingly resilient!\n";
  std::cout << "Barbarian: Big sword, big muscles, bare torso!\n";
  std::cout << "Blue Men: They are small (6” tall), fast and tough!\n";
  std::cout << "Medusa: Scrawny lady with snakes for hair!\n";
  std::cout << "Harry Potter: The great childhood hero!\n";
  std::cout << std::endl;
  std::cout << "Teams can have as many warriors as they want!(This is a team game, so both teams MUST have more than one creature to play!)\n";
  std::cout << "1)Add a warrior to Player 1's team(Player1 will always go first! FIRST COME, FIRST SERVE!)\n";
  std::cout << "2)Add a warrior to Player 2's team!\n";
  std::cout << "3)Display warriors in TeamA!\n";
  std::cout << "4)Display warriors in TeamB!\n";
  std::cout << "5)FIGHT!\n";
  std::cout << "6)QUIT!\n";
  std::cout << "**********************************************************************************************************\n";
  std::cin >> option;

  while((option < 1) || (option > 6)) //Input Validation
  {
   std::cout << "WRONG INPUT! Please choose between 1 and 6:\n";
   std::cin >> option;
  }

  if(option != 6) //Selected options
  {
   switch(option)
   {
    case 1: std::cout << "Choose your warrior!\n";
            std::cout << "************************************************************************************************\n";
            std::cout << "1)Vampire:(Special:Charm - Chance to neutralizes any attack!)\n";
            std::cout << "2)Barbarian:(Special:None but cool hair!)\n";
            std::cout << "3)Blue Men:(Special:Mob - High initial defense but decreases for every 4 health lost!)\n";
            std::cout << "4)Medusa:(Special:Glare - Chance for automatic victory!)\n";
            std::cout << "5)Harry Potter:(Special:Hogwarts - Revivies from the dead once per game!)\n";
            std::cout << "************************************************************************************************\n";
            std::cin >> player1;
     
            while((option < 1) || (option > 5)) //Input Validation
            {
             std::cout << "WRONG INPUT! Please choose between 1 and 5:\n";
             std::cin >> player1;
            }
                               
            if(player1 == 1)
            {
             ptrA = new Vampire();
             tour.addFighter1(ptrA);
             std::cout << "Do you want to change Vampire's name?\n";
             std::cin >> choice; 
             if(choice == 'y')
             {
              std::cout << "Enter new name:\n";
              std::cin >> name;
              ptrA->changeName(name);
             }                               
            }
            else if(player1 == 2)
            {
             ptrA = new Barbarian();
             tour.addFighter1(ptrA);
             std::cout << "Do you want to change Barbarian's name?\n";
             std::cin >> choice;
             if(choice == 'y')
             {
              std::cout << "Enter new name:\n";
              std::cin >> name;
              ptrA->changeName(name);
             }
            }
            else if(player1 == 3)
            {
             ptrA = new BlueMen();
             tour.addFighter1(ptrA);
             std::cout << "Do you want to change Blue Men's name?\n";
             std::cin >> choice;
             if(choice == 'y')
             {
              std::cout << "Enter new name:\n";
              std::cin >> name;
              ptrA->changeName(name);
             }
            }
            else if(player1 == 4)
            {
             ptrA = new Medusa();
             tour.addFighter1(ptrA);
             std::cout << "Do you want to change Medusa's name?\n";
             std::cin >> choice;
             if(choice == 'y')
             {
              std::cout << "Enter new name:\n";
              std::cin >> name;
              ptrA->changeName(name);
             }
            }
            else
            {
             ptrA = new HarryPotter();
             tour.addFighter1(ptrA);
             std::cout << "Do you want to change Harry Potter's name?\n";
             std::cin >> choice;
             if(choice == 'y')
             {
              std::cout << "Enter new name:\n";
              std::cin >> name;
              ptrA->changeName(name);
             }
            }
            break;
    case 2: std::cout << "Choose your warrior!\n";
            std::cout << "************************************************************************************************\n";
            std::cout << "1)Vampire:(Special:Charm - Chance to neutralizes any attack!)\n";
            std::cout << "2)Barbarian:(Special:None but cool hair!)\n";
            std::cout << "3)Blue Men:(Special:Mob - High initial defense but decreases for every 4 health lost!)\n";
            std::cout << "4)Medusa:(Special:Glare - Chance for automatic victory!)\n";
            std::cout << "5)Harry Potter:(Special:Hogwarts - Revivies from the dead once per game!)\n";
            std::cout << "************************************************************************************************\n";
            std::cin >> player2;
                                   
            while((option < 1) || (option > 5)) //Input Validation
            {
             std::cout << "WRONG INPUT! Please choose between 1 and 5:\n";
             std::cin >> player2;
            }
             
            if(player2 == 1)
            {
             ptrB = new Vampire();
             tour.addFighter2(ptrB);
             std::cout << "Do you want to change Vampire's name?\n";
             std::cin >> choice;
             if(choice == 'y')
             {
              std::cout << "Enter new name:\n";
              std::cin >> name2;
              ptrB->changeName(name2);
             }
            }
            else if(player2 == 2)
            {
             ptrB = new Barbarian();
             tour.addFighter2(ptrB);
             std::cout << "Do you want to change Barbarian's name?\n";
             std::cin >> choice;
             if(choice == 'y')
             {
              std::cout << "Enter new name:\n";
              std::cin >> name2;
              ptrB->changeName(name2);
             }
            }
            else if(player2 == 3)
            {
             ptrB = new BlueMen();
             tour.addFighter2(ptrB);
             std::cout << "Do you want to change Blue Men's name?\n";
             std::cin >> choice;
             if(choice == 'y')
             {
              std::cout << "Enter new name:\n";
              std::cin >> name2;
              ptrB->changeName(name2);
             }
            }
            else if(player2 == 4)
            {
             ptrB = new Medusa();
             tour.addFighter2(ptrB);
             std::cout << "Do you want to change Medusa's name?\n";
             std::cin >> choice;
             if(choice == 'y')
             {
              std::cout << "Enter new name:\n";
              std::cin >> name2;
              ptrB->changeName(name2);
             }
            }
            else
            {
             ptrB = new HarryPotter();
             tour.addFighter2(ptrB);
             std::cout << "Do you want to change Harry Potter's name?\n";
             std::cin >> choice;
             if(choice == 'y')
             {
              std::cout << "Enter new name:\n";
              std::cin >> name2;
              ptrB->changeName(name2);
             }
            }
            break;
    case 3: tour.displayTeamA();
            break;
    case 4: tour.displayTeamB();
            break;
    case 5: tour.fightersFight();
            std::cout << "Pick new warriors to play again since your old ones are either dead or in the hospital.\n";
            delete ptrA;
            delete ptrB;
           // tour.delCreatureA();
           // tour.delCreatureB();
           // tour.delCreatureL();
            break;
   }
  }
 } while(option != 6);
}

