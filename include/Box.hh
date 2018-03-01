#ifndef BOX_H_
#define BOX_H_

#include "Wrap.hh"
#include "Object.hh"

class Box : public Wrap
{
protected:
  Object *_obj;
public:
  Box();
  Box(Box const &d);
  virtual ~Box();
  virtual void isTaken() const;
  virtual void openMe();
  virtual void closeMe();
  virtual void wrapMeThat(Object *);
};

#endif
