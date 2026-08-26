#ifndef METHOD2010622_H
#define METHOD2010622_H
#include "method.h"

class Ground;
class Item;
class Method2010622 : public Method
{
public:
    Method2010622();
    virtual ~Method2010622();
    virtual int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

private:
    bool check201061(Ground* ground, int obj);
    bool check002(Ground* ground, int obj);
};

#endif // METHOD2010622_H
