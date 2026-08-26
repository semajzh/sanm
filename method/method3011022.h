#ifndef METHOD3011022_H
#define METHOD3011022_H
#include "method.h"

class Ground;
class Item;
class Method3011022 : public Method
{
public:
    Method3011022();
    virtual ~Method3011022();
    virtual int getLuck(Ground* ground, Item* item1);
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3011022_H
