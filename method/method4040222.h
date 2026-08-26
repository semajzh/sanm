#ifndef METHOD4040222_H
#define METHOD4040222_H
#include "method.h"

class Ground;
class Item;
class Method4040222 : public Method
{
public:
    Method4040222();
    virtual ~Method4040222();
    virtual int run(Ground* ground, Item* item1);

private:
    bool op(Ground* ground, Item* item1, int obj);
};

#endif // METHOD4040222_H
