#ifndef METHOD0120122_H
#define METHOD0120122_H
#include "method.h"

class Ground;
class Item;
class Method0120122 : public Method
{
public:
    Method0120122();
    virtual ~Method0120122();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0120122_H
