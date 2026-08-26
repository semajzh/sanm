#ifndef METHOD4070121_H
#define METHOD4070121_H
#include "method.h"

class Ground;
class Item;
class Method4070121 : public Method
{
public:
    Method4070121();
    virtual ~Method4070121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4070121_H
