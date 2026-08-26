#ifndef METHOD1140121_H
#define METHOD1140121_H
#include "method.h"

class Ground;
class Item;
class Method1140121 : public Method
{
public:
    Method1140121();
    virtual ~Method1140121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1140121_H
