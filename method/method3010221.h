#ifndef METHOD3010221_H
#define METHOD3010221_H
#include "method.h"

class Ground;
class Item;
class Method3010221 : public Method
{
public:
    Method3010221();
    virtual ~Method3010221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3010221_H
