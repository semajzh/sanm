#ifndef STRATEGY001560_H
#define STRATEGY001560_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001560 : public Strategy
{
public:
    Strategy001560();
    virtual ~Strategy001560();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001560_H
