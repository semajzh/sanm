#ifndef METHOD3150221_H
#define METHOD3150221_H
#include "method.h"

class Ground;
class Item;
class Method3150221 : public Method
{
public:
    Method3150221();
    virtual ~Method3150221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3150221_H
