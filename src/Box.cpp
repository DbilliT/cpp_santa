#include "Box.hh"
//#include "Object.hh"

Box::Box() : Wrap("Box", false, true), _obj()
{
}

Box::Box(Box const &d) : Wrap("Box", d._fulfill, d._open), _obj(d._obj)
{
}

Box::~Box()
{
}

void Box::closeMe()
{
  this->_open = false;
}

void Box::openMe()
{
  this->_open = true;
}

void Box::wrapMeThat(Object *d)
{
  if (this->_open == true)
    {
      if(this->_fulfill == false)
	{
	  if (d != NULL)
	    this->_obj = d;
	}
      else
	std::cout << "There is already an object into the box" << std::endl;
    }
  else
    std::cout << "The box is closed" << std::endl;
}

void Box::isTaken() const
{
}
