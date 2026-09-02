#ifndef METHOD0160220_H
#define METHOD0160220_H
#include "method.h"

class Ground;
class Item;
class Method0160220 : public Method
{
public:
    Method0160220();
    virtual ~Method0160220();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0160220_H
