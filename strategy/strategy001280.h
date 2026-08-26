#ifndef STRATEGY001280_H
#define STRATEGY001280_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001280 : public Strategy
{
public:
    Strategy001280();
    virtual ~Strategy001280();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001280_H
