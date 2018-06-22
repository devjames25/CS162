/***************************
 * Author:Devon James
 * Program Name:Tournament.hpp
 * Date:5/28/2017
 * Description: This is the header file of the Tournament class that uses three structures, 1 for Team A, 1 for Team B and 1 for a Loser pile.
 * *************************/
#ifndef TOURNAMENT_HPP
#define TOURNAMENT_HPP
#include "Creature.hpp"
#include <iostream>

void arena(Creature*,Creature*);

class Tournament
{
 private:
  struct TeamA
  {
   Creature* fighter1;
   TeamA* next;
   TeamA(Creature* f, TeamA* n = NULL)
   {
    fighter1 = f;
    next = n;
   }
  };
  struct TeamB
  {
   Creature* fighter2;
   TeamB* next;
   TeamB(Creature* g, TeamB* a = NULL)
   {
    fighter2 = g;
    next = a;
   }
  };
  struct LoserClub
  {
   Creature* loser;
   LoserClub* next;
   LoserClub(Creature* l, LoserClub* lc = NULL)
   {
    loser = l;
    next = lc;
   }    
  };
  TeamA* firstA;
  TeamA* lastA;
  TeamB* firstB;
  TeamB* lastB;
  LoserClub* top;
  int pointsA;
  int pointsB;
  int numA;
  int numB;
  int numL;
 public:
  Tournament();
  ~Tournament();
  void addFighter1(Creature*);
  void addFighter2(Creature*);
  void addLoser(Creature*);
  void displayTeamA();
  void displayTeamB();
  void displayLosers();
  void swapTeamA();
  void swapTeamB();
  void removeA();
  void removeB();
  void delA();
  void delB();
  void delL();
  void delCreatureA();
  void delCreatureB();
  void delCreatureL();
  void fightersFight();
};
#endif
