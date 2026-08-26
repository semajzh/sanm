#ifndef METHOD0013424_H
#define METHOD0013424_H
#include "method.h"

class Ground;
class Item;
class Method0013424 : public Method
{
public:
    Method0013424();
    virtual ~Method0013424();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check012(Ground* ground, int obj);
};

#endif // METHOD0013424_H
