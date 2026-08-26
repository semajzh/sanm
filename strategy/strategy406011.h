#ifndef STRATEGY406011_H
#define STRATEGY406011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy406011 : public Strategy
{
public:
    Strategy406011();
    virtual ~Strategy406011();
    virtual bool run(Ground* ground, Item* item1);

private:
    QVector<int> selectObj(Ground* ground, int pos);
};

#endif // STRATEGY406011_H
