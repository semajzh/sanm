#ifndef METHOD1010721_H
#define METHOD1010721_H
#include "method.h"

class Ground;
class Item;
class Method1010721 : public Method
{
public:
    Method1010721();
    virtual ~Method1010721();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1010721_H
