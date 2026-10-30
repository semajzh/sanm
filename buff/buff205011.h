#ifndef BUFF205011_H
#define BUFF205011_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff205011 : public BuffR
{
public:
    Buff205011() {}
    Buff205011(int s, int d, int m) : BuffR(s, d, m) { id = 205011; }
    virtual ~Buff205011() {}
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    int index = -1;
    float ix = 0.0f;
    float l0 = 0.0f;
};


#endif // BUFF205011_H
