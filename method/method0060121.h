#ifndef METHOD0060121_H
#define METHOD0060121_H
#include "method.h"

class Ground;
class Item;
class Method0060121 : public Method
{
public:
    Method0060121();
    virtual ~Method0060121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0060121_H
