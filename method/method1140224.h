#ifndef METHOD1140224_H
#define METHOD1140224_H
#include "method.h"

class Ground;
class Item;
class Method1140224 : public Method
{
public:
    Method1140224();
    virtual ~Method1140224();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check114021(Ground* ground, int obj);
};

#endif // METHOD1140224_H
