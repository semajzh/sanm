#ifndef STRATEGY001300_H
#define STRATEGY001300_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001300 : public Strategy
{
public:
    Strategy001300();
    virtual ~Strategy001300();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001300_H
