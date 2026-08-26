#ifndef STRATEGY999999_H
#define STRATEGY999999_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy999999 : public Strategy
{
public:
    Strategy999999();
    virtual ~Strategy999999();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY999999_H
