#ifndef METHOD2050121_H
#define METHOD2050121_H
#include "method.h"

class Ground;
class Item;
class Method2050121 : public Method
{
public:
    Method2050121();
    virtual ~Method2050121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2050121_H
