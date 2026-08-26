#ifndef BUFF205012_H
#define BUFF205012_H
#include "buff.h"
#include <QVector>

class Buff205012 : public BuffR
{
public:
    Buff205012() {}
    Buff205012(int s, int d, int m) : BuffR(s, d, m) { id = 205012; }
    virtual ~Buff205012() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
   float l1 = 0.0f;
   float l2 = 0.0f;
};

#endif // BUFF205012_H
