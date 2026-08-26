#ifndef METHOD3010820_H
#define METHOD3010820_H
#include "method.h"

class Ground;
class Item;
class Method3010820 : public Method
{
public:
    Method3010820();
    virtual ~Method3010820();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3010820_H
