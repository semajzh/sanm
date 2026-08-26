#ifndef STRATEGY411021_H
#define STRATEGY411021_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy411021 : public Strategy
{
public:
    Strategy411021();
    virtual ~Strategy411021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY411021_H
