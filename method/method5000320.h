#ifndef METHOD5000320_H
#define METHOD5000320_H
#include "method.h"

class Ground;
class Item;
class Method5000320 : public Method
{
public:
    Method5000320();
    virtual ~Method5000320();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check5000320(Ground* ground, int obj);
};

#endif // METHOD5000320_H
