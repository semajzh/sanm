#ifndef METHOD0150120_H
#define METHOD0150120_H
#include "method.h"

class Ground;
class Item;
class Method0150120 : public Method
{
public:
    Method0150120();
    virtual ~Method0150120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0150120_H
