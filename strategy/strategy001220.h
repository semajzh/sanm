#ifndef STRATEGY001220_H
#define STRATEGY001220_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001220 : public Strategy
{
public:
    Strategy001220();
    virtual ~Strategy001220();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001220_H
