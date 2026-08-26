#ifndef STRATEGY001590_H
#define STRATEGY001590_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001590 : public Strategy
{
public:
    Strategy001590();
    virtual ~Strategy001590();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001590_H
