#ifndef STRATEGY001080_H
#define STRATEGY001080_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001080 : public Strategy
{
public:
    Strategy001080();
    virtual ~Strategy001080();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001080_H
