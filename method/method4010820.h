#ifndef METHOD4010820_H
#define METHOD4010820_H
#include "method.h"

class Ground;
class Item;
class Method4010820 : public Method
{
public:
    Method4010820();
    virtual ~Method4010820();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4010820_H
