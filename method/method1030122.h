#ifndef METHOD1030122_H
#define METHOD1030122_H
#include "method.h"

class Ground;
class Item;
class Method1030122 : public Method
{
public:
    Method1030122();
    virtual ~Method1030122();
    virtual int run(Ground* ground, Item* item1);

private:
    int check1030122(Ground* ground, int obj);
};

#endif // METHOD1030122_H
