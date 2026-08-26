#ifndef METHOD1010121_H
#define METHOD1010121_H
#include "method.h"

class Ground;
class Item;
class Method1010121 : public Method
{
public:
    Method1010121();
    virtual ~Method1010121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1010121_H
