#ifndef METHOD4130220_H
#define METHOD4130220_H
#include "method.h"

class Ground;
class Item;
class Method4130220 : public Method
{
public:
    Method4130220();
    virtual ~Method4130220();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4130220_H
