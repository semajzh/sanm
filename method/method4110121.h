#ifndef METHOD4110121_H
#define METHOD4110121_H
#include "method.h"

class Ground;
class Item;
class Method4110121 : public Method
{
public:
    Method4110121();
    virtual ~Method4110121();
    virtual int run(Ground* ground, Item* item1);
};

#endif // METHOD4110121_H
