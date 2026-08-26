#ifndef METHOD1091421_H
#define METHOD1091421_H
#include "method.h"

class Ground;
class Item;
class Method1091421 : public Method
{
public:
    Method1091421();
    virtual ~Method1091421();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1091421_H
