#ifndef METHOD0100120_H
#define METHOD0100120_H
#include "method.h"

class Ground;
class Item;
class Method0100120 : public Method
{
public:
    Method0100120();
    virtual ~Method0100120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0100120_H
