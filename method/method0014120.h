#ifndef METHOD0014120_H
#define METHOD0014120_H
#include "method.h"

class Ground;
class Item;
class Method0014120 : public Method
{
public:
    Method0014120();
    virtual ~Method0014120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0014120_H
