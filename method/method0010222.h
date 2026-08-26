#ifndef METHOD0010222_H
#define METHOD0010222H
#include "method.h"

class Ground;
class Item;
class Method0010222 : public Method
{
public:
    Method0010222();
    virtual ~Method0010222();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0010222_H
