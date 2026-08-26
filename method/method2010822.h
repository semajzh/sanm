#ifndef METHOD2010822_H
#define METHOD2010822_H
#include "method.h"

class Ground;
class Item;
class Method2010822 : public Method
{
public:
    Method2010822();
    virtual ~Method2010822();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check201082(Ground* ground, int obj);
};

#endif // METHOD2010822_H
