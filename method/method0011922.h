#ifndef METHOD0011922_H
#define METHOD0011922_H
#include "method.h"

class Ground;
class Item;
class Method0011922 : public Method
{
public:
    Method0011922();
    virtual ~Method0011922();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0011922_H
