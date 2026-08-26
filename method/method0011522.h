#ifndef METHOD0011522_H
#define METHOD0011522_H
#include "method.h"

class Ground;
class Item;
class Method0011522 : public ZBMethod
{
public:
    Method0011522();
    virtual ~Method0011522();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

protected:
    virtual bool checkzb(Ground* ground, int obj);

private:
    int checkex(Ground* ground, int obj);
};

#endif // METHOD0011522_H
