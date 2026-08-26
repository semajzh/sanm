#ifndef METHOD0102021_H
#define METHOD0102021_H
#include "method.h"

class Ground;
class Item;
class Method0102021 : public Method
{
public:
    Method0102021();
    virtual ~Method0102021();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0102021_H
