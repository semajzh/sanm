#ifndef STRATEGY205011_H
#define STRATEGY205011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy205011 : public Strategy
{
public:
    Strategy205011();
    virtual ~Strategy205011();
    virtual bool run(Ground* ground, Item* item1);

private:
    QVector<int> selectObjFaction(Ground* ground, int pos);
};

#endif // STRATEGY205011_H
