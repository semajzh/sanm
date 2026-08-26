#ifndef METHOD1011021_H
#define METHOD1011021_H
#include "method.h"

class Ground;
class Item;
class Method1011021 : public Method
{
public:
    Method1011021();
    virtual ~Method1011021();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1011021_H
