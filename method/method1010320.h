#ifndef METHOD1010320_H
#define METHOD1010320_H
#include "method.h"

class Ground;
class Item;
class Method1010320 : public Method
{
public:
    Method1010320();
    virtual ~Method1010320();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1010320_H
