#ifndef METHOD0017822_H
#define METHOD0017822_H
#include "method.h"

class Ground;
class Item;
class Method0017822 : public ZBMethod
{
public:
    Method0017822();
    virtual ~Method0017822();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

protected:
    virtual bool checkzb(Ground* ground, int obj);

private:
    bool check016(Ground* ground, int obj);
};

#endif // METHOD0017822_H
