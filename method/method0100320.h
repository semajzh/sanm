#ifndef METHOD0100320_H
#define METHOD0100320_H
#include "method.h"

class Ground;
class Item;
class Method0100320 : public Method
{
public:
    Method0100320();
    virtual ~Method0100320();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0100320_H
