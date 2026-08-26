#ifndef METHOD3091220_H
#define METHOD3091220_H
#include "method.h"

class Ground;
class Item;
class Method3091220 : public Method
{
public:
    Method3091220();
    virtual ~Method3091220();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3091220_H
