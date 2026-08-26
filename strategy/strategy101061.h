#ifndef STRATEGY101061_H
#define STRATEGY101061_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101061 : public Strategy
{
public:
    Strategy101061();
    virtual ~Strategy101061();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101061_H
