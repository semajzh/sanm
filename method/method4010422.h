#ifndef METHOD4010422_H
#define METHOD4010422_H
#include "method.h"

class Ground;
class Item;
class Method4010422 : public ZBMethod
{
public:
    Method4010422();
    virtual ~Method4010422();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

protected:
    virtual bool checkzb(Ground* ground, int obj);
    bool check401042(Ground* ground, int obj1, int obj2);
};

#endif // METHOD4010422_H
