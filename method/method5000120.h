#ifndef METHOD5000120_H
#define METHOD5000120_H
#include "method.h"

class Ground;
class Item;
class Method5000120 : public Method
{
public:
    Method5000120();
    virtual ~Method5000120();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check5000120(Ground* ground, int obj);
};

#endif // METHOD5000120_H
