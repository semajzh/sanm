#ifndef METHOD0010320_H
#define METHOD0010320H
#include "method.h"

class Ground;
class Item;
class Method0010320 : public Method
{
public:
    Method0010320();
    virtual ~Method0010320();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0010320_H
