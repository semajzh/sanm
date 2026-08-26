#ifndef METHOD3090124_H
#define METHOD3090124_H
#include "method.h"

class Ground;
class Item;
class Method3090124 : public Method
{
public:
    Method3090124();
    virtual ~Method3090124();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3090124_H
