#ifndef BUFF001110_H
#define BUFF001110_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001110 : public BuffR
{
public:
    Buff001110() {}
    Buff001110(int s, int d, int m) : BuffR(s, d, m) { id = 1110; }
    virtual ~Buff001110() {}
    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float j6 = 0.0f;
};


#endif // BUFF001110_H
