/*Program name:Creature.hpp
 *Author:Devon James
 *Date:5/14/17
 *Description:This is the header file of the abstract base class Creature.
 ***********************************/

#ifndef CREATURE_HPP
#define CREATURE_HPP
#include <string>

enum Special {Charm, Glare, Mob, Hogwarts, None};

class Creature
{
 protected:
  std::string type;
  int armor;
  int strengthPoints;
  Special ult;

 public:
  virtual ~Creature() //Pure virtual destructor
  {
   
  };
  virtual std::string getName();
  virtual int getSP();
  virtual int attack();
  virtual int defense();
  virtual void damage(Creature*) = 0;
  
};
#endif
