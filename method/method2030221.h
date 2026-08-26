#ifndef METHOD2030221_H
#define METHOD2030221_H
#include "method.h"

class Ground;
class Item;
class Method2030221 : public Method
{
public:
    Method2030221();
    virtual ~Method2030221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2030221_H
