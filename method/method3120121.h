#ifndef METHOD3120121_H
#define METHOD3120121_H
#include "method.h"

class Ground;
class Item;
class Method3120121 : public Method
{
public:
    Method3120121();
    virtual ~Method3120121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3120121_H
