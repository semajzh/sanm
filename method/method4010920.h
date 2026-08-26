#ifndef METHOD4010920_H
#define METHOD4010920_H
#include "method.h"

class Ground;
class Item;
class Method4010920 : public Method
{
public:
    Method4010920();
    virtual ~Method4010920();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4010920_H
