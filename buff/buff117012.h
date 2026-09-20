#ifndef BUFF117012_H
#define BUFF117012_H
#include "buff.h"

class Buff117012 : public BuffR
{
public:
    Buff117012() {}
    Buff117012(int s, int d, int m) : BuffR(s, d, m) { id = 117012; }
    virtual ~Buff117012() {}

    virtual void run(Ground* );
    void run(Ground* , int );
};

#endif // BUFF117012_H
