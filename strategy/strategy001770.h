#ifndef STRATEGY001770_H
#define STRATEGY001770_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001770 : public Strategy
{
public:
    Strategy001770();
    virtual ~Strategy001770();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001770_H
