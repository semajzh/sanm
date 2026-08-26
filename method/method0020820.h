#ifndef METHOD0020820_H
#define METHOD0020820_H
#include "method.h"

class Ground;
class Item;
class Method0020820 : public Method
{
public:
    Method0020820();
    virtual ~Method0020820();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0020820_H
