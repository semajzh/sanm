#ifndef RELATION405_H
#define RELATION405_H
#include "relation.h"

class Ground;
class Item;
class Relation405 : public Relation
{
public:
    Relation405();
    virtual ~Relation405();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION405_H
