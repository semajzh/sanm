#ifndef BUFF001090_H
#define BUFF001090_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001090 : public BuffR
{
public:
    Buff001090() {}
    Buff001090(int s, int d, int m) : BuffR(s, d, m) { id = 1090; }
    virtual ~Buff001090() {}
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};


#endif // BUFF001090_H
