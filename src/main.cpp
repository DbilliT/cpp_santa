#include "GiftPaper.hh"
#include "Box.hh"
#include "LittlePony.hh"
#include "Object.hh"
#include "Teddy.hh"
#include "Toy.hh"
#include "Wrap.hh"
#include "Table.hh"
#include "ConveyorBelt.hh"
#include "ElfOfPePeNoel.hh"

int main()
{
  Toy *test = new LittlePony();
  ITable *pedale = new TablePePeNoel();
  IConveyorBelt *bechode = new ConveyorBeltPePeNoel();

  Object **obj = test->MyUnitTests();
  std::cout << *obj[0] << std::endl;
  Object *obj2[3];
  obj2[0] = new Teddy();
  obj2[1] = new Box();
  obj2[2] = new GiftPaper();
  std::cout << *test->MyUnitTests(obj2) << std::endl;
  std::cout << *pedale->Take() << std::endl;
  std::string *SA = pedale->Look();
  int i = 0;
  while (SA[i] != "")
    {
      std::cout << SA[i] << std::endl;
      i++;
    }
  bechode->IN();
  bechode->IN();
  std::cout << bechode->Look() << std::endl;
  bechode->OUT();
  bechode->OUT();
  pedale->Put(new LittlePony());
  pedale->Put(new LittlePony());
  pedale->Put(new LittlePony());
  pedale->Put(new LittlePony());
  pedale->Put(new LittlePony());
  pedale->Put(new LittlePony());
  pedale->Put(new LittlePony());
  pedale->Put(new LittlePony());
  pedale->Put(new LittlePony());
  SA = pedale->Look();
  i = 0;
  while (SA[i] != "")
    {
      std::cout << SA[i] << std::endl;
      i++;
    }
  pedale->Put(new LittlePony());
  pedale->Put(new LittlePony());
  IElf *test2 = new ElfOfPePeNoel();
  test2->TableTake();
  test2->PIN();
  test2->PIN();
  test2->TablePut();
  test2->ConvTake();
}
