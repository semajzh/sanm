#ifndef METHOD0011322_H
#define METHOD0011322_H
#include "method.h"

class Ground;
class Item;
class Method0011322 : public ZBMethod
{
public:
    Method0011322();
    virtual ~Method0011322();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

protected:
    virtual bool checkzb(Ground* ground, int obj);
};

#endif // METHOD0011322_H
