/*****************************************
 * Author:Devon James
 * Date:5/28/2017
 * Description:This is the implenation file for Tournament class.
 * *************************************/

#include "Tournament.hpp"
#include <string>
#include <iostream>

Tournament::Tournament()
{
 firstA = NULL;
 firstB = NULL;
 lastA = NULL;
 lastB = NULL;
 top = NULL;
 pointsA = 0;
 pointsB = 0;
 numA = 0;
 numB = 0;
 numL = 0;
}

Tournament::~Tournament()
{
 //delCreatureA();
 //delCreatureB();
 //delCreatureL();
 //delA();
 //delB();
 //delL();
}

void Tournament::addFighter1(Creature* c)
{
 numA++;
 if(firstA == NULL)
 {
  firstA = new TeamA(c);
  lastA = firstA;
 }
 else
 {
  TeamA* tA = new TeamA(c);
  lastA->next = tA;
  lastA = lastA->next;
 }
}

void Tournament::addFighter2(Creature* c)
{
 numB++;
 if(firstB == NULL)
 {
  firstB = new TeamB(c);
  lastB = firstB;
 }
 else
 {
  TeamB* tB = new TeamB(c);
  lastB->next = tB;
  lastB = lastB->next;
 }
}

void Tournament::addLoser(Creature* c)
{
 numL++;
 if(top == NULL)
 {
  top = new LoserClub(c);
 }
 else
 {
  LoserClub* lc = new LoserClub(c);
  lc->next = top;
  top = lc;
 }
}

void Tournament::displayTeamA()
{
 if(firstA == NULL)
 {
  std::cout << "There are no warriors in Team A. Go add players to play!\n";
 }
 else
 {
  TeamA* tA = NULL;
  tA = firstA;
  std::cout << tA->fighter1->getName() << " " << std::endl;
  do
  {
   tA = tA->next;
   std::cout << tA->fighter1->getName() << " " << std::endl;
  } while(tA->next != NULL);
 }
}

void Tournament::displayTeamB()
{
 if(firstB == NULL)
 {
  std::cout << "There are no warriors in Team B. Go add players to play!\n";
 }
 else
 {
  TeamB* tB = NULL;
  tB = firstB;
  std::cout << tB->fighter2->getName() << " " << std::endl;
  do
  {
   tB = tB->next;
   std::cout << tB->fighter2->getName() << " " << std::endl;
  } while(tB->next != NULL);
 }
}

void Tournament::displayLosers()
{
 LoserClub* lc = NULL;
 lc = top;
 std::cout << "These are all the warriors that have fallen!\n";
 do
 {
  numL--;
  std::cout << lc->loser->getName() << " " << std::endl;
  lc = lc->next;
 } while(numL > 0);
}

void Tournament::swapTeamA()
{
 TeamA* temp = NULL;
 temp = firstA;
 firstA = firstA->next;
 firstA->next = lastA;
 lastA = temp;
}

void Tournament::swapTeamB()
{
 TeamB* temp2 = NULL;
 temp2 = firstB;
 firstB = firstB->next;
 firstB->next = lastB;
 lastB = temp2;
}

void Tournament::removeA()
{
 //numA--;
 TeamA* a = NULL;
 a = firstA;
 firstA = firstA->next;
 firstA->next = lastA;
 lastA = a;
 delete a;
}

void Tournament::removeB()
{
 //numB--;
 TeamB* b = NULL;
 b = firstB;
 firstB = firstB->next;
 firstB->next = lastB;
 lastB = b;
 delete b;
}

void Tournament::delA()
{
 TeamA* byeA = NULL;
 byeA = firstA;
 while(byeA != NULL)
 {
  TeamA* temp = NULL;
  temp = byeA;
  byeA = byeA->next;
  temp->next = NULL;
  delete temp;
  firstA = byeA; 
 }
 byeA = NULL;
 delete firstA;
 delete lastA;
}

void Tournament::delB()
{
 TeamB* byeB = NULL;
 byeB = firstB;
 while(byeB != NULL)
 {
  TeamB* tempB = NULL;
  tempB = byeB;
  byeB = byeB->next;
  tempB->next = NULL;
  delete tempB;
  firstB = byeB;
 }
 byeB = NULL;
 delete firstB;
 delete lastB;
}

void Tournament::delL()
{
 LoserClub* tempL = top;
 while(tempL != NULL)
 {
  LoserClub* trash = tempL;
  tempL = tempL->next;
  delete trash;
 }
}

void Tournament::delCreatureA()
{
 TeamA* nodeA = firstA;
 while(nodeA != NULL)
 {
  TeamA* dump = nodeA;
  nodeA = nodeA->next;
  delete dump->fighter1;
 }
}


void Tournament::delCreatureB()
{
 TeamB* nodeB = firstB;
 while(nodeB != NULL)
 {
  TeamB* dump2 = nodeB;
  nodeB = nodeB->next;
  delete dump2->fighter2;
 }
}

void Tournament::delCreatureL()
{
 LoserClub* nodeL = top;
 while(nodeL != NULL)
 {
  LoserClub* dump3 = nodeL;
  nodeL = nodeL->next;
  delete dump3->loser;
 }
}

void Tournament::fightersFight()
{
 do
 {
  Creature* cA = NULL;
  cA = firstA->fighter1;
  Creature* cB = NULL;
  cB = firstB->fighter2;
  arena(cA,cB);
  if(cA->getSP() >= 0)
  {
   std::cout << cA->getName() << " is the winner!\n"; 
   cA->recoverSP();
   swapTeamA();
   addLoser(cB);
   removeB();
   numB--;
   pointsA++;
   pointsB--;
   std::cout << "Team A Points: " << pointsA << std::endl;
   std::cout << "Team B Points: " << pointsB << std::endl;
  }
  else if(cB->getSP() >= 0)
  {
   std::cout << cB->getName() << " is the winner!\n";
   cB->recoverSP();
   swapTeamB();
   addLoser(cA);
   removeA();
   numA--;
   pointsA--;
   pointsB++;
   std::cout << "Team A Points: " << pointsA << std::endl;
   std::cout << "Team B Points: " << pointsB << std::endl;
  }
 } while(numA > 0 && numB > 0);
 if(pointsA < pointsB)
 {
  std::cout << "Team B Won!\n";
 }
 else if(pointsB < pointsA)
 {
  std::cout << "Team A Won!\n";
 }
 else
 {
  std::cout << "Tie Game!\n";
 }
 displayLosers();
}
