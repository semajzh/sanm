#ifndef METHOD0030120_H
#define METHOD0030120_H
#include "method.h"

class Ground;
class Item;
class Method0030120 : public Method
{
public:
    Method0030120();
    virtual ~Method0030120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0030120_H
