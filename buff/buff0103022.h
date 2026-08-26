#ifndef BUFF0102021_H
#define BUFF0102021_H
#include "buff.h"

class Buff0103022 : public BuffC
{
public:
    Buff0103022() {}
    Buff0103022(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 103022; }
    virtual ~Buff0103022() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float i1 = 0.0f;
};

#endif // BUFF0102021_H
