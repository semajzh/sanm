#ifndef METHOD4010722_H
#define METHOD4010722_H
#include "method.h"

class Ground;
class Item;
class Method4010722 : public Method
{
public:
    Method4010722();
    virtual ~Method4010722();
    int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4010722_H
