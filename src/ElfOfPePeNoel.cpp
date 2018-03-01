#include "ElfOfPePeNoel.hh"
#include "Table.hh"

ElfOfPePeNoel::ElfOfPePeNoel() : _obj(), _table(createTable()), _conv(createConveyorBelt())
{
}

void  ElfOfPePeNoel::TableTake()
{
  if (_table == NULL)
    {
      std::cout << "whistles while working" << std::endl;
      _obj = _table->Take();
    }
}

void	ElfOfPePeNoel::TablePut()
{
  if (_obj != NULL && _table != NULL)
    {
      _table->Put(_obj);
      _obj = NULL;
    }
}

void ElfOfPePeNoel::ConvTake()
{
  if (_obj == NULL)
    {
      std::cout << "whistles while working" << std::endl;
      _obj = _conv->Take();
    }
}

void ElfOfPePeNoel::ConvPut()
{
  if (_obj != NULL)
    {
      _conv->Put(_obj);
      _obj = NULL;
    }
}

void  ElfOfPePeNoel::Wrap(Object *obj) const
{
  if (_obj != NULL)
    {
      std::cout << "tuuuut tuuut tuut" << std::endl;
      _obj->wrapMeThat(obj);
    }
}

void	ElfOfPePeNoel::OpenMe() const
{
  if (_obj != NULL)
    this->_obj->openMe();
}

void	ElfOfPePeNoel::CloseMe() const
{
  if (_obj != NULL)
    this->_obj->closeMe();
}

void	ElfOfPePeNoel::TableLook() const
{
  if (_table != NULL)
    {
      std::string *look = _table->Look();
      int i = 0;
      
      std::cout << "There is on the table :";
      while(look[i] != "")
	{
	  std::cout << look[i] << " ";
	}
      std::cout << std::endl;
    }
  std::cout << "There is nothing on the table" << std::endl;
}

void ElfOfPePeNoel::ConvLook() const
{
  if (this->_conv != NULL)
    {
      std::cout << "There is on the conveyor belt : " << this->_conv->Look() << std::endl;
    }
  std::cout << "There is nothing on the conveyor belt" << std::endl;
}

void ElfOfPePeNoel::PIN() const
{
  if (_conv != NULL)
    this->_conv->IN();
}

void ElfOfPePeNoel::POUT() const
{
  if (_conv != NULL)
    this->_conv->OUT();
}
