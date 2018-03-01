#ifndef ICONV_
# define ICONV_

#include "Object.hh"

class IConveyorBelt
{
public:
  virtual ~IConveyorBelt() {}
  virtual void Put(Object*) = 0;
  virtual Object* Take() = 0;
  virtual std::string Look() const = 0;
  virtual void OUT() = 0;
  virtual void IN() = 0;
};

#endif
