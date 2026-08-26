#ifndef METHOD2010420_H
#define METHOD2010420_H
#include "method.h"

class Ground;
class Item;
class Method2010420 : public Method
{
public:
    Method2010420();
    virtual ~Method2010420();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD2010420_H
