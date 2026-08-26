#ifndef METHOD0040424_H
#define METHOD0040424_H
#include "method.h"

class Ground;
class Item;
class Method0040424 : public Method
{
public:
    Method0040424();
    virtual ~Method0040424();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0040424_H
