#ifndef METHOD0014420_H
#define METHOD0014420_H
#include "method.h"

class Ground;
class Item;
class Method0014420 : public Method
{
public:
    Method0014420();
    virtual ~Method0014420();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD0014420_H
