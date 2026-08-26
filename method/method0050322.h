#ifndef METHOD0050322_H
#define METHOD0050322_H
#include "method.h"

class Ground;
class Item;
class Method0050322 : public Method
{
public:
    Method0050322();
    virtual ~Method0050322();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0050322_H
