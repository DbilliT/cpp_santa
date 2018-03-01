#ifndef TEDDY_HH_
#define TEDDY_HH_

#include "Toy.hh"

class Teddy : public Toy
{
public:
  Teddy();
  Teddy(Teddy const &);
  virtual ~Teddy();
  virtual void isTaken() const;
  virtual void wrapMeThat(Object *);
  virtual void openMe();
  virtual void closeMe();
};

#endif
