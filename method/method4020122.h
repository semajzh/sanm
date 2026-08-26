#ifndef METHOD4020122_H
#define METHOD4020122_H
#include "method.h"

class Ground;
class Item;
class Method4020122 : public Method
{
public:
    Method4020122();
    virtual ~Method4020122();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4020122_H
