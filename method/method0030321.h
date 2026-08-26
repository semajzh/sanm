#ifndef METHOD0030321_H
#define METHOD0030321_H
#include "method.h"

class Ground;
class Item;
class Method0030321 : public Method
{
public:
    Method0030321();
    virtual ~Method0030321();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0030321_H
