#ifndef METHOD0160122_H
#define METHOD0160122_H
#include "method.h"

class Ground;
class Item;
class Method0160122 : public Method
{
public:
    Method0160122();
    virtual ~Method0160122();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0160122_H
