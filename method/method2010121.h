#ifndef METHOD2010121_H
#define METHOD2010121_H
#include "method.h"

class Ground;
class Item;
class Method2010121 : public Method
{
public:
    Method2010121();
    virtual ~Method2010121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2010121_H
