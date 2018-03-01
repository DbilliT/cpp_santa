#include "GiftPaper.hh"

GiftPaper::GiftPaper() : Wrap("GiftPaper", false, true), _box()
{
}

GiftPaper::GiftPaper(GiftPaper const &d) : Wrap("GiftPaper", d._fulfill, d._open), _box(d._box)
{
}

GiftPaper::~GiftPaper()
{
}

void GiftPaper::wrapMeThat(Box *d)
{
  if (this->_fulfill == false)
    {
      if (d != NULL)
	{
	  if (d->getFulfill() == true && d->getOpen() == false)
	    this->_box = d;
	  else
	    std::cout << "The box is empty or open" << std::endl;
	}
    }
  else
    std::cout << "There is already an object into the box" << std::endl;
}

void GiftPaper::closeMe()
{
  this->_open = false;
}

void GiftPaper::openMe()
{
  this->_open = true;
}

void GiftPaper::isTaken() const
{
}
