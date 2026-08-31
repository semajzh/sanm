#ifndef METHOD0015621_H
#define METHOD0015621_H
#include "method.h"

class Ground;
class Item;
class Method0015621 : public Method
{
public:
    Method0015621();
    virtual ~Method0015621();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0015621_H
