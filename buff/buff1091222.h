#ifndef BUFF1091222_H
#define BUFF1091222_H
#include "buff.h"

class Buff1091222 : public BuffR
{
public:
    Buff1091222() {}
    Buff1091222(int s, int d, int m) : BuffR(s, d, m) { id = 1091222; }
    virtual ~Buff1091222() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* );

private:
    float j0 = 0.0f;
    int count = 0;
};

#endif // BUFF1091222_H
