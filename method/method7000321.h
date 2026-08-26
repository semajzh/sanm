#ifndef METHOD7000321_H
#define METHOD7000321_H
#include "method.h"

class Ground;
class Item;
class Method7000321 : public Method
{
public:
    Method7000321();
    virtual ~Method7000321();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD7000321_H
