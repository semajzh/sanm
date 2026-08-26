#ifndef BUFF401011_H
#define BUFF401011_H
#include "buff.h"

class Buff401011 : public BuffR
{
public:
    Buff401011() {}
    Buff401011(int s, int d, int m) : BuffR(s, d, m) { id = 401011; }
    virtual ~Buff401011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF401011_H
