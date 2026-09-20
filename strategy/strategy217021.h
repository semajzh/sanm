#ifndef STRATEGY217021_H
#define STRATEGY217021_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy217021 : public Strategy
{
public:
    Strategy217021();
    virtual ~Strategy217021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY217021_H
