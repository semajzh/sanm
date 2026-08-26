#ifndef METHOD4040121_H
#define METHOD4040121_H
#include "method.h"

class Ground;
class Item;
class Method4040121 : public Method
{
public:
    Method4040121();
    virtual ~Method4040121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4040121_H
