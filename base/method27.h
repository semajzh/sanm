#ifndef METHOD9999999_H
#define METHOD9999999_H
#include "method.h"

class Ground;
class Item;
class Method9999999 : public ZBMethod
{
public:
    Method9999922();
    virtual ~Method9999999();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD9999922_H
