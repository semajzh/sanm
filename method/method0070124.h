#ifndef METHOD0070124_H
#define METHOD0070124_H
#include "method.h"

class Ground;
class Item;
class Method0070124 : public Method
{
public:
    Method0070124();
    virtual ~Method0070124();
    virtual int run(Ground* ground, Item* item1);

//private:
//    bool checkBuff(Ground* ground, int obj);
//    void removeBuff(Ground* ground, int obj);
//    void addBuff(Ground* ground, int obj);
};

#endif // METHOD0070124_H
