#ifndef ITABLE_
# define ITABLE_

//#include <string>
//#include <iostream>
#include "Object.hh"

class ITable
{
public:
  virtual ~ITable() {}
  virtual void Put(Object*) = 0;
  virtual Object* Take() const = 0;
  virtual void collapse() = 0;
  virtual std::string *Look() const = 0;
};

#endif
