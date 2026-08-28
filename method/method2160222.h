#ifndef METHOD2160222_H
#define METHOD2160222_H
#include "method.h"

class Ground;
class Item;
class Method2160222 : public Method
{
public:
    Method2160222();
    virtual ~Method2160222();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2160222_H
