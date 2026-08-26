#ifndef METHOD1020221_H
#define METHOD1020221_H
#include "method.h"

class Ground;
class Item;
class Method1020221 : public Method
{
public:
    Method1020221();
    virtual ~Method1020221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1020221_H
