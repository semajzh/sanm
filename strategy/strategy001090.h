#ifndef STRATEGY001090_H
#define STRATEGY001090_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001090 : public Strategy
{
public:
    Strategy001090();
    virtual ~Strategy001090();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001090_H
