#ifndef METHOD9999999_H
#define METHOD9999999_H
#include "method.h"

class Ground;
class Item;
class Method9999999 : public Method
{
public:
    Method9999999();
    virtual ~Method9999999();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD9999999_H
