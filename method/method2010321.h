#ifndef METHOD2010321_H
#define METHOD2010321_H
#include "method.h"

class Ground;
class Item;
class Method2010321 : public Method
{
public:
    Method2010321();
    virtual ~Method2010321();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2010321_H
