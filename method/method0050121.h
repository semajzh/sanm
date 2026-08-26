#ifndef METHOD0050121_H
#define METHOD0050121_H
#include "method.h"

class Ground;
class Item;
class Method0050121 : public Method
{
public:
    Method0050121();
    virtual ~Method0050121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0050121_H
