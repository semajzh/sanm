#ifndef METHOD4010520_H
#define METHOD4010520_H
#include "method.h"

class Ground;
class Item;
class Method4010520 : public Method
{
public:
    Method4010520();
    virtual ~Method4010520();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4010520_H
