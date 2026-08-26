#ifndef STRATEGY303011_H
#define STRATEGY303011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy303011 : public Strategy
{
public:
    Strategy303011();
    virtual ~Strategy303011();
    virtual bool run(Ground* ground, Item* item1);

private:
    QVector<int> selectObj(Ground* ground, int obj);
};

#endif // STRATEGY303011_H
