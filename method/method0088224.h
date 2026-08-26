#ifndef METHOD0088224_H
#define METHOD0088224_H
#include "method.h"

class Ground;
class Item;
class Method0088224 : public Method
{
public:
    Method0088224();
    virtual ~Method0088224();
    virtual int run(Ground* ground, Item* item1);

private:
    int check0088224(Ground* ground, int obj);
};

#endif // METHOD0088224_H
