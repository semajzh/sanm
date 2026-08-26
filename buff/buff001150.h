#ifndef BUFF001150_H
#define BUFF001150_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001150 : public BuffR
{
public:
    Buff001150() {}
    Buff001150(int s, int d, int m) : BuffR(s, d, m) { id = 1150; }
    virtual ~Buff001150() {}
    virtual void enter(Ground* );
    virtual void exit(Ground* );
};


#endif // BUFF001150_H
