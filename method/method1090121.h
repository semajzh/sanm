#ifndef METHOD1090121_H
#define METHOD1090121_H
#include "method.h"

class Ground;
class Item;
class Method1090121 : public Method
{
public:
    Method1090121();
    virtual ~Method1090121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1090121_H
