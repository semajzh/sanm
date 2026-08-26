#ifndef METHOD3011221_H
#define METHOD3011221_H
#include "method.h"

class Ground;
class Item;
class Method3011221 : public Method
{
public:
    Method3011221();
    virtual ~Method3011221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3011221_H
