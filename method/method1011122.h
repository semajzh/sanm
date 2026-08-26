#ifndef METHOD1011122_H
#define METHOD1011122_H
#include "method.h"

class Ground;
class Item;
class Method1011122 : public Method
{
public:
    Method1011122();
    virtual ~Method1011122();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check013(Ground* ground, int obj);
};

#endif // METHOD1011122_H
