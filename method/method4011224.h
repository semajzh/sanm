#ifndef METHOD4011224_H
#define METHOD4011224_H
#include "method.h"

class Ground;
class Item;
class Method4011224 : public Method
{
public:
    Method4011224();
    virtual ~Method4011224();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4011224_H
