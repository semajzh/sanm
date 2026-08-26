#ifndef METHOD3011422_H
#define METHOD3011422_H
#include "method.h"

class Ground;
class Item;
class Method3011422 : public Method
{
public:
    Method3011422();
    virtual ~Method3011422();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3011422_H
