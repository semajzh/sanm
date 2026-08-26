#ifndef RELATION300_H
#define RELATION300_H
#include "relation.h"

class Ground;
class Item;
class Relation300 : public Relation
{
public:
    Relation300();
    virtual ~Relation300();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION300_H
