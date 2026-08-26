#ifndef BUFF001050_H
#define BUFF001050_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001050 : public BuffR
{
public:
    Buff001050() {}
    Buff001050(int s, int d, int m) : BuffR(s, d, m) { id = 1050; }
    virtual ~Buff001050() {}
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k0 = 0.0f;
};


#endif // BUFF001050_H
