#ifndef METHOD0016720_H
#define METHOD0016720_H
#include "method.h"

class Ground;
class Item;
class Method0016720 : public Method
{
public:
    Method0016720();
    virtual ~Method0016720();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0016720_H
