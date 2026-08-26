#ifndef BUFF0014220_H
#define BUFF0014220_H
#include "buff.h"
#include <QVector>

class Buff0014220: public BuffR
{
public:
    Buff0014220() {}
    Buff0014220(int s, int d, int m) : BuffR(s, d, m) { id = 14220; }
    virtual ~Buff0014220() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    int count = 0;
    float j11 = 0.0f;
    float k1 = 0.0f;
};

#endif // BUFF0014220_H
