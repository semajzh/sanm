#ifndef METHOD0013221_H
#define METHOD0013221_H
#include "method.h"

class Ground;
class Item;
class Method0013221 : public Method
{
public:
    Method0013221();
    virtual ~Method0013221();
    virtual int run(Ground* ground, Item* item1);

private:
    int selectObjrow0(Ground* ground, int pos);
};

#endif // METHOD0013221_H
