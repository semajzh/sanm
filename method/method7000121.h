#ifndef METHOD7000121_H
#define METHOD7000121_H
#include "method.h"

class Ground;
class Item;
class Method7000121 : public Method
{
public:
    Method7000121();
    virtual ~Method7000121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD7000121_H
