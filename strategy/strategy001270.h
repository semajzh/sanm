#ifndef STRATEGY001270_H
#define STRATEGY001270_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001270 : public Strategy
{
public:
    Strategy001270();
    virtual ~Strategy001270();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001270_H
