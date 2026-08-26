#ifndef METHOD0013624_H
#define METHOD0013624_H
#include "method.h"

class Ground;
class Item;
class Method0013624 : public Method
{
public:
    Method0013624();
    virtual ~Method0013624();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0013624_H
