#ifndef METHOD0020222_H
#define METHOD0020222_H
#include "method.h"

class Ground;
class Item;
class Method0020222 : public Method
{
public:
    Method0020222();
    virtual ~Method0020222();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0020222_H
