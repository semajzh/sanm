#ifndef METHOD3010422_H
#define METHOD3010422_H
#include "method.h"

class Ground;
class Item;
class Method3010422 : public Method
{
public:
    Method3010422();
    virtual ~Method3010422();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

private:
    bool check015(Ground* ground, int obj);
};

#endif // METHOD3010422_H
