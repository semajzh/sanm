#ifndef METHOD0010122_H
#define METHOD0010122H
#include "method.h"

class Ground;
class Item;
class Method0010122 : public Method
{
public:
    Method0010122();
    virtual ~Method0010122();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0010122_H
