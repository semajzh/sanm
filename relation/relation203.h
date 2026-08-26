#ifndef RELATION203_H
#define RELATION203_H
#include "relation.h"

class Ground;
class Item;
class Relation203 : public Relation
{
public:
    Relation203();
    virtual ~Relation203();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION203_H
