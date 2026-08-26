#ifndef BUFF0012620_H
#define BUFF0012620_H
#include "buff.h"
#include <QVector>

class Buff0012620 : public BuffR
{
public:
    Buff0012620() {}
    Buff0012620(int s, int d, int m) : BuffR(s, d, m) { id = 12620; }
    virtual ~Buff0012620() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0012620_H
