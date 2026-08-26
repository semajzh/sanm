#ifndef BUFF201031_H
#define BUFF201031_H
#include "buff.h"
#include <QVector>

class Buff201031 : public BuffR
{
public:
    Buff201031() {}
    Buff201031(int s, int d, int m) : BuffR(s, d, m) { id = 201031; }
    virtual ~Buff201031() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
   QVector<int> objs;
   float l0ex = 0.0f;
   float l0[2] = {0};
};

#endif // BUFF201031_H
