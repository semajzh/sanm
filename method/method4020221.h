#ifndef METHOD4020221_H
#define METHOD4020221_H
#include "method.h"

class Ground;
class Item;
class Method4020221 : public Method
{
public:
    Method4020221();
    virtual ~Method4020221();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check402022(Ground* ground, int obj);
};

#endif // METHOD4020221_H
