#ifndef STRATEGY407021_H
#define STRATEGY407021_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy407021 : public Strategy
{
public:
    Strategy407021();
    virtual ~Strategy407021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY407021_H
