#ifndef BUFF0080324_H
#define BUFF0080324_H
#include "buff.h"

class Buff0080324 : public BuffC
{
public:
    Buff0080324() {}
    Buff0080324(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 80324; }
    virtual ~Buff0080324() {}

    virtual void enter(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );
    virtual void run(Ground* ) {}
    bool run(Ground* , int );

private:
    int round = 0;
};

#endif // BUFF0080324_H
