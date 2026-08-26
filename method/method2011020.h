#ifndef METHOD2011020_H
#define METHOD2011020_H
#include "method.h"

class Ground;
class Item;
class Method2011020 : public Method
{
public:
    Method2011020();
    virtual ~Method2011020();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2011020_H
