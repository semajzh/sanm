#ifndef METHOD2100121_H
#define METHOD2100121_H
#include "method.h"

class Ground;
class Item;
class Method2100121 : public Method
{
public:
    Method2100121();
    virtual ~Method2100121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2100121_H
