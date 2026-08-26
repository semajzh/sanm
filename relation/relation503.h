#ifndef RELATION503_H
#define RELATION503_H
#include "relation.h"

class Ground;
class Item;
class Relation503 : public Relation
{
public:
    Relation503();
    virtual ~Relation503();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION503_H
