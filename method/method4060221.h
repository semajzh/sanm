#ifndef METHOD4060221_H
#define METHOD4060221_H
#include "method.h"

class Ground;
class Item;
class Method4060221 : public Method
{
public:
    Method4060221();
    virtual ~Method4060221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4060221_H
