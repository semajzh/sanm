#ifndef METHOD0013122_H
#define METHOD0013122_H
#include "method.h"

class Ground;
class Item;
class Method0013122 : public ZBMethod
{
public:
    Method0013122();
    virtual ~Method0013122();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

protected:
    virtual bool checkzb(Ground* ground, int obj);

private:
    bool check001(Ground* ground, int obj);
};

#endif // METHOD0013122_H
