#ifndef BUFF_H
#define BUFF_H
#include <QSharedPointer>

class Ground;
class Buff
{
public:
    Buff() {}
    Buff(int s, int d, int m, int t) : src(s), des(d), method(m), meta(t) {}
    virtual ~Buff() {}
    virtual void enter(Ground* ) {}
    virtual void exit(Ground* ) {}
    virtual void update(Ground* , QSharedPointer<Buff> ) {}
    virtual void run(Ground* ) {}

    int id = 0;
    int src, des;
    int method = 0;
    int meta = 0;
    char name[30] = {0};
};

class BuffC : public Buff
{
public:
    BuffC() {}
    BuffC(int s, int d, int m, int r, int t = 0) : Buff(s, d, m, t), m_round(r) {}
    virtual ~BuffC() {}
    virtual void update(Ground* , QSharedPointer<Buff> buff) {m_round = qSharedPointerCast<BuffC>(buff)->m_round;}
    int m_round = 0;
};

class BuffR : public Buff
{
public:
    BuffR() {}
    BuffR(int s, int d, int m, int t = 0) : Buff(s, d, m, t) {}
    virtual ~BuffR() {}
};

#endif // BUFF_H
