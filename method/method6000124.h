#ifndef METHOD6000124_H
#define METHOD6000124_H
#include "method.h"

class Ground;
class Item;
class Method6000124 : public Method
{
public:
    Method6000124();
    virtual ~Method6000124();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD6000124_H
