#ifndef BUFF001170_H
#define BUFF001170_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001170 : public BuffR
{
public:
    Buff001170() {}
    Buff001170(int s, int d, int m) : BuffR(s, d, m) { id = 1170; }
    virtual ~Buff001170() {}
    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float j9 = 0.0f;
};


#endif // BUFF001170_H
