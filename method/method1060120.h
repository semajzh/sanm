#ifndef METHOD1060120_H
#define METHOD1060120_H
#include "method.h"

class Ground;
class Item;
class Method1060120 : public Method
{
public:
    Method1060120();
    virtual ~Method1060120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1060120_H
