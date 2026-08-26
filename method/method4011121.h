#ifndef METHOD4011121_H
#define METHOD4011121_H
#include "method.h"

class Ground;
class Item;
class Method4011121 : public Method
{
public:
    Method4011121();
    virtual ~Method4011121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4011121_H
