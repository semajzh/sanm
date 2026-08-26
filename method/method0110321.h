#ifndef METHOD0110321_H
#define METHOD0110321_H
#include "method.h"

class Ground;
class Item;
class Method0110321 : public Method
{
public:
    Method0110321();
    virtual ~Method0110321();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0110321_H
