#ifndef BUFF0014120_H
#define BUFF0014120_H
#include "buff.h"
#include <QVector>

class Buff0014120 : public BuffR
{
public:
    Buff0014120() {}
    Buff0014120(int s, int d, int m) : BuffR(s, d, m) { id = 14120; }
    virtual ~Buff0014120() {}

    virtual void run(Ground* ground);

private:
    int round = 0;
    int count = 0;
};

class Buff00141202 : public BuffC
{
public:
    Buff00141202() {}
    Buff00141202(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 141202; }
    virtual ~Buff00141202() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float l0 = 0.0f;
};

#endif // BUFF0014120_H
