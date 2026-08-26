#ifndef METHOD2080121_H
#define METHOD2080121_H
#include "method.h"

class Ground;
class Item;
class Method2080121 : public Method
{
public:
    Method2080121();
    virtual ~Method2080121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2080121_H
