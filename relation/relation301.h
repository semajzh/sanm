#ifndef RELATION301_H
#define RELATION301_H
#include "relation.h"

class Ground;
class Item;
class Relation301 : public Relation
{
public:
    Relation301();
    virtual ~Relation301();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION301_H
