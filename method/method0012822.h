#ifndef METHOD0012822_H
#define METHOD0012822H
#include "method.h"

class Ground;
class Item;
class Method0012822 : public Method
{
public:
    Method0012822();
    virtual ~Method0012822();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check001(Ground* ground, int obj);
    bool check003(Ground* ground, int obj);
    bool check004(Ground* ground, int obj);
    bool check017(Ground* ground, int obj);
};

#endif // METHOD0012822_H
