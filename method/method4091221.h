#ifndef METHOD4091221_H
#define METHOD4091221_H
#include "method.h"

class Ground;
class Item;
class Method4091221 : public Method
{
public:
    Method4091221();
    virtual ~Method4091221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4091221_H
