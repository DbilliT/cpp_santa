#ifndef _CONVEY
# define _CONVEY

#include "IConveyorBelt.hh"

class ConveyorBeltPePeNoel : public IConveyorBelt
{
 public:
  ConveyorBeltPePeNoel();
  virtual void Put(Object*);
  virtual Object* Take();
  virtual std::string Look() const;
  virtual void OUT();
  virtual void IN();
protected:
  Object *_room;
};

IConveyorBelt *createConveyorBelt();

#endif
