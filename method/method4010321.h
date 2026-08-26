#ifndef METHOD4010321_H
#define METHOD4010321_H
#include "method.h"

class Ground;
class Item;
class Method4010321 : public Method
{
public:
    Method4010321();
    virtual ~Method4010321();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4010321_H
