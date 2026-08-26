#ifndef RELATION502_H
#define RELATION502_H
#include "relation.h"

class Ground;
class Item;
class Relation502 : public Relation
{
public:
    Relation502();
    virtual ~Relation502();
    virtual bool run(Ground* ground, int group);
};

#endif // RELATION502_H
