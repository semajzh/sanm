#ifndef METHOD0010422_H
#define METHOD0010422H
#include "method.h"

class Ground;
class Item;
class Method0010422 : public Method
{
public:
    Method0010422();
    virtual ~Method0010422();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0010422_H
