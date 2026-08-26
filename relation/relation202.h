#ifndef RELATION202_H
#define RELATION202_H
#include "relation.h"

class Ground;
class Item;
class Relation202 : public Relation
{
public:
    Relation202();
    virtual ~Relation202();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION202_H
