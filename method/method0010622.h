#ifndef METHOD0010622_H
#define METHOD0010622_H
#include "method.h"

class Ground;
class Item;
class Method0010622 : public Method
{
public:
    Method0010622();
    virtual ~Method0010622();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0010622_H
