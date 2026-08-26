#ifndef STRATEGY407022_H
#define STRATEGY407022_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy407022 : public Strategy
{
public:
    Strategy407022();
    virtual ~Strategy407022();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY407022_H
