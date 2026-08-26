#ifndef METHOD0080222_H
#define METHOD0080222_H
#include "method.h"

class Ground;
class Item;
class Method0080222 : public Method
{
public:
    Method0080222();
    virtual ~Method0080222();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check80222(Ground* ground, int obj);
};

#endif // METHOD0080222_H
