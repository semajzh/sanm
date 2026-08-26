#ifndef RELATION200_H
#define RELATION200_H
#include "relation.h"

class Ground;
class Item;
class Relation200 : public Relation
{
public:
    Relation200();
    virtual ~Relation200();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION200_H
