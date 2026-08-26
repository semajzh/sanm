#ifndef METHOD1010521_H
#define METHOD1010521_H
#include "method.h"

class Ground;
class Item;
class Method1010521 : public Method
{
public:
    Method1010521();
    virtual ~Method1010521();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1010521_H
