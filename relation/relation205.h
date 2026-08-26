#ifndef RELATION205_H
#define RELATION205_H
#include "relation.h"

class Ground;
class Item;
class Relation205 : public Relation
{
public:
    Relation205();
    virtual ~Relation205();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION205_H
