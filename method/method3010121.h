#ifndef METHOD3010121_H
#define METHOD3010121_H
#include "method.h"

class Ground;
class Item;
class Method3010121 : public Method
{
public:
    Method3010121();
    virtual ~Method3010121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3010121_H
