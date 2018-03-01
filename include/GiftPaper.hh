#ifndef GIFTPAPER_H_
#define GIFTPAPER_H_

#include "Box.hh"

class GiftPaper : public Wrap
{
protected:
  Box *_box;
public:
  GiftPaper();
  GiftPaper(GiftPaper const &d);
  virtual void isTaken() const;
  virtual ~GiftPaper();
  virtual void wrapMeThat(Box *);
  virtual void openMe();
  virtual void closeMe();
};

#endif
