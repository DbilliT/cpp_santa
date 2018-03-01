//
// IElf.hh for IElf in /home/bechad_p/cpp_santa/monTruckDeNoob
// 
// Made by Pierre Bechade
// Login   <bechad_p@epitech.net>
// 
// Started on  Sat Jan 17 21:48:24 2015 Pierre Bechade
// Last update Sun Jan 18 02:39:29 2015 Alexandre Tanyeres
//

#ifndef IELF_HH_
# define IELF_HH_

#include "Object.hh"
#include "Table.hh"
#include "ConveyorBelt.hh"

class IElf
{
public:
  virtual ~IElf() {}
  virtual void	TableTake() = 0;
  virtual void	TablePut() = 0;
  virtual void	ConvTake() = 0;
  virtual void ConvPut() = 0;
  virtual void Wrap(Object *obj) const = 0;
  virtual void OpenMe() const = 0;
  virtual void CloseMe() const = 0;
  virtual void TableLook() const = 0;
  virtual void ConvLook() const = 0;
  virtual void PIN() const = 0;
  virtual void POUT() const = 0;
};

#endif 
