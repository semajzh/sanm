#ifndef METHOD4011022_H
#define METHOD4011022_H
#include "method.h"

class Ground;
class Item;
class Method4011022 : public Method
{
public:
    Method4011022();
    virtual ~Method4011022();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check005(Ground* ground, int obj);
};

#endif // METHOD4011022_H
