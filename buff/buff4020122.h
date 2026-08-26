#ifndef BUFF4020122_H
#define BUFF4020122_H
#include "buff.h"

class Buff40201221 : public BuffC
{
public:
    Buff40201221() {}
    Buff40201221(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 40201221; }
    virtual ~Buff40201221() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float ix[4] = {0};
};

class Buff40201222 : public BuffC
{
public:
    Buff40201222() {}
    Buff40201222(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 40201222; }
    virtual ~Buff40201222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    bool check4110121(Ground* ground);
    float ix[4] = {0};
};

#endif // BUFF4020122_H
