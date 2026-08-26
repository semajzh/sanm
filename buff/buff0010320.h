#ifndef BUFF0010320_H
#define BUFF0010320_H
#include "buff.h"
#include <QVector>

class Buff0010320 : public BuffR
{
public:
    Buff0010320() {}
    Buff0010320(int s, int d, int m) : BuffR(s, d, m) { id = 10320; }
    virtual ~Buff0010320() {}

    virtual void run(Ground* ) {}
    void run(Ground* ground, int obj, float point);
};

#endif // BUFF0010320_H
