#ifndef BUFF3011422_H
#define BUFF3011422_H
#include "buff.h"

class Buff3011422 : public BuffC
{
public:
    Buff3011422() {}
    Buff3011422(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 3011422; }
    virtual ~Buff3011422() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> );

private:
    bool check4110121(Ground* ground);
    float i2 = 0.0f;
};

#endif // BUFF3011422_H
