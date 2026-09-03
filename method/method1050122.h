#ifndef METHOD1050122_H
#define METHOD1050122_H
#include "method.h"

class Ground;
class Item;
class Method1050122 : public Method
{
public:
    Method1050122();
    virtual ~Method1050122();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

private:
    void addbuff(Ground* ground, int obj1, int obj2);
};

#endif // METHOD1050122_H
