#ifndef METHOD0013524_H
#define METHOD0013524_H
#include "method.h"

class Ground;
class Item;
class Method0013524 : public Method
{
public:
    Method0013524();
    virtual ~Method0013524();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check015(Ground* ground, int obj);
};

#endif // METHOD0013524_H
