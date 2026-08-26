#ifndef METHOD0120321_H
#define METHOD0120321_H
#include "method.h"

class Ground;
class Item;
class Method0120321 : public Method
{
public:
    Method0120321();
    virtual ~Method0120321();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0120321_H
