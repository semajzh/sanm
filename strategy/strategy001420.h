#ifndef STRATEGY001420_H
#define STRATEGY001420_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001420 : public Strategy
{
public:
    Strategy001420();
    virtual ~Strategy001420();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001420_H
