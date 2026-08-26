#ifndef STRATEGY001710_H
#define STRATEGY001710_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001710 : public Strategy
{
public:
    Strategy001710();
    virtual ~Strategy001710();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001710_H
