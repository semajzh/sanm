#ifndef RELATION204_H
#define RELATION204_H
#include "relation.h"

class Ground;
class Item;
class Relation204 : public Relation
{
public:
    Relation204();
    virtual ~Relation204();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION204_H
