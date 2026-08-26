#ifndef METHOD2020222_H
#define METHOD2020222_H
#include "method.h"

class Ground;
class Item;
class Method2020222 : public Method
{
public:
    Method2020222();
    virtual ~Method2020222();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2020222_H
