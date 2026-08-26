#ifndef METHOD0090222_H
#define METHOD0090222_H
#include "method.h"

class Ground;
class Item;
class Method0090222 : public Method
{
public:
    Method0090222();
    virtual ~Method0090222();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0090222_H
