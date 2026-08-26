#ifndef METHOD0011422_H
#define METHOD0011422_H
#include "method.h"

class Ground;
class Item;
class Method0011422 : public Method
{
public:
    Method0011422();
    virtual ~Method0011422();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0011422_H
