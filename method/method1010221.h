#ifndef METHOD1010221_H
#define METHOD1010221_H
#include "method.h"

class Ground;
class Item;
class Method1010221 : public Method
{
public:
    Method1010221();
    virtual ~Method1010221();
    virtual int run(Ground* ground, Item* item1);

private:
    int selectObj(Ground* ground, int obj);
};

#endif // METHOD1010221_H
