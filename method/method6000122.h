#ifndef METHOD6000122_H
#define METHOD6000122_H
#include "method.h"

class Ground;
class Item;
class Method6000122 : public Method
{
public:
    Method6000122();
    virtual ~Method6000122();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD6000122_H
