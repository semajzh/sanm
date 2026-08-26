#ifndef METHOD0013022_H
#define METHOD0013022_H
#include "method.h"

class Ground;
class Item;
class Method0013022 : public Method
{
public:
    Method0013022();
    virtual ~Method0013022();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0013022_H
