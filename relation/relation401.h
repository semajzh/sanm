#ifndef RELATION401_H
#define RELATION401_H
#include "relation.h"

class Ground;
class Item;
class Relation401 : public Relation
{
public:
    Relation401();
    virtual ~Relation401();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION401_H
