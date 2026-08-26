#ifndef METHOD3011322_H
#define METHOD3011322_H
#include "method.h"

class Ground;
class Item;
class Method3011322 : public Method
{
public:
    Method3011322();
    virtual ~Method3011322();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3011322_H
