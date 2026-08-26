#ifndef METHOD3010520_H
#define METHOD3010520_H
#include "method.h"

class Ground;
class Item;
class Method3010520 : public Method
{
public:
    Method3010520();
    virtual ~Method3010520();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3010520_H
