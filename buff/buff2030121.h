#ifndef BUFF2030121_H
#define BUFF2030121_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff20301211 : public BuffR
{
public:
    Buff20301211() {}
    Buff20301211(int s, int d, int m) : BuffR(s, d, m) { id = 20301211; }
    virtual ~Buff20301211() {}

    virtual void run(Ground* ground);
};

class Buff20301212 : public BuffR
{
public:
    Buff20301212() {}
    Buff20301212(int s, int d, int m) : BuffR(s, d, m) { id = 20301212; }
    virtual ~Buff20301212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);
};

class Buff20301213 : public BuffC
{
public:
    Buff20301213() {}
    Buff20301213(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 20301213; }
    virtual ~Buff20301213() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j9 = 0.0f;
};


#endif // BUFF2030121_H
