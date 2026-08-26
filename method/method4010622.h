#ifndef METHOD4010622_H
#define METHOD4010622_H
#include "method.h"

class Ground;
class Item;
class Method4010622 : public Method
{
public:
    Method4010622();
    virtual ~Method4010622();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

private:
    bool check401061(Ground* ground, int obj);
};

#endif // METHOD4010622_H
