#ifndef METHOD2040120_H
#define METHOD2040120_H
#include "method.h"

class Ground;
class Item;
class Method2040120 : public Method
{
public:
    Method2040120();
    virtual ~Method2040120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2040120_H
