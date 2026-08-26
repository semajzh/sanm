#ifndef METHOD0090121_H
#define METHOD0090121_H
#include "method.h"

class Ground;
class Item;
class Method0090121 : public Method
{
public:
    Method0090121();
    virtual ~Method0090121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0090121_H
