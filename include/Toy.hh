#ifndef TOY_HH_
#define TOY_HH_

#include "Object.hh"

class Toy : public Object
{
public:
  Toy(std::string const &title);
  Toy(Toy const &);
  Toy();
  virtual ~Toy();
  virtual void isTaken() const;
  virtual void wrapMeThat(Object *);
  virtual void openMe();
  virtual void closeMe();
};

#endif
