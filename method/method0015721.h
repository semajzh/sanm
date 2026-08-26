#ifndef METHOD0015721_H
#define METHOD0015721_H
#include "method.h"

class Ground;
class Item;
class Method0015721 : public Method
{
public:
    Method0015721();
    virtual ~Method0015721();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0015721_H
