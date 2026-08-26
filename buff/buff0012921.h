#ifndef BUFF0012921_H
#define BUFF0012921_H
#include "buff.h"
#include <QVector>

class Buff0012921 : public BuffR
{
public:
    Buff0012921() {}
    Buff0012921(int s, int d, int m) : BuffR(s, d, m) { id = 12921; }
    virtual ~Buff0012921() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0012921_H
