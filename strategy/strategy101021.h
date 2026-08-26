#ifndef STRATEGY101021_H
#define STRATEGY101021_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101021 : public Strategy
{
public:
    Strategy101021();
    virtual ~Strategy101021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101021_H
