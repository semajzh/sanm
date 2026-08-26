#ifndef METHOD3011122_H
#define METHOD3011122_H
#include "method.h"

class Ground;
class Item;
class Method3011122 : public Method
{
public:
    Method3011122();
    virtual ~Method3011122();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3011122_H
