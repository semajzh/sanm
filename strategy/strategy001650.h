#ifndef STRATEGY001650_H
#define STRATEGY001650_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001650 : public Strategy
{
public:
    Strategy001650();
    virtual ~Strategy001650();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001650_H
