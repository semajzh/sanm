#ifndef METHOD0103022_H
#define METHOD0103022_H
#include "method.h"

class Ground;
class Item;
class Method0103022 : public Method
{
public:
    Method0103022();
    virtual ~Method0103022();
    virtual int run(Ground* ground, Item* item1);

private:
    bool check001(Ground *ground, int obj);
    int check007(Ground *ground, int obj);
};

#endif // METHOD0103022_H
