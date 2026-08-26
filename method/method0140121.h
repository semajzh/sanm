#ifndef METHOD0140121_H
#define METHOD0140121_H
#include "method.h"

class Ground;
class Item;
class Method0140121 : public Method
{
public:
    Method0140121();
    virtual ~Method0140121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0140121_H
