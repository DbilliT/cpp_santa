#include "ConveyorBelt.hh"
#include "GiftPaper.hh"
#include "Box.hh"


ConveyorBeltPePeNoel::ConveyorBeltPePeNoel() : _room()
{
}

void ConveyorBeltPePeNoel::Put(Object* d)
{
  if (d != NULL)
    {
      if (_room == NULL)
	_room = d;
      else
	std::cerr << "only one object on the ConveyorBelt." << std::endl;
    }
  else
    {
      std::cerr << "stupid elf you'r trying to put nothing on the Belt, damn morrown !!!!!!!" << std::endl;
    }
}


Object* ConveyorBeltPePeNoel::Take()
{
  Object *tmp;

  if (_room == NULL)
    std::cerr << "You cannot take an object on the ConveyorBelt, if there is no object." << std::endl;
  else
    {
      tmp = _room;
      _room = NULL;
    }
  return tmp;
}

std::string ConveyorBeltPePeNoel::Look() const
{
  std::string tmp;

  if (_room != NULL)
    tmp = _room->getTitle();
  else
    std::cerr << "no object" << std::endl;
  return tmp;
}

void ConveyorBeltPePeNoel::OUT()
{
  if (_room == NULL)
    std::cerr << "no object, so you cannot use OUT (gtfo)" << std::endl;
  else
    {
      delete _room;
      _room = NULL;
    }
}

void ConveyorBeltPePeNoel::IN()
{
  static int i = 0;

  if (_room == NULL)
    {
      if (i == 0)
	{
	  _room = new Box();
	  i = 1;
	}
      else
	{
	  _room = new GiftPaper();
	  i = 0;
	}
    }
  else
    std::cerr << "There is already something on the conveyor belt" << std::endl;
}

IConveyorBelt *createConveyorBelt()
{
  IConveyorBelt *n = new ConveyorBeltPePeNoel();
  return (n);
}
