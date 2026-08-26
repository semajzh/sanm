#ifndef METHOD3010722_H
#define METHOD3010722_H
#include "method.h"

class Ground;
class Item;
class Method3010722 : public Method
{
public:
    Method3010722();
    virtual ~Method3010722();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3010722_H
