#ifndef STRATEGY001850_H
#define STRATEGY001850_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001850 : public Strategy
{
public:
    Strategy001850();
    virtual ~Strategy001850();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001850_H
