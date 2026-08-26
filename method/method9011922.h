#ifndef METHOD9011922_H
#define METHOD9011922_H
#include "method.h"

class Ground;
class Item;
class Method9011922 : public Method
{
public:
    Method9011922();
    virtual ~Method9011922();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD9011922_H
