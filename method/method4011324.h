#ifndef METHOD4011324_H
#define METHOD4011324_H
#include "method.h"

class Ground;
class Item;
class Method4011324 : public Method
{
public:
    Method4011324();
    virtual ~Method4011324();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4011324_H
