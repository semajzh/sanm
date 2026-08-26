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
    float ix = 0.0f;
    float l0 = 0.0f;
    int index = -1;
    int maxi(Ground* ground, int pos);
};


#endif // BUFF205011_H
