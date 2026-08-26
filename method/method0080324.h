#ifndef METHOD0080324_H
#define METHOD0080324_H
#include "method.h"

class Ground;
class Item;
class Method0080324 : public Method
{
public:
    Method0080324();
    virtual ~Method0080324();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check0080324(Ground* ground, int obj);
};

#endif // METHOD0080324_H
