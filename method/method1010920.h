#ifndef METHOD1010920_H
#define METHOD1010920_H
#include "method.h"

class Ground;
class Item;
class Method1010920 : public Method
{
public:
    Method1010920();
    virtual ~Method1010920();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1010920_H
