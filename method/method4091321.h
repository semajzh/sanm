#ifndef METHOD4091321_H
#define METHOD4091321_H
#include "method.h"

class Ground;
class Item;
class Method4091321 : public Method
{
public:
    Method4091321();
    virtual ~Method4091321();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4091321_H
