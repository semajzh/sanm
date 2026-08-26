#ifndef METHOD4070322_H
#define METHOD4070322_H
#include "method.h"

class Ground;
class Item;
class Method4070322 : public Method
{
public:
    Method4070322();
    virtual ~Method4070322();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4070322_H
