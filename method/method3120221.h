#ifndef METHOD3120221_H
#define METHOD3120221_H
#include "method.h"

class Ground;
class Item;
class Method3120221 : public Method
{
public:
    Method3120221();
    virtual ~Method3120221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3120221_H
