#ifndef METHOD6000120_H
#define METHOD6000120_H
#include "method.h"

class Ground;
class Item;
class Method6000120 : public Method
{
public:
    Method6000120();
    virtual ~Method6000120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD6000120_H
