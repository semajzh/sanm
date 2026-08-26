#ifndef METHOD0011622_H
#define METHOD0011622_H
#include "method.h"

class Ground;
class Item;
class Method0011622 : public ZBMethod
{
public:
    Method0011622();
    virtual ~Method0011622();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

protected:
    virtual bool checkzb(Ground* ground, int obj);

private:
    bool check004(Ground* ground, int obj);
};

#endif // METHOD0011622_H
