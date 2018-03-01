#ifndef PONY_HH_
#define PONY_HH_

#include "Toy.hh"

class LittlePony : public Toy
{
public:
  LittlePony();
  LittlePony(LittlePony const &);
  virtual ~LittlePony();
  virtual void isTaken() const;
  virtual void wrapMeThat(Object *);
  virtual void openMe();
  virtual void closeMe();
};

#endif
