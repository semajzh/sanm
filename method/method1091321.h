#ifndef METHOD1091321_H
#define METHOD1091321_H
#include "method.h"

class Ground;
class Item;
class Method1091321 : public Method
{
public:
    Method1091321();
    virtual ~Method1091321();
    virtual int run(Ground* ground, Item* item1);

private:
    int selectObj(Ground* ground, int obj);
};

#endif // METHOD1091321_H
