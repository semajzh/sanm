#ifndef METHOD2011120_H
#define METHOD2011120_H
#include "method.h"

class Ground;
class Item;
class Method2011120 : public Method
{
public:
    Method2011120();
    virtual ~Method2011120();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2011120_H
