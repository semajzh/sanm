#ifndef METHOD0014220_H
#define METHOD0014220_H
#include "method.h"

class Ground;
class Item;
class Method0014220 : public Method
{
public:
    Method0014220();
    virtual ~Method0014220();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0014220_H
