#ifndef STRATEGY402011_H
#define STRATEGY402011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy402011 : public Strategy
{
public:
    Strategy402011();
    virtual ~Strategy402011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY402011_H
