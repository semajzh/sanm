#ifndef METHOD3150121_H
#define METHOD3150121_H
#include "method.h"

class Ground;
class Item;
class Method3150121 : public Method
{
public:
    Method3150121();
    virtual ~Method3150121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3150121_H
