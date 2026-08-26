#ifndef METHOD4060121_H
#define METHOD4060121_H
#include "method.h"

class Ground;
class Item;
class Method4060121 : public Method
{
public:
    Method4060121();
    virtual ~Method4060121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4060121_H
