#ifndef RELATION_H
#define RELATION_H
#include <QSharedPointer>

class Ground;
class Relation
{
public:
    Relation();
    virtual ~Relation();
    virtual bool run(Ground*, int);

public:
    static QSharedPointer<Relation> getRelation(int id);
    int type;
    int id;
    char name[20] = {0};
};

#endif // RELATION_H
