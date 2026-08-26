#ifndef METHOD0130121_H
#define METHOD0130121_H
#include "method.h"

class Ground;
class Item;
class Method0130121 : public Method
{
public:
    Method0130121();
    virtual ~Method0130121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0130121_H
