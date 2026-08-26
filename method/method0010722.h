#ifndef METHOD0010722_H
#define METHOD0010722_H
#include "method.h"

class Ground;
class Item;
class Method0010722 : public ZBMethod
{
public:
    Method0010722();
    virtual ~Method0010722();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

protected:
    virtual bool checkzb(Ground* ground, int obj);
};

#endif // METHOD0010722_H
