#ifndef BUFF201021_H
#define BUFF201021_H
#include "buff.h"
#include <QVector>

class Buff201021 : public BuffC
{
public:
    Buff201021() {}
    Buff201021(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 201021; }
    virtual ~Buff201021() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    int count = 0;
    float j4 = 0.0f;
};

#endif // BUFF201021_H
