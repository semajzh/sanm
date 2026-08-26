#ifndef METHOD0110222_H
#define METHOD0110222_H
#include "method.h"

class Ground;
class Item;
class Method0110222 : public Method
{
public:
    Method0110222();
    virtual ~Method0110222();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check020(Ground* ground, int obj);
};

#endif // METHOD0110222_H
