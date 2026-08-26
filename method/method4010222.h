#ifndef METHOD4010222_H
#define METHOD4010222_H
#include "method.h"

class Ground;
class Item;
class Method4010222 : public Method
{
public:
    Method4010222();
    virtual ~Method4010222();
    int getLuck(Ground* , Item* item1);
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4010222_H
