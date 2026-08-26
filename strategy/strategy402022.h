#ifndef STRATEGY402022_H
#define STRATEGY402022_H
#include "strategy.h"

class Ground;
class Item;
class Strategy402022 : public Strategy
{
public:
    Strategy402022();
    virtual ~Strategy402022();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY402022_H
