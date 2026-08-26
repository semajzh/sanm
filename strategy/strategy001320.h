#ifndef STRATEGY001320_H
#define STRATEGY001320_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001320 : public Strategy
{
public:
    Strategy001320();
    virtual ~Strategy001320();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001320_H
