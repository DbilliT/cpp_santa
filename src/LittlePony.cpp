#include "LittlePony.hh"

LittlePony::LittlePony() : Toy("gay pony")
{
}

LittlePony::~LittlePony()
{
}

LittlePony::LittlePony(LittlePony const &d) : Toy(d.getTitle())
{
}

void LittlePony::isTaken() const
{
  std::cout << "yo man" << std::endl;
}

void LittlePony::wrapMeThat(Object *d)
{
  (void)d;
}

void LittlePony::openMe()
{
}

void LittlePony::closeMe()
{
}
