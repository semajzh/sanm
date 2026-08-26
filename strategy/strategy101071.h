#ifndef STRATEGY101071_H
#define STRATEGY101071_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101071 : public Strategy
{
public:
    Strategy101071();
    virtual ~Strategy101071();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101071_H
