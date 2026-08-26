#ifndef METHOD1080121_H
#define METHOD1080121_H
#include "method.h"

class Ground;
class Item;
class Method1080121 : public Method
{
public:
    Method1080121();
    virtual ~Method1080121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1080121_H
