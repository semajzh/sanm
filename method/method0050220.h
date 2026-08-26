#ifndef METHOD0050220_H
#define METHOD0050220_H
#include "method.h"

class Ground;
class Item;
class Method0050220 : public Method
{
public:
    Method0050220();
    virtual ~Method0050220();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0050220_H
