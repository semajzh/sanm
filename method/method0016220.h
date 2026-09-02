#ifndef METHOD0016220_H
#define METHOD0016220_H
#include "method.h"

class Ground;
class Item;
class Method0016220 : public Method
{
public:
    Method0016220();
    virtual ~Method0016220();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0016220_H
