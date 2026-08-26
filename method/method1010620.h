#ifndef METHOD1010620_H
#define METHOD1010620_H
#include "method.h"

class Ground;
class Item;
class Method1010620 : public Method
{
public:
    Method1010620();
    virtual ~Method1010620();
    virtual int run(Ground* ground, Item* item1);

private:
    float check101061(Ground* ground, int obj);
};

#endif // METHOD1010620_H
