#ifndef METHOD1091222_H
#define METHOD1091222_H
#include "method.h"

class Ground;
class Item;
class Method1091222 : public Method
{
public:
    Method1091222();
    virtual ~Method1091222();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1091222_H
