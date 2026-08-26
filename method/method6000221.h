#ifndef METHOD6000221_H
#define METHOD6000221_H
#include "method.h"

class Ground;
class Item;
class Method6000221 : public Method
{
public:
    Method6000221();
    virtual ~Method6000221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD6000221_H
