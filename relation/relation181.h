#ifndef RELATION181_H
#define RELATION181_H
#include "relation.h"

class Ground;
class Item;
class Relation181 : public Relation
{
public:
    Relation181();
    virtual ~Relation181();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION181_H
