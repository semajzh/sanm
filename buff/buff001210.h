#ifndef BUFF001210_H
#define BUFF001210_H
#include "buff.h"
#include <QSharedPointer>

class Buff001210 : public BuffR
{
public:
    Buff001210() {}
    Buff001210(int s, int d, int m) : BuffR(s, d, m) { id = 1210; }
    virtual ~Buff001210() {}
    virtual void exit(Ground* );
    virtual void run(Ground* );

private:
    int count = 0;
    float k1 = 0.0f;
};


#endif // BUFF001210_H
