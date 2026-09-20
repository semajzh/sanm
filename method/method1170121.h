#ifndef METHOD1170121_H
#define METHOD1170121_H
#include "method.h"

class Ground;
class Item;
class Method1170121 : public Method
{
public:
    Method1170121();
    virtual ~Method1170121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1170121_H
