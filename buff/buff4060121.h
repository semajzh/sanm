#ifndef BUFF4060121_H
#define BUFF4060121_H
#include "buff.h"
#include <QVector>

class Buff4060121 : public BuffC
{
public:
    Buff4060121() {}
    Buff4060121(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 4060121; }
    virtual ~Buff4060121() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
   float k5 = 0.0f;
};

#endif // BUFF4060121_H
