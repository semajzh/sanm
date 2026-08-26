#ifndef METHOD0010822_H
#define METHOD0010822_H
#include "method.h"

class Ground;
class Item;
class Method0010822 : public Method
{
public:
    Method0010822();
    virtual ~Method0010822();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0010822_H
