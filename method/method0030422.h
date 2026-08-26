#ifndef METHOD0030422_H
#define METHOD0030422_H
#include "method.h"

class Ground;
class Item;
class Method0030422 : public Method
{
public:
    Method0030422();
    virtual ~Method0030422();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0030422_H
