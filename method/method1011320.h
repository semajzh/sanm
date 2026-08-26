#ifndef METHOD1011320_H
#define METHOD1011320_H
#include "method.h"

class Ground;
class Item;
class Method1011320 : public Method
{
public:
    Method1011320();
    virtual ~Method1011320();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1011320_H
