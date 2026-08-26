#ifndef METHOD3010324_H
#define METHOD3010324_H
#include "method.h"

class Ground;
class Item;
class Method3010324 : public Method
{
public:
    Method3010324();
    virtual ~Method3010324();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD3010324_H
