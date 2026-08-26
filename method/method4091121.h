#ifndef METHOD4091121_H
#define METHOD4091121_H
#include "method.h"

class Ground;
class Item;
class Method4091121 : public Method
{
public:
    Method4091121();
    virtual ~Method4091121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4091121_H
