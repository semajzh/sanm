#ifndef METHOD0013924_H
#define METHOD0013924_H
#include "method.h"

class Ground;
class Item;
class Method0013924 : public Method
{
public:
    Method0013924();
    virtual ~Method0013924();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check016(Ground* ground, int obj);
};

#endif // METHOD0013924_H
