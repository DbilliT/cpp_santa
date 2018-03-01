#include "Teddy.hh"

Teddy::Teddy() : Toy("bisounours")
{
}

Teddy::Teddy(Teddy const &d) : Toy(d.getTitle())
{
}

Teddy::~Teddy()
{
}

void Teddy::isTaken() const
{
  std::cout << "gra hu" << std::endl;
}

void Teddy::wrapMeThat(Object *)
{
}

void Teddy::openMe()
{
}

void Teddy::closeMe()
{
}
