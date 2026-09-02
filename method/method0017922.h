#ifndef METHOD0017922_H
#define METHOD0017922_H
#include "method.h"

class Ground;
class Item;
class Method0017922 : public ZBMethod
{
public:
    Method0017922();
    virtual ~Method0017922();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

protected:
    virtual bool checkzb(Ground* ground, int obj);
};

#endif // METHOD0017922_H
