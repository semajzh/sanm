#ifndef BUFF0130222_H
#define BUFF0130222_H
#include "buff.h"

class Buff0130222 : public BuffC
{
public:
    Buff0130222() {}
    Buff0130222(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 130222; }
    virtual ~Buff0130222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int checkBuff(Ground* );
    int count = 0;
    float j23 = 0.0f;
};

#endif // BUFF0130222_H
