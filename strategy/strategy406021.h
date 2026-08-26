#ifndef STRATEGY406021_H
#define STRATEGY406021_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy406021 : public Strategy
{
public:
    Strategy406021();
    virtual ~Strategy406021();
    virtual bool run(Ground* ground, Item* item1);

private:
    QVector<int> selectObj(Ground* ground, int pos);
};

#endif // STRATEGY406021_H
