#ifndef METHOD2223_H
#define METHOD2223_H
#include "method.h"

class Ground;
class Item;
class Method2223 : public Method
{
public:
    Method2223();
    virtual ~Method2223();
    virtual int run(Ground* , Item* ) { return -1; }
    virtual int run(Ground* , Item* , int ) { return -1; }
    int run(Ground* ground, int obj1, int obj2, bool b113);

private:
    bool check013(Ground* ground, int obj, bool b113);
    bool check014(Ground* ground, int obj1, int& obj2);
    bool check0013320(Ground* ground, int obj);
    bool check0090121(Ground* ground, int obj);
    bool check1091321(Ground* ground, int& obj);
    bool check101012(Ground* ground, int obj);
};

#endif // METHOD2223_H
