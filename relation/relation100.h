#ifndef RELATION100_H
#define RELATION100_H
#include "relation.h"

class Ground;
class Item;
class Relation100 : public Relation
{
public:
    Relation100();
    virtual ~Relation100();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION100_H
