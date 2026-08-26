#ifndef METHOD0011121_H
#define METHOD0011121_H
#include "method.h"

class Ground;
class Item;
class Method0011121 : public Method
{
public:
    Method0011121();
    virtual ~Method0011121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0011121_H
