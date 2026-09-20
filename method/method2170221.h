#ifndef METHOD2170221_H
#define METHOD2170221_H
#include "method.h"

class Ground;
class Item;
class Method2170221 : public Method
{
public:
    Method2170221();
    virtual ~Method2170221();
    virtual int run(Ground* ground, Item* item1);

private:
    QVector<int> selectObj(Ground* ground, int obj);
};

#endif // METHOD2170221_H
