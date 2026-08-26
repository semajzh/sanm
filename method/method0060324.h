#ifndef METHOD0060324_H
#define METHOD0060324_H
#include "method.h"

class Ground;
class Item;
class Method0060324 : public Method
{
public:
    Method0060324();
    virtual ~Method0060324();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0060324_H
