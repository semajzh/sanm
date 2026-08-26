#ifndef BUFF3010121_H
#define BUFF3010121_H
#include "buff.h"
#include <QVector>

class Buff3010121 : public BuffR
{
public:
    Buff3010121() {}
    Buff3010121(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 3010121; }
    virtual ~Buff3010121() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
   float j4 = 0.0f;
   float j7 = 0.0f;
   float l1 = 0.0f;
   float l2 = 0.0f;
};

#endif // BUFF3010121_H
