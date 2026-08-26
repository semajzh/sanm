#ifndef RELATION404_H
#define RELATION404_H
#include "relation.h"

class Ground;
class Item;
class Relation404 : public Relation
{
public:
    Relation404();
    virtual ~Relation404();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION404_H
