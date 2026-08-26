#ifndef METHOD0017422_H
#define METHOD0017422_H
#include "method.h"

class Ground;
class Item;
class Method0017422 : public Method
{
public:
    Method0017422();
    virtual ~Method0017422();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check013(Ground* ground, int obj);
};

#endif // METHOD0017422_H
