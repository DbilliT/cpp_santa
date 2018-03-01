#include "Wrap.hh"

Wrap::Wrap() : Object(), _fulfill(false), _open(true)
{
}

Wrap::Wrap(Wrap const &d) : Object(d.getTitle())
{
  this->_fulfill = d._fulfill;
  this->_open = d._open;
}

Wrap::Wrap(std::string const &title, bool full, bool open) : Object(title), _fulfill(full), _open(open)
{
}
Wrap::~Wrap()
{
}

void Wrap::wrapMeThat(Object *d)
{
  (void)d;
}

bool Wrap::getFulfill() const {return(this->_fulfill);}
bool Wrap::getOpen() const {return(this->_open);}

void Wrap::isTaken() const
{
}

void Wrap::openMe()
{
}

void Wrap::closeMe()
{
}
