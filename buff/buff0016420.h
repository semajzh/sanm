#ifndef BUFF0016420_H
#define BUFF0016420_H
#include "buff.h"
#include <QVector>

class Buff0016420 : public BuffR
{
public:
    Buff0016420() {}
    Buff0016420(int s, int d, int m) : BuffR(s, d, m) { id = 16420; }
    virtual ~Buff0016420() {}

    virtual void run(Ground* ground);

private:
    int round = 0;
    int count = 0;
};

#endif // BUFF0016420_H
