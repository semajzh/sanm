#ifndef STRATEGY001860_H
#define STRATEGY001860_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001860 : public Strategy
{
public:
    Strategy001860();
    virtual ~Strategy001860();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001860_H
