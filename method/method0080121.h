#ifndef METHOD0080121_H
#define METHOD0080121_H
#include "method.h"

class Ground;
class Item;
class Method0080121 : public Method
{
public:
    Method0080121();
    virtual ~Method0080121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0080121_H
