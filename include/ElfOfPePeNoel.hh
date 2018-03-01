//
// ElfOfPePeNoel.hh for EPOzeijdhioaz in /home/bechad_p/cpp_santa/monTruckDeNoob
// 
// Made by Pierre Bechade
// Login   <bechad_p@epitech.net>
// 
// Started on  Sat Jan 17 21:49:32 2015 Pierre Bechade
// Last update Sun Jan 18 02:40:08 2015 Alexandre Tanyeres
//

#ifndef ELFOFPEPENOEL_HH_
# define ELFOFPEPENOEL_HH_

#include "IElf.hh"
//#include "Table.hh"
//#include "ConveyorBelt.hh"

class ElfOfPePeNoel : public IElf
{
public:
  ElfOfPePeNoel();
  virtual void  TableTake();
  virtual void  TablePut();
  virtual void  ConvTake();
  virtual void ConvPut();
  virtual void Wrap(Object *obj) const;
  virtual void OpenMe() const;
  virtual void CloseMe() const;
  virtual void TableLook() const;
  virtual void ConvLook() const;
  virtual void PIN() const;
  virtual void POUT() const;
protected:
  Object *_obj;
  ITable *_table;
  IConveyorBelt *_conv;
};

#endif
