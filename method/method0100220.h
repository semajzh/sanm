#ifndef METHOD0100220_H
#define METHOD0100220_H
#include "method.h"

class Ground;
class Item;
class Method0100220 : public Method
{
public:
    Method0100220();
    virtual ~Method0100220();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0100220_H
