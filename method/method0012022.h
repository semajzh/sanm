#ifndef METHOD0012022_H
#define METHOD0012022_H
#include "method.h"

class Ground;
class Item;
class Method0012022 : public Method
{
public:
    Method0012022();
    virtual ~Method0012022();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check015(Ground* ground, int obj);
};

#endif // METHOD0012022_H
