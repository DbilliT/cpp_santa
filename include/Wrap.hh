#ifndef WRAP_H_
#define WRAP_H_

#include "Object.hh"

class Wrap : public Object
{
protected:
  bool          _fulfill;
  bool          _open;
public:
  Wrap(std::string const &, bool, bool);
  Wrap();
  Wrap(Wrap const &);
  ~Wrap();
  virtual void isTaken() const;
  virtual void openMe();
  virtual void closeMe();
  virtual void wrapMeThat(Object *);
  bool	getFulfill() const;
  bool	getOpen() const;
};

#endif
