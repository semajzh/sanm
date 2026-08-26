#ifndef STRATEGY001780_H
#define STRATEGY001780_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001780 : public Strategy
{
public:
    Strategy001780();
    virtual ~Strategy001780();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001780_H
