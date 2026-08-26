#ifndef STRATEGY404011_H
#define STRATEGY404011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy404011 : public Strategy
{
public:
    Strategy404011();
    virtual ~Strategy404011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY404011_H
