#ifndef BUFF0010822_H
#define BUFF0010822_H
#include "buff.h"

class Buff0010822 : public BuffC
{
public:
    Buff0010822() {}
    Buff0010822(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 10822; }
    virtual ~Buff0010822() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float i[4] = {0};
};

#endif // BUFF0010822_H
