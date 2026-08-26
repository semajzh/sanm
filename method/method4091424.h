#ifndef METHOD4091424_H
#define METHOD4091424_H
#include "method.h"

class Ground;
class Item;
class Method4091424 : public Method
{
public:
    Method4091424();
    virtual ~Method4091424();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4091424_H
