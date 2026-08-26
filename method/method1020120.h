#ifndef METHOD1020120_H
#define METHOD1020120_H
#include "method.h"

class Ground;
class Item;
class Method1020120 : public Method
{
public:
    Method1020120();
    virtual ~Method1020120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1020120_H
