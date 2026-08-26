#ifndef STRATEGY001250_H
#define STRATEGY001250_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001250 : public Strategy
{
public:
    Strategy001250();
    virtual ~Strategy001250();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001250_H
