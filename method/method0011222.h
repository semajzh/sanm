#ifndef METHOD0011222_H
#define METHOD0011222_H
#include "method.h"

class Ground;
class Item;
class Method0011222 : public Method
{
public:
    Method0011222();
    virtual ~Method0011222();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0011222_H
