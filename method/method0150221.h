#ifndef METHOD0150221_H
#define METHOD0150221_H
#include "method.h"

class Ground;
class Item;
class Method0150221 : public Method
{
public:
    Method0150221();
    virtual ~Method0150221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0150221_H
