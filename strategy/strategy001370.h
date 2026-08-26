#ifndef STRATEGY001370_H
#define STRATEGY001370_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001370 : public Strategy
{
public:
    Strategy001370();
    virtual ~Strategy001370();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001370_H
