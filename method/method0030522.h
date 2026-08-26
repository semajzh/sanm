#ifndef METHOD0030522_H
#define METHOD0030522_H
#include "method.h"

class Ground;
class Item;
class Method0030522 : public Method
{
public:
    Method0030522();
    virtual ~Method0030522();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0030522_H
