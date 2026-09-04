#ifndef BUFF201011_H
#define BUFF201011_H
#include "buff.h"
#include <QVector>

class Buff201011 : public BuffR
{
public:
    Buff201011() {}
    Buff201011(int s, int d, int m) : BuffR(s, d, m) { id = 201011; }
    virtual ~Buff201011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float j15 = 0.0f;
    int round = 0;
    int count = 0;
    bool triggered = false;
};

#endif // BUFF201011_H
