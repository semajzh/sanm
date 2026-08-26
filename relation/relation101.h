#ifndef RELATION101_H
#define RELATION101_H
#include "relation.h"

class Ground;
class Item;
class Relation101 : public Relation
{
public:
    Relation101();
    virtual ~Relation101();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION101_H
