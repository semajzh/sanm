#ifndef METHOD0020621_H
#define METHOD0020621_H
#include "method.h"

class Ground;
class Item;
class Method0020621 : public Method
{
public:
    Method0020621();
    virtual ~Method0020621();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0020621_H
