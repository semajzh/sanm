#ifndef METHOD4130122_H
#define METHOD4130122_H
#include "method.h"

class Ground;
class Item;
class Method4130122 : public Method
{
public:
    Method4130122();
    virtual ~Method4130122();
    virtual int run(Ground* ground, Item* item1);

private:
    QVector<int> selectObj(Ground* ground, int obj);
    bool check4130122(Ground* ground, int obj);
    bool check413011(Ground* ground, int obj1, int obj2);
};

#endif // METHOD4130122_H
