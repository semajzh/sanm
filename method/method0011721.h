#ifndef METHOD0011721_H
#define METHOD0011721_H
#include "method.h"

class Ground;
class Item;
class Method0011721 : public Method
{
public:
    Method0011721();
    virtual ~Method0011721();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0011721_H
