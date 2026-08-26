#ifndef METHOD4070221_H
#define METHOD4070221_H
#include "method.h"

class Ground;
class Item;
class Method4070221 : public Method
{
public:
    Method4070221();
    virtual ~Method4070221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4070221_H
