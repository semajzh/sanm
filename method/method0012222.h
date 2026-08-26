#ifndef METHOD0012222_H
#define METHOD0012222_H
#include "method.h"

class Ground;
class Item;
class Method0012222 : public Method
{
public:
    Method0012222();
    virtual ~Method0012222();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check017(Ground* ground, int obj);
};

#endif // METHOD0012222_H
