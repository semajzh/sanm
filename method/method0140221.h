#ifndef METHOD0140221_H
#define METHOD0140221_H
#include "method.h"

class Ground;
class Item;
class Method0140221 : public Method
{
public:
    Method0140221();
    virtual ~Method0140221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0140221_H
