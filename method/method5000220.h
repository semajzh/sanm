#ifndef METHOD5000220_H
#define METHOD5000220_H
#include "method.h"

class Ground;
class Item;
class Method5000220 : public Method
{
public:
    Method5000220();
    virtual ~Method5000220();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check5000220(Ground* ground, int obj);
};

#endif // METHOD5000220_H
