#ifndef STRATEGY401151_H
#define STRATEGY401151_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401151 : public Strategy
{
public:
    Strategy401151();
    virtual ~Strategy401151();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401151_H
