#ifndef METHOD3091120_H
#define METHOD3091120_H
#include "method.h"

class Ground;
class Item;
class Method3091120 : public Method
{
public:
    Method3091120();
    virtual ~Method3091120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3091120_H
