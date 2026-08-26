#ifndef METHOD3020122_H
#define METHOD3020122_H
#include "method.h"

class Ground;
class Item;
class Method3020122 : public Method
{
public:
    Method3020122();
    virtual ~Method3020122();
    int getLuck(Ground* , Item* );
    virtual int run(Ground* ground, Item* item1);

private:
    QVector<int> selectObj001(Ground* ground, int pos);
};

#endif // METHOD3020122_H
