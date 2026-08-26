#ifndef STRATEGY101032_H
#define STRATEGY101032_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101032 : public Strategy
{
public:
    Strategy101032();
    virtual ~Strategy101032();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101032_H
