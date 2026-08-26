#ifndef METHOD3010621_H
#define METHOD3010621_H
#include "method.h"

class Ground;
class Item;
class Method3010621 : public Method
{
public:
    Method3010621();
    virtual ~Method3010621();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3010621_H
