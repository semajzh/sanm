#ifndef METHOD0030622_H
#define METHOD0030622_H
#include "method.h"

class Ground;
class Item;
class Method0030622 : public Method
{
public:
    Method0030622();
    virtual ~Method0030622();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0030622_H
