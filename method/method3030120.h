#ifndef METHOD3030120_H
#define METHOD3030120_H
#include "method.h"

class Ground;
class Item;
class Method3030120 : public Method
{
public:
    Method3030120();
    virtual ~Method3030120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3030120_H
