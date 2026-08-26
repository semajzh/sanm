#ifndef METHOD1010821_H
#define METHOD1010821_H
#include "method.h"

class Ground;
class Item;
class Method1010821 : public Method
{
public:
    Method1010821();
    virtual ~Method1010821();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1010821_H
