#ifndef METHOD4010121_H
#define METHOD4010121_H
#include "method.h"

class Ground;
class Item;
class Method4010121 : public Method
{
public:
    Method4010121();
    virtual ~Method4010121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4010121_H
