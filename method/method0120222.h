#ifndef METHOD0120222_H
#define METHOD0120222_H
#include "method.h"

class Ground;
class Item;
class Method0120222 : public Method
{
public:
    Method0120222();
    virtual ~Method0120222();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check003(Ground* ground, int obj);
    bool check001(Ground* ground, int obj);
};

#endif // METHOD0120222_H
