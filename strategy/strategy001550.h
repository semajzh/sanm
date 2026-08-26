#ifndef STRATEGY001550_H
#define STRATEGY001550_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001550 : public Strategy
{
public:
    Strategy001550();
    virtual ~Strategy001550();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001550_H
