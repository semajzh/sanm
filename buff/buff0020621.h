#ifndef BUFF0020621_H
#define BUFF0020621_H
#include "buff.h"
#include <QVector>

class Buff00206211: public BuffR
{
public:
    Buff00206211() {}
    Buff00206211(int s, int d, int m) : BuffR(s, d, m) { id = 206211; }
    virtual ~Buff00206211() {}

    virtual void run(Ground* ground);
};

class Buff00206212 : public BuffR
{
public:
    Buff00206212() {}
    Buff00206212(int s, int d, int m) : BuffR(s, d, m) { id = 206212; }
    virtual ~Buff00206212() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0020621_H
