#ifndef METHOD3080122_H
#define METHOD3080122_H
#include "method.h"

class Ground;
class Item;
class Method3080122 : public Method
{
public:
    Method3080122();
    virtual ~Method3080122();
    virtual int getLuck(Ground* ground, Item* item1);
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3080122_H
