#ifndef BUFF2010721_H
#define BUFF2010721_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff20107211 : public BuffR
{
public:
    Buff20107211() {}
    Buff20107211(int s, int d, int m) : BuffR(s, d, m) { id = 20107211; }
    virtual ~Buff20107211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float k0 = 0.0f;
};

class Buff20107212 : public BuffR
{
public:
    Buff20107212() {}
    Buff20107212(int s, int d, int m) : BuffR(s, d, m) { id = 20107212; }
    virtual ~Buff20107212() {}

    virtual void run(Ground* ground);
};

#endif // BUFF2010721_H
