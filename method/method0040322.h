#ifndef METHOD0040322_H
#define METHOD0040322_H
#include "method.h"

class Ground;
class Item;
class Method0040322 : public ZBMethod
{
public:
    Method0040322();
    virtual ~Method0040322();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

protected:
    virtual bool checkzb(Ground* ground, int obj);
};

#endif // METHOD0040322_H
