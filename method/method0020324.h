#ifndef METHOD0020324_H
#define METHOD0020324_H
#include "method.h"

class Ground;
class Item;
class Method0020324 : public Method
{
public:
    Method0020324();
    virtual ~Method0020324();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0020324_H
