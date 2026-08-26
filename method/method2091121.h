#ifndef METHOD2091121_H
#define METHOD2091121_H
#include "method.h"

class Ground;
class Item;
class Method2091121 : public Method
{
public:
    Method2091121();
    virtual ~Method2091121();
    virtual int run(Ground* ground, Item* item1);

private:
    int selectObj(Ground* ground, int obj);
};

#endif // METHOD2091121_H
