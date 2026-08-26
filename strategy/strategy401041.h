#ifndef STRATEGY401041_H
#define STRATEGY401041_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401041 : public Strategy
{
public:
    Strategy401041();
    virtual ~Strategy401041();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401041_H
