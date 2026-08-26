#ifndef METHOD0012620_H
#define METHOD0012620_H
#include "method.h"

class Ground;
class Item;
class Method0012620 : public Method
{
public:
    Method0012620();
    virtual ~Method0012620();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0012620_H
