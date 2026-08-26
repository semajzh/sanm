#ifndef METHOD0010924_H
#define METHOD0010924_H
#include "method.h"

class Ground;
class Item;
class Method0010924 : public Method
{
public:
    Method0010924();
    virtual ~Method0010924();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0010924_H
