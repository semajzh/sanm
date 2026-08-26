#ifndef BUFF001080_H
#define BUFF001080_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001080 : public BuffR
{
public:
    Buff001080() {}
    Buff001080(int s, int d, int m) : BuffR(s, d, m) { id = 1080; }
    virtual ~Buff001080() {}
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float i1 = 0.0f;
};


#endif // BUFF001080_H
