#ifndef METHOD0020424_H
#define METHOD0020424_H
#include "method.h"

class Ground;
class Item;
class Method0020424 : public Method
{
public:
    Method0020424();
    virtual ~Method0020424();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check017(Ground* ground, int obj);
};

#endif // METHOD0020424_H
