#ifndef METHOD0030221_H
#define METHOD0030221_H
#include "method.h"

class Ground;
class Item;
class Method0030221 : public Method
{
public:
    Method0030221();
    virtual ~Method0030221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0030221_H
