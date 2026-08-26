#ifndef STRATEGY401022_H
#define STRATEGY401022_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401022 : public Strategy
{
public:
    Strategy401022();
    virtual ~Strategy401022();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401022_H
