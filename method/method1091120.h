#ifndef METHOD1091120_H
#define METHOD1091120_H
#include "method.h"

class Ground;
class Item;
class Method1091120 : public Method
{
public:
    Method1091120();
    virtual ~Method1091120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1091120_H
