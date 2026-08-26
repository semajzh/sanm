#ifndef STRATEGY101121_H
#define STRATEGY101121_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101121 : public Strategy
{
public:
    Strategy101121();
    virtual ~Strategy101121();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101121_H
