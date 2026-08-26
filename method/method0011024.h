#ifndef METHOD0011024_H
#define METHOD0011024_H
#include "method.h"

class Ground;
class Item;
class Method0011024 : public Method
{
public:
    Method0011024();
    virtual ~Method0011024();
    virtual int run(Ground* ground, Item* item1);

private:
    int check0011024(Ground* ground, int obj);
};

#endif // METHOD0011024_H
