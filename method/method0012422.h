#ifndef METHOD0012422_H
#define METHOD0012422H
#include "method.h"

class Ground;
class Item;
class Method0012422 : public Method
{
public:
    Method0012422();
    virtual ~Method0012422();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check003(Ground* ground, int obj);
};

#endif // METHOD0012422_H
