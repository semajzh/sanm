#ifndef METHOD2010721_H
#define METHOD2010721_H
#include "method.h"

class Ground;
class Item;
class Method2010721 : public Method
{
public:
    Method2010721();
    virtual ~Method2010721();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2010721_H
