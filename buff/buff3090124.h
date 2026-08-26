#ifndef BUFF3090124_H
#define BUFF3090124_H
#include "buff.h"

class Buff3090124 : public BuffC
{
public:
    Buff3090124() {}
    Buff3090124(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 3090124; }
    virtual ~Buff3090124() {}

    virtual void enter(Ground*);
    virtual void exit(Ground*);
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float k0 = 0.0f;
};

#endif // BUFF3090124_H
