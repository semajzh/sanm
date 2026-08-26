#ifndef BUFF0020324_H
#define BUFF0020324_H
#include "buff.h"

class Buff0020324 : public BuffC
{
public:
    Buff0020324() {}
    Buff0020324(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 20324; }
    virtual ~Buff0020324() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float i0 = 0.0f;
    float i1 = 0.0f;
    float i2 = 0.0f;
};

#endif // BUFF0020324_H
