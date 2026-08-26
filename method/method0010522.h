#ifndef METHOD0010522_H
#define METHOD0010522H
#include "method.h"

class Ground;
class Item;
class Method0010522 : public Method
{
public:
    Method0010522();
    virtual ~Method0010522();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0010522_H
