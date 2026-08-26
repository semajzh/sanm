#ifndef METHOD0040121_H
#define METHOD0040121_H
#include "method.h"

class Ground;
class Item;
class Method0040121 : public Method
{
public:
    Method0040121();
    virtual ~Method0040121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0040121_H
