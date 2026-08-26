#ifndef BUFF2010321_H
#define BUFF2010321_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff2010321 : public BuffR
{
public:
    Buff2010321() {}
    Buff2010321(int s, int d, int m) : BuffR(s, d, m) { id = 2010321; }
    virtual ~Buff2010321() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    int round = 0;
    int count = 0;
    float j12 = 0.0f;
};

#endif // BUFF2010321_H
