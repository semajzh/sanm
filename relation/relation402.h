#ifndef RELATION402_H
#define RELATION402_H
#include "relation.h"

class Ground;
class Item;
class Relation402 : public Relation
{
public:
    Relation402();
    virtual ~Relation402();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION402_H
