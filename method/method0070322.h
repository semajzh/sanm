#ifndef METHOD0070322_H
#define METHOD0070322_H
#include "method.h"

class Ground;
class Item;
class Method0070322 : public Method
{
public:
    Method0070322();
    virtual ~Method0070322();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0070322_H
