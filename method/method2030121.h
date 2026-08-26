#ifndef METHOD2030121_H
#define METHOD2030121_H
#include "method.h"

class Ground;
class Item;
class Method2030121 : public Method
{
public:
    Method2030121();
    virtual ~Method2030121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2030121_H
