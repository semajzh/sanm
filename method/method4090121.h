#ifndef METHOD4090121_H
#define METHOD4090121_H
#include "method.h"

class Ground;
class Item;
class Method4090121 : public Method
{
public:
    Method4090121();
    virtual ~Method4090121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4090121_H
