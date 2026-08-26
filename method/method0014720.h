#ifndef METHOD0014720_H
#define METHOD0014720_H
#include "method.h"

class Ground;
class Item;
class Method0014720 : public Method
{
public:
    Method0014720();
    virtual ~Method0014720();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0014720_H
