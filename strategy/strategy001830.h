#ifndef STRATEGY001830_H
#define STRATEGY001830_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001830 : public Strategy
{
public:
    Strategy001830();
    virtual ~Strategy001830();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001830_H
