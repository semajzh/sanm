#ifndef METHOD0040220_H
#define METHOD0040220_H
#include "method.h"

class Ground;
class Item;
class Method0040220 : public Method
{
public:
    Method0040220();
    virtual ~Method0040220();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0040220_H
