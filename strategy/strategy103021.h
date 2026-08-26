#ifndef STRATEGY103021_H
#define STRATEGY103021_H
#include "strategy.h"

class Ground;
class Item;
class Strategy103021 : public Strategy
{
public:
    Strategy103021();
    virtual ~Strategy103021();
    virtual bool run(Ground* ground, Item* item1);

private:
    QVector<int> selectObjrow(Ground* ground, int pos);
};

#endif // STRATEGY103021_H
