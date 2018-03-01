#include "Object.hh"
#include "LittlePony.hh"
#include "Teddy.hh"

Object::Object(std::string const &title) : title(title)
{
}

Object::Object() : title("")
{
}

Object::Object(Object const &d) : title(d.getTitle())
{
}

Object::~Object()
{
}

//-----------------------------------------------------------------//

std::string const &Object::getTitle() const {return(this->title);}

//-----------------------------------------------------------------//

Object** Object::MyUnitTests()
{
  Toy *pony = new LittlePony();
  Toy *teddy = new Teddy();
  Object **obj = new Object*[2];
  obj[0] = pony;
  obj[1] = teddy;
  return (obj);
}

std::ostream &operator<<(std::ostream &bob, Object const &d)
{
  if (d.getTitle() != "")
    bob << "it's a " << d.getTitle();
  return bob;
}

Object *Object::MyUnitTests(Object **obj)
{
  obj[1]->wrapMeThat(obj[0]);
  obj[2]->wrapMeThat(obj[1]);
  return(obj[2]);
}
