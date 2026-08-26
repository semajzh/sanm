#ifndef METHOD0013822_H
#define METHOD0013822_H
#include "method.h"

class Ground;
class Item;
class Method0013822 : public ZBMethod
{
public:
    Method0013822();
    virtual ~Method0013822();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

protected:
    virtual bool checkzb(Ground* ground, int obj);
};

#endif // METHOD0013822_H
