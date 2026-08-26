#ifndef METHOD2010222_H
#define METHOD2010222_H
#include "method.h"

class Ground;
class Item;
class Method2010222 : public Method
{
public:
    Method2010222();
    virtual ~Method2010222();
    virtual int run(Ground* ground, Item* item1);

private:
    int check02(Ground* ground, int obj);
    bool checkex(Ground* ground, int obj);
    float check201023(Ground* ground, int obj1, int obj2);
};

#endif // METHOD2010222_H
