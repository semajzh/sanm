#ifndef METHOD0011822_H
#define METHOD0011822_H
#include "method.h"

class Ground;
class Item;
class Method0011822 : public Method
{
public:
    Method0011822();
    virtual ~Method0011822();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0011822_H
