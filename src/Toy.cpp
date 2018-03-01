#include "Toy.hh"

Toy::Toy(std::string const &title) : Object(title)
{
}

Toy::Toy(Toy const &d) : Object(d.getTitle())
{
}

Toy::Toy() : Object()
{
}

Toy::~Toy()
{
}

//-----------------------------------//

void Toy::isTaken() const 
{
}

void Toy::wrapMeThat(Object *)
{
}

void Toy::openMe()
{
}

void Toy::closeMe()
{
}
