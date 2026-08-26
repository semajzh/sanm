#ifndef METHOD0110120_H
#define METHOD0110120_H
#include "method.h"

class Ground;
class Item;
class Method0110120 : public Method
{
public:
    Method0110120();
    virtual ~Method0110120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0110120_H
