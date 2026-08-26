#ifndef METHOD0070222_H
#define METHOD0070222_H
#include "method.h"

class Ground;
class Item;
class Method0070222 : public Method
{
public:
    Method0070222();
    virtual ~Method0070222();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check005(Ground* ground, int obj);
};

#endif // METHOD0070222_H
