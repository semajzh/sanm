#ifndef METHOD4011422_H
#define METHOD4011422_H
#include "method.h"

class Ground;
class Item;
class Method4011422 : public Method
{
public:
    Method4011422();
    virtual ~Method4011422();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check401141(Ground* ground, int obj);
};

#endif // METHOD4011422_H
