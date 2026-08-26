#ifndef RELATION201_H
#define RELATION201_H
#include "relation.h"

class Ground;
class Item;
class Relation201 : public Relation
{
public:
    Relation201();
    virtual ~Relation201();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION201_H
