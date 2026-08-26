#ifndef METHOD1011422_H
#define METHOD1011422_H
#include "method.h"

class Ground;
class Item;
class Method1011422 : public Method
{
public:
    Method1011422();
    virtual ~Method1011422();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check012(Ground* ground, int obj);
};

#endif // METHOD1011422_H
