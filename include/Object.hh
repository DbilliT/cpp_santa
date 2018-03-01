#ifndef OBJECT_HH_
#define OBJECT_HH_

#include <iostream>
#include <string>

class Object
{
public :
  Object();
  Object(Object const &);
  Object(std::string const &title);
  virtual ~Object();
  virtual void isTaken() const = 0;
  virtual void wrapMeThat(Object *) = 0;
  virtual void openMe() = 0;
  virtual void closeMe() = 0;
  std::string const &getTitle() const;
  Object **MyUnitTests();
  Object *MyUnitTests(Object **obj);
private:
  std::string const title;
};

std::ostream &operator<<(std::ostream &bob, Object const &d);

#endif
