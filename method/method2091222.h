#ifndef METHOD2091222_H
#define METHOD2091222_H
#include "method.h"

class Ground;
class Item;
class Method2091222 : public Method
{
public:
    Method2091222();
    virtual ~Method2091222();
    virtual int getLuck(Ground* ground, Item* item1);
    virtual int run(Ground* ground, Item* item1);

private:
    int check20912222(Ground* ground, int obj);
};

#endif // METHOD2091222_H
