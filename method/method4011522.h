#ifndef METHOD4011522_H
#define METHOD4011522_H
#include "method.h"

class Ground;
class Item;
class Method4011522 : public Method
{
public:
    Method4011522();
    virtual ~Method4011522();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4011522_H
