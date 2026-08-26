#ifndef METHOD0020520_H
#define METHOD0020520_H
#include "method.h"

class Ground;
class Item;
class Method0020520 : public Method
{
public:
    Method0020520();
    virtual ~Method0020520();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0020520_H
