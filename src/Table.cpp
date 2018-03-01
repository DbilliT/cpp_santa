#include "Table.hh"
#include "LittlePony.hh"
#include "Teddy.hh"

TablePePeNoel::TablePePeNoel() : _rtable(true), _room(new Object*[10])
{
  _room[0] = new LittlePony();
  _room[1] = new Teddy();
}


void TablePePeNoel::collapse()
{
  std::cout << "CRAAAACK... OH god the table is broken !" << std::endl;
  int i = 0;
  while (i != 10 && _room[i] != NULL)
    {
      delete _room[i];
      i++;
      //std::cout << "a" << std::endl;
    }
  this->setRtable(false);
  //delete this;
}

void TablePePeNoel::Put(Object* d)
{
  int i = 0;

  if (_rtable != false)
    {
      while (i != 10 && _room[i] != NULL)
	{
	  i++;
	}
      if (i == 10)
	{
	  collapse();
	}
      else
	_room[i] = d;
    }
  else
    std::cerr << "FURODAH in da table! (table broken)" << std::endl;
}

Object* TablePePeNoel::Take() const
{
  int i = 0;
  if (_rtable != false)
    {
      while (i != 10 && _room[i] != NULL)
	{
	  i++;
	}
      i--;
      Object *tmp = _room[i];
      _room[i] = NULL;
      return(tmp);
    }
  else
    {
      std::cerr << "no table" << std::endl;
    }
  return (NULL);
}

void	TablePePeNoel::setRtable(bool const &a)
{
  this->_rtable = a;
}

std::string *TablePePeNoel::Look() const
{
  int i = 0;

  if (_rtable != false)
    {
      while (i < 10 && _room[i] != NULL)
	{
	  i++;
	}
      i++;
      std::string *tab = new std::string[i + 1];
      i = 0;
      while (i < 10 && _room[i] != NULL)
	{
	  tab[i] = _room[i]->getTitle();
	  i++;
	}
      return(tab);
    }
  else
    std::cerr << "no table" << std::endl;
  return (NULL);
}

ITable *createTable()
{
  ITable *n = new TablePePeNoel();
  return (n);
}
