#ifndef METHOD6000121_H
#define METHOD6000121_H
#include "method.h"

class Ground;
class Item;
class Method6000121 : public Method
{
public:
    Method6000121();
    virtual ~Method6000121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD6000121_H
