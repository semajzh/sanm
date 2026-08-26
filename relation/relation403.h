#ifndef RELATION403_H
#define RELATION403_H
#include "relation.h"

class Ground;
class Item;
class Relation403 : public Relation
{
public:
    Relation403();
    virtual ~Relation403();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION403_H
