#ifndef BUFF001060_H
#define BUFF001060_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001060 : public BuffR
{
public:
    Buff001060() {}
    Buff001060(int s, int d, int m) : BuffR(s, d, m) { id = 1060; }
    virtual ~Buff001060() {}
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k0 = 0.0f;
};


#endif // BUFF001060_H
