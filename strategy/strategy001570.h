#ifndef STRATEGY001570_H
#define STRATEGY001570_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001570 : public Strategy
{
public:
    Strategy001570();
    virtual ~Strategy001570();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001570_H
