#ifndef BUFF1011021_H
#define BUFF1011021_H
#include "buff.h"
#include <QVector>

class Buff1011021 : public BuffR
{
public:
    Buff1011021() {}
    Buff1011021(int s, int d, int m) : BuffR(s, d, m) { id = 1011021; }
    virtual ~Buff1011021() {}

    virtual void run(Ground* );
    float run(Ground* , int obj);
};

#endif // BUFF1011021_H
