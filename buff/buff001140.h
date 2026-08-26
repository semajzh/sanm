#ifndef BUFF001140_H
#define BUFF001140_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001140 : public BuffC
{
public:
    Buff001140() {}
    Buff001140(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1140; }
    virtual ~Buff001140() {}
    virtual void enter(Ground* );
    virtual void exit(Ground* );
};


#endif // BUFF001140_H
