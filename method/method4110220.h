#ifndef METHOD4110220_H
#define METHOD4110220_H
#include "method.h"

class Ground;
class Item;
class Method4110220 : public Method
{
public:
    Method4110220();
    virtual ~Method4110220();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check411021(Ground* ground, int obj);
};

#endif // METHOD4110220_H
