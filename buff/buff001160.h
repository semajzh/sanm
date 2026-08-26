#ifndef BUFF001160_H
#define BUFF001160_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001160 : public BuffR
{
public:
    Buff001160() {}
    Buff001160(int s, int d, int m) : BuffR(s, d, m) { id = 1160; }
    virtual ~Buff001160() {}
    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float j9 = 0.0f;
};


#endif // BUFF001160_H
