#ifndef METHOD1100121_H
#define METHOD1100121_H
#include "method.h"

class Ground;
class Item;
class Method1100121 : public Method
{
public:
    Method1100121();
    virtual ~Method1100121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1100121_H
