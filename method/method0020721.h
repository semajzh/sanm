#ifndef METHOD0020721_H
#define METHOD0020721_H
#include "method.h"

class Ground;
class Item;
class Method0020721 : public Method
{
public:
    Method0020721();
    virtual ~Method0020721();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0020721_H
