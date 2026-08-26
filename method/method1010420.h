#ifndef METHOD1010420_H
#define METHOD1010420_H
#include "method.h"

class Ground;
class Item;
class Method1010420 : public Method
{
public:
    Method1010420();
    virtual ~Method1010420();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD1010420_H
