#ifndef METHOD7000221_H
#define METHOD7000221_H
#include "method.h"

class Ground;
class Item;
class Method7000221 : public Method
{
public:
    Method7000221();
    virtual ~Method7000221();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD7000221_H
