#ifndef METHOD1011222_H
#define METHOD1011222_H
#include "method.h"

class Ground;
class Item;
class Method1011222 : public Method
{
public:
    Method1011222();
    virtual ~Method1011222();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check101121(Ground* ground, int obj);
};

#endif // METHOD1011222_H
