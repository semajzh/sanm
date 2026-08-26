#ifndef METHOD1030221_H
#define METHOD1030221_H
#include "method.h"

class Ground;
class Item;
class Method1030221 : public Method
{
public:
    Method1030221();
    virtual ~Method1030221();
    virtual int run(Ground* ground, Item* item1);

//private:
//    QVector<int> selectObjrow(Ground* ground, int pos);
};

#endif // METHOD1030221_H
