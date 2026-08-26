#ifndef BUFF4010520_H
#define BUFF4010520_H
#include "buff.h"
#include <QSet>

class Buff4010520 : public BuffR
{
public:
    Buff4010520() {}
    Buff4010520(int s, int d, int m) : BuffR(s, d, m) { id = 4010520; }
    virtual ~Buff4010520() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* );
    void run(Ground* , int );

private:
    int selectObjMaxi0(Ground* ground, int obj);
    bool check401058(Ground *ground, int obj);
    float l10 = 0.0f;
    int round = 0;
    QSet<int> objs;
};

class Buff40105202 : public BuffR
{
public:
    Buff40105202() {}
    Buff40105202(int s, int d, int m) : BuffR(s, d, m) { id = 40105202; }
    virtual ~Buff40105202() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k1 = 0.0f;
};

#endif // BUFF4010520_H
