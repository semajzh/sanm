#ifndef METHOD0012122_H
#define METHOD0012122_H
#include "method.h"

class Ground;
class Item;
class Method0012122 : public Method
{
public:
    Method0012122();
    virtual ~Method0012122();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0012122_H
