#ifndef METHOD3332_H
#define METHOD3332_H
#include "method.h"

class Ground;
class Item;
class Method3332 : public Method
{
public:
    Method3332();
    virtual ~Method3332();
    virtual int run(Ground* , Item* ) { return -1; }
    virtual int run(Ground* , Item* , int ) { return -1; }
    int run(Ground* ground, int obj1, int obj2, bool b113);

private:
    bool check013(Ground* ground, int obj, bool b113);
    bool check0013320(Ground* ground, int obj);
    bool check0090121(Ground* ground, int obj);
    bool check1091321(Ground* ground, int& obj);
    bool check101012(Ground* ground, int obj);
};

#endif // METHOD3332_H
