#ifndef METHOD2020124_H
#define METHOD2020124_H
#include "method.h"

class Ground;
class Item;
class Method2020124 : public Method
{
public:
    Method2020124();
    virtual ~Method2020124();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2020124_H
