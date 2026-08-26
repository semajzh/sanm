#ifndef METHOD0020120_H
#define METHOD0020120_H
#include "method.h"

class Ground;
class Item;
class Method0020120 : public Method
{
public:
    Method0020120();
    virtual ~Method0020120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0020120_H
