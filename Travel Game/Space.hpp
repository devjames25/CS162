/****************************************
 * Author:Devon James
 * Date:6/13/17
 * Description:This is the header of the abstract base class Space.
 * **************************************/
#ifndef SPACE_HPP
#define SPACE_HPP
#include <string>

class Space
{
 protected:
  Space* north = NULL;
  Space* south = NULL;
  Space* east = NULL;
  Space* west = NULL;
  int reserve;
  std::string name;

 public:
  virtual ~Space(); //Virtual Desturctor
  Space* getNorth();
  Space* getSouth();
  Space* getEast();
  Space* getWest();
  void setDirect(char, Space*); 
  virtual int pickAxe() = 0;
  virtual int drill() = 0;
  virtual int tnt() = 0;
  virtual char menu() = 0;
};
#endif
