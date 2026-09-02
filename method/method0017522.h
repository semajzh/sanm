#ifndef METHOD0017522_H
#define METHOD0017522_H
#include "method.h"

class Ground;
class Item;
class Method0017522 : public Method
{
public:
    Method0017522();
    virtual ~Method0017522();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check003(Ground* ground, int obj);
};

#endif // METHOD0017522_H
