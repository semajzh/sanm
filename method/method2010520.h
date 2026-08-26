#ifndef METHOD2010520_H
#define METHOD2010520_H
#include "method.h"

class Ground;
class Item;
class Method2010520 : public Method
{
public:
    Method2010520();
    virtual ~Method2010520();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2010520_H
