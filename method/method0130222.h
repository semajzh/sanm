#ifndef METHOD0130222_H
#define METHOD0130222_H
#include "method.h"

class Ground;
class Item;
class Method0130222 : public Method
{
public:
    Method0130222();
    virtual ~Method0130222();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0130222_H
