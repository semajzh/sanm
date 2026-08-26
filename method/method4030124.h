#ifndef METHOD4030124_H
#define METHOD4030124_H
#include "method.h"

class Ground;
class Item;
class Method4030124 : public Method
{
public:
    Method4030124();
    virtual ~Method4030124();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4030124_H
