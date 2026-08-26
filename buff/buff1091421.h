#ifndef BUFF1091421_H
#define BUFF1091421_H
#include "buff.h"

class Buff1091421 : public BuffR
{
public:
    Buff1091421() {}
    Buff1091421(int s, int d, int m) : BuffR(s, d, m) { id = 1091421; }
    virtual ~Buff1091421() {}

    virtual void exit(Ground* );
    virtual void run(Ground* );

private:
    QVector<int> objs;
    float point = 0.0f;
};

#endif // BUFF1091421_H
