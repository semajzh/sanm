#ifndef STRATEGY409011_H
#define STRATEGY409011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy409011 : public Strategy
{
public:
    Strategy409011();
    virtual ~Strategy409011();
    virtual bool run(Ground* ground, Item* item1);

private:
    QVector<int> selectobj(Ground* ground, int obj);
};

#endif // STRATEGY409011_H
