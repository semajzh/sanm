#ifndef STRATEGY001460_H
#define STRATEGY001460_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001460 : public Strategy
{
public:
    Strategy001460();
    virtual ~Strategy001460();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001460_H
