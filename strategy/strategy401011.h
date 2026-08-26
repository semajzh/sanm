#ifndef STRATEGY401011_H
#define STRATEGY401011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401011 : public Strategy
{
public:
    Strategy401011();
    virtual ~Strategy401011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401011_H
