#ifndef STRATEGY001870_H
#define STRATEGY001870_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001870 : public Strategy
{
public:
    Strategy001870();
    virtual ~Strategy001870();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001870_H
