#ifndef METHOD2010924_H
#define METHOD2010924_H
#include "method.h"

class Ground;
class Item;
class Method2010924 : public Method
{
public:
    Method2010924();
    virtual ~Method2010924();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2010924_H
