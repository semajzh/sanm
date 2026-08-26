#ifndef METHOD9070124_H
#define METHOD9070124_H
#include "method.h"

class Ground;
class Item;
class Method9070124 : public Method
{
public:
    Method9070124();
    virtual ~Method9070124();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD9070124_H
