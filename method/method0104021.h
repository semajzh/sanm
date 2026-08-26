#ifndef METHOD0104021_H
#define METHOD0104021_H
#include "method.h"

class Ground;
class Item;
class Method0104021 : public Method
{
public:
    Method0104021();
    virtual ~Method0104021();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0104021_H
