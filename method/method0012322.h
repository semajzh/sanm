#ifndef METHOD0012322_H
#define METHOD0012322H
#include "method.h"

class Ground;
class Item;
class Method0012322 : public Method
{
public:
    Method0012322();
    virtual ~Method0012322();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check003(Ground* ground, int obj);
};

#endif // METHOD0012322_H
