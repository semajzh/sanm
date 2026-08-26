#ifndef METHOD0090324_H
#define METHOD0090324_H
#include "method.h"

class Ground;
class Item;
class Method0090324 : public Method
{
public:
    Method0090324();
    virtual ~Method0090324();
    virtual int run(Ground* ground, Item* item1);

private:
    void addbuff(Ground* ground, int obj1, int obj2);
};

#endif // METHOD0090324_H
