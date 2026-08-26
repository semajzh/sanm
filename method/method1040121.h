#ifndef METHOD1040121_H
#define METHOD1040121_H
#include "method.h"

class Ground;
class Item;
class Method1040121 : public Method
{
public:
    Method1040121();
    virtual ~Method1040121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1040121_H
