#ifndef METHOD0180222_H
#define METHOD0180222_H
#include "method.h"

class Method0180222 : public ZBMethod
{
public:
    Method0180222();
    virtual ~Method0180222();
    virtual int getLuck(Ground* ground, Item* item);
    virtual int run(Ground* ground, Item* item1);

};

#endif
