#ifndef METHOD0060221_H
#define METHOD0060221_H
#include "method.h"

class Ground;
class Item;
class Method0060221 : public Method
{
public:
    Method0060221();
    virtual ~Method0060221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0060221_H
