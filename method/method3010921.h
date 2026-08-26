#ifndef METHOD3010921_H
#define METHOD3010921_H
#include "method.h"

class Ground;
class Item;
class Method3010921 : public Method
{
public:
    Method3010921();
    virtual ~Method3010921();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3010921_H
