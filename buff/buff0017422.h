#ifndef BUFF0017422_H
#define BUFF0017422_H
#include "buff.h"

class Buff0017422 : public BuffC
{
public:
    Buff0017422() {}
    Buff0017422(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 17422; }
    virtual ~Buff0017422() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );
};

#endif // BUFF0017422_H
