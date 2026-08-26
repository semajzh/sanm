#ifndef STRATEGY407031_H
#define STRATEGY407031_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy407031 : public Strategy
{
public:
    Strategy407031();
    virtual ~Strategy407031();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY407031_H
