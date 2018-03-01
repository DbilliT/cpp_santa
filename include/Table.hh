#ifndef TABLE_
# define TABLE_

#include "ITable.hh"

class TablePePeNoel : public ITable
{
public:
  TablePePeNoel();
  virtual void Put(Object*);
  virtual Object* Take() const;
  virtual void collapse();
  void	setRtable(bool const &a);
  virtual std::string *Look() const;
protected:
  bool	_rtable;
  Object **_room;
};

ITable *createTable();

#endif
