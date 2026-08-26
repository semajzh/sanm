#ifndef STRATEGY001740_H
#define STRATEGY001740_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001740 : public Strategy
{
public:
    Strategy001740();
    virtual ~Strategy001740();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001740_H
