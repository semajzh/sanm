#ifndef STRATEGY500006_H
#define STRATEGY500006_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy500006 : public Strategy
{
public:
    Strategy500006();
    virtual ~Strategy500006();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY500006_H
