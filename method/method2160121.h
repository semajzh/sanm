#ifndef METHOD2160121_H
#define METHOD2160121_H
#include "method.h"

class Ground;
class Item;
class Method2160121 : public Method
{
public:
    Method2160121();
    virtual ~Method2160121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2160121_H
