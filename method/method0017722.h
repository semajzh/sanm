#ifndef METHOD0017722_H
#define METHOD0017722_H
#include "method.h"

class Ground;
class Item;
class Method0017722 : public Method
{
public:
    Method0017722();
    virtual ~Method0017722();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check004(Ground* ground, int obj);
};

#endif // METHOD0017722_H
