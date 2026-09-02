#ifndef METHOD0016120_H
#define METHOD0016120_H
#include "method.h"

class Ground;
class Item;
class Method0016120 : public Method
{
public:
    Method0016120();
    virtual ~Method0016120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0016120_H
