#ifndef METHOD3050122_H
#define METHOD3050122_H
#include "method.h"

class Ground;
class Item;
class Method3050122 : public Method
{
public:
    Method3050122();
    virtual ~Method3050122();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3050122_H
