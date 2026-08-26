#ifndef METHOD0101021_H
#define METHOD0101021_H
#include "method.h"

class Ground;
class Item;
class Method0101021 : public Method
{
public:
    Method0101021();
    virtual ~Method0101021();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0101021_H
